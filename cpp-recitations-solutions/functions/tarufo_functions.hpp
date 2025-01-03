// https://www.geeksforgeeks.org/include-guards-in-c/

// https://learn.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-160


#include <vector>
#include "tarufo_functions.cpp"
using namespace std;

void display_misses(int misses);
void greet();
void end_game(string codeword, string answer);
void display_status(vector<char> incorrect, string answer);

// Declare your new functions here. 
// This is what C++ header files are for -> Declaration!


// NOTE: Now in this case I could have just imported the file of defined functions (i.e. our function library) to the main program, but this header is here to show good practice in C++ programming. When you begin dealing with Classes, Structures, and Namespaces containing many methods and paramaters, headers are useful to declare all of that.

// I did encounter a small issue with this .hpp file in VS Code on Windows, but in all hope you got good programming fundamentals practice from this. Bonus : Do the FizzBuzz Problem. NEXT UP: Drone Programming!