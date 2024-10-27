// CTA_WEEK3_PROG3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main() {
    //declare three int variables to hold the numbers entered
    int numOne;
    int numTwo;
    int numThree;

    //prompt user for three integers
    cout << "Enter 3 Integers." << endl;
    cout << "First Int: ";
    cin >> numOne;
    cout << "Second Int: ";
    cin >> numTwo;
    cout << "Third Int: ";
    cin >> numThree;

    //declare three int pointers dynamicly to point to int variables
    int* ptrOne = new int(numOne);
    int* ptrTwo =  new int(numTwo);
    int* ptrThree = new int(numThree);

    //print values and memory addressess
    cout << "Variable numOne: " << numOne << ", Dereferenced ptrOne: " << *ptrOne <<  ", Address of numOne: " << &numOne
        <<", Value of ptrOne: " << ptrOne << endl;
    cout << "Variable numTwo: " << numTwo << ", Dereferenced ptrTwo: " << *ptrTwo << ", Address of numTwo: " << &numTwo
        << ", Value of ptrTwo: " << ptrTwo << endl;
    cout << "Variable numThree: " << numThree << ", Dereferenced ptrThree: " << *ptrThree << ", Address of numThree: " << &numThree
        << ", Value of ptrThree: " << ptrThree << endl;

    //free the dynamically allocated memory
    delete ptrOne;
    delete ptrTwo;
    delete ptrThree;

    return 0;
}
