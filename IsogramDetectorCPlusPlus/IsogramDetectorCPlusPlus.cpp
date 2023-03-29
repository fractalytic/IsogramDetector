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
#include <cstring>
#include <cctype>
using namespace std;


int main()
{
    // Create and initialise variables
    string inputString = "";
    bool validInput = false;
    bool spaceFound = false;
    bool digitFound = false;
    bool punctuationFound = false;
    int letterArray[26] = {};
    bool isogram = true;
    bool continuePlaying = true;
    string loopAnswer = "n";
    clock_t startTime, currentTime;
    double elapsedSeconds;

    while (continuePlaying == true) {
        
        validInput = false;
        // Get an input word from the user
        while (validInput == false) {
            std::cout << "Please enter a single word to test > ";
            getline(cin, inputString);

            // Test to see if this is a single word (no spaces), without numbers or punctuation marks
            spaceFound = false;
            digitFound = false;
            punctuationFound = false;
            for (int i = 0; i < inputString.length(); i++) {
                if (isspace(inputString[i])) {
                    spaceFound = true;
                }
                if (isdigit(inputString[i])) {
                    digitFound = true;
                }
                if (ispunct(inputString[i])) {
                    punctuationFound = true;
                }
            }
            validInput = not(spaceFound || digitFound || punctuationFound);

            if (spaceFound) {
                cout << "\nThat word isn't valid as it contains a space, please try again\n";
            }
            else if (digitFound) {
                cout << "\nThat word isn't valid as it contains a number, please try again\n";
            }
            else if (punctuationFound) {
                cout << "\nThat word isn't valid as it contains a punctuation mark, please try again\n";
            }

        }

        // Split word into component letters and run through each
        for (int i = 0; i < 26; i++) {
            letterArray[i] = 0;
        }
        isogram = true;
        for (int i = 0; i < inputString.length(); i++) {
            letterArray[(int)tolower(inputString[i]) - 97]++;
            if (letterArray[(int)tolower(inputString[i]) - 97] > 1) {
                isogram = false;
                break;
            }
        }

        // If a letter is used more than one time return false
        if (isogram) {
            cout << "Yes, congratulations the word you entered (" << inputString << ") is an isogram!" << endl << endl;
        }
        else {
            cout << "No, sorry but the word you entered (" << inputString << ") is not an isogram as it has letters that appear more than once" << endl << endl;
        }

        // TODO: Add in timing
        // TODO: Ask if user wants to try again
        cout << "Do you want another go (Y/N)? ";
        getline(cin, loopAnswer);
        if (loopAnswer == "y" || loopAnswer == "Y") {
            continuePlaying = true;
            cout << endl;
        }
        else {
            continuePlaying = false;
        }


    }
}


