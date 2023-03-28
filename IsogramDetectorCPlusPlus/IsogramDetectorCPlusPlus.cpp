// IsogramDetectorCPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// Isogram Detector written in C++
// by Shane
//
// The code requires a single word string and will then return True or False depending on whether the input string is an isogram or not
// An isogram is a string in which no letter of the alphabet occurs more than once
// For instance, "planet" is an isogram but "mercury" is not an isogram as the letter r appears twice
// 
// Feel free to look at this code and learn but please don't reuse it without my permission
//
// This code works best using a proper C compiler rather than the SoloLearn testing environment
// due to needing input from the user
//
//
// original code: 28th March 2023


// Set up required headers
#include <iostream>
#include <sstream>
#include <ctime>
using namespace std;


int main()
{
    // Create and initialise variables
    string inputString = "";
    bool validInput = false;

    clock_t startTime, currentTime;
    double elapsedSeconds;

    // Get the input word from the user
    while (validInput == false) {
        std::cout << "Please enter a single word to test >";
        getline(cin, inputString);

        // TODO: Test to see if this is a valid single word

    }

    // TODO: Split word into component letters and run through each

    // TODO: If a letter is used more than one time return false

    // TODO: Return true

    // TODO: Ask if user wants to try again

    

    
}


