/*
 * This file ensures the main.cpp file can access all of the functions in grocer.cpp
 *  Date:   10/17/2023
 *  Author: Alejandro Ochoa
 */
#ifndef GROCER_H
#define GROCER_H
#include <string> 

using namespace std;

//function declarations
void menu();
int option_1(string user_word, string file);
void histogram(int freq);

#endif