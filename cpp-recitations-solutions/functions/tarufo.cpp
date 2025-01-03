#include <iostream>
#include "tarufo_functions.hpp"
using namespace std;

int main() {
    greet();

    // Alphabet
    // --------------------------------- //
    vector<char> lowercase = {};
    vector<char> uppercase = {};
    int n;

    // Using ASCII Values, https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
    n = 65;
    // Uppercase Alphabet
    for(int i = n; i < n+26; i++){
        uppercase.push_back(i);
    }
    n = 97;
    // Lowecase Alphabet
    for(int i = n; i < n+26; i++){
        lowercase.push_back(i);
    }
    // --------------------------------- //

    int misses = 0;
    string codeword, answer, output;
    codeword = "Texas Aerial Robotics";
    int N = codeword.size();
    // Make codeword lowercase (no case sensitivity in this game)
    for(int i = 0; i < N; i++){
    for(int j = 0; j < uppercase.size(); j++){
    if(codeword[i] == uppercase[j]){
        codeword[i] = lowercase[j];
      }
    }
    }


    answer = "";
    for(int i = 0; i < N; i++){
        if(codeword[i] == 32){ // NOTE: 32 is the ASCII value for a blank space
            answer = answer + " ";
        }
        else{
        answer = answer + "_";
        }
    }

    vector<char> incorrect = {};
    bool guess = false;
    char letter;
    
    do{
    display_misses(misses);

    display_status(incorrect,answer);

    cout << "Guess a letter (lowercase) : ";
    cin >> letter;

    for(int i = 0; i < N; i++){
        if(letter == codeword[i]){
            answer[i] = codeword[i];
            guess = true;
        }
    }

    if(guess==true){
        output = "\nCorrect guess!\n";
    }
    else{
        incorrect.push_back(letter);
        output = "\nIncorrect guess. Your friend nears their abduction!\n";
        misses++;
    }

    cout<< output;
    guess=false;
    }while(misses<7 && answer!=codeword);

    display_status(incorrect,answer);

    end_game(codeword,answer);

    return 0;
}
