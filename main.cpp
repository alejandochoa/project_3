/*
 * This program Creates a 4 option menu for corner grocer that can check the freqency of a single word.
 * Make a histogram of the freqeucnys of each word
 *  Date:   10/14/2023
 *  Author: Alejandro Ochoa
 */
#include <iostream>
#include "grocer.h"
#include <fstream>



int main(){
    //intitializing variables
    int user_input;
    string word;
    ifstream inputFile;
    ofstream outputFile;
    string user_word;
    // open input and ouput file
    inputFile.open("CS210_Project_Three_Input_File.txt");
    outputFile.open("frequency.dat");

    //check if input file cold be opned and output an error message if it could'nt
    if (!inputFile.is_open()) {
        cout << "Could not open file CS210_Project_Three_Input_File.txt." << endl;
        return 1;
    }
    //check if output file cold be opned and output an error message if it could'nt
    if (!outputFile.is_open()) {
        cout << "Could not open file frequency.dat." << endl;
        return 1;
    }
    // While loop for menu 
    while(user_input != 4){
        menu(); // calls menu function 
        cout << "Please enter a choice for 1-4: ";
        cin >> user_input;
        cout << "\n";
        if(user_input == 1){
            cout << "Enter a word to check its frequency: ";
            cin >> user_word;
            cout << "The frequency of " << user_word << " is " << option_1(user_word, "CS210_Project_Three_Input_File.txt") << "\n\n";
            continue;
        }
        else if(user_input == 2){
            while (getline(inputFile, word)) {
                outputFile << word << " " << option_1(word, "CS210_Project_Three_Input_File.txt") << endl;
            }
            continue;
        }
        else if(user_input == 3){
            while (getline(inputFile, word)) {
                int freq = option_1(word, "CS210_Project_Three_Input_File.txt");
                cout << word << " ";
                histogram(freq); // call histogram function
                cout << endl;
            }
            continue;
        }
        else if(user_input == 4){
            cout << "Exiting program.\n";
            break; 
        }
        else {
            cout << "Error, did not input valid option, has to be 1-4\n\n";
            break; 
        }
    }
    // close file 
    inputFile.close();
    outputFile.close();
    return 0;
}