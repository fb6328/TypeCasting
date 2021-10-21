// Admission number 123456
// 19th Oct 2021
// Strathmore University Class Task
// Teacher: fb6328
// TypeCasting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //IMPLICIT AND EXPLICIT TYPECASTING

    //Double to integer
    double myNum = 15.5;//Declare and initialize myNum double variable
    int myNewNum; //Create/declare a new integer variable myNewNum
    myNewNum = myNum;
    cout << "Implicit Typecasting of a double variable into an integer\n\n";
    cout << "myNewNum value is:" <<myNewNum<<"\n\n";
    cout << "End of double to integer typcasting\n\n";

    //Boolean data type
    cout << "Implicit Typecasting of an integer to a Boolean data type\n\n";
    bool notTrue = 0;
    bool True = 6;
    cout <<"The False result is = "<<notTrue<<"\n\n";
    cout << "The True result is = " << True<<endl;
    cout << "\n\n";

    //Character and integers and floating values
    char myChar;
    int myInt = 45;
    float myfloat = 4.567;
    int myNum2;
    myChar = static_cast<char>(myInt);   // int to char
    myNum2 = static_cast<int>(myfloat);   // float to integer
    cout << "....Typecasting character values, integers and float....\n\n";
    cout << "mChar is =" <<myChar<<endl;
    cout << "myNum2 is = " << myNum2 << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
