#include <iostream>
#include "tarufo_functions.hpp"

// Instructions:

// Define a void function greet() in tarufo_functions.cpp that prints out the
// game title and instructions for the player.
//
// Example:
// =============
// UFO: The Game
// =============
// Instructions: save your friend from alien abduction by guessing the letters in the codeword.
//
// Let's begin in main(). Declare and initialize two std::strings, codeword
// and answer. These are the codewords the player is trying to guess and the
// correctly guessed letters with blanks in between. Initialize it to a string
// of underscores with the same length as your codeword.
//
// Initialize a new integer variable misses with a value of 0.
//
// Set up a while loop that continues as long as both of the following
// conditions are true:
//
// 1. answer is not equal to codeword.
// 2. misses less than 7. At 7 misses, the player will get taken away to Mars.
//
// Increment misses at the end of the loop so we don't get caught in an
// infinite loop.
//
// Let's skip to when the player has won or lost before we dive into the while
// loop and player turns. Below the while loop, check if the player has won.
// If the player won, print a congratulation message. ("Hooray! You saved the
// person! Congratulations, you have earned the TAR Up-and-Coming Cracked Award") Otherwise, print a consequence
// that sounds vaguely threatening.
//
// Move this last condition into a new function end_game() that allows you to
// pass strings answer and codeword as arguments. Remember to add function
// declarations to the .hpp file. Make sure the code in main() only refers to
// the function end_game() and try running the code.
//
// Moving on to taking turns, let's begin each turn by displaying the player's
// abudction status with provided ASCII art. Inside of the while loop, call
// display_misses() with an argument of misses, which has been provided.
//
// Next, display two things: The player's incorrect guesses and the answer
// produced so far. In main() above the while, create a char vector incorrect
// that we can add to on each iteration of the while loop. Also at the same
// place, initialize a bool named guess as false. This will track whether or
// not the last letter guessed was correct.
//
// Below your call of display_misses() in the while loop, print out "Incorrect
// Guesses:". Iterate through the incorrect vector and print out each
// character in incorrect followed by a space.
//
// Next, display the player's current answer in two parts: "Codeword: ", then
// iterate through answer and print each character followed by a space.
//
// Move what you just made into a function called display_status() and replace
// the code here. Call this function below display_misses in the while loop.
//
// Test your code here and find a way to make sure your code works so far.
//
// Now, we'll get player input. Above the while loop in main(), declare a new
// char called letter to capture the player's guessed letter. Inside the while
// loop, below display_status(), print a prompt to get the player's guess, and
// capture the response into letter.
//
// Below the user input, loop through each character in codeword to see if the
// player was right.
//
// On each iteration of the codeword loop, check if the guessed letter is the
// same as the one in your codeword. If so, make sure answer reflects the
// correct guess. Also, change guess to true.
//
// Below the for loop, check if the player guessed a letter correctly. If they
// did, let them know! If not, let them know a tractor beam is pulling the
// abductee in closer... (And also add the letter to the incorrect vector).
//
// Change the misses++ increment such that we only increment if the guess was
// wrong.
//
// If you compile and execute, stuff is starting to come together. But if you
// make a correct guess (e.g., “e”) and then an incorrect guess (e.g., “w”),
// the game still says you are correct because guess remains true. Fix that.

int main() {

  
}
