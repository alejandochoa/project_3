/*
 * This program Creates a 4 option menu for corner grocer that can check the freqency of a single word.
 * Make a histogram of the freqeucnys of each word
 *  Date:   10/14/2023
 *  Author: Alejandro Ochoa
 */
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

// Funtion for menu
void menu(){
    std::cout << "1) Input item/word to look for" << std::endl;
    std::cout << "2) Print frequency" << std::endl;
    std::cout << "3) Print histogram" << std::endl;
    std::cout << "4) Exit " << std::endl;
}

// function for frequency for words
int option_1(string user_word, string file){
    string word;
    int frequency = 0;
    ifstream inputFile(file);
    // While loop that goes through file and checks the amount time a word is in the file and increments frequency of word 
    while (getline(inputFile, word)) {
        if (word == user_word) {
            frequency++;
        } 
    }
    return frequency;
} 

// function to make histogram with stars
void histogram(int freq){
    for(int i = 0; i < freq; i++){
        cout << "*";
    }
}


