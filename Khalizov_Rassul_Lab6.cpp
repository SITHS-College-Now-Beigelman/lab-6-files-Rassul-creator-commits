// Rassul Khalizov 
// Lab 6
// 10/15/24

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Defines variables
    ifstream inData; 
    ofstream outData;
    int integerA, integerB;
    char letter, letterreformed;
    string words;

    inData.open("inData.txt"); //opens the file named inData.txt
    outData.open("outData.txt");  // opens the file named outData.txt

    cout<<"processing data";  

    inData >> integerA >> integerB; //uses input from inData.txt 
    outData<<"The sum of the two integers is " << integerA + integerB << endl; // adds the integers in inData.txt then outputs it in outData.txt

    inData >> letter; 
    letterreformed = letter + 1; // moves one up the ASCII chart
    outData << "The letter after " << letter << " is " << letterreformed << endl; //outputs the next one up the ASCII chart

    inData >> words; // copies and pastes a sentence from the inData.txt to outData.txt 
    outData << words; 


    return 0; 
}
