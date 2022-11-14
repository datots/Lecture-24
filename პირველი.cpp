/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double avg,num1,num2,num3,num4,num5;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Enter third number: ";
    cin >> num3;
    
    cout << "Enter forth number: ";
    cin >> num4;
    
    cout << "Enter fifth number: ";
    cin >> num5;
    
    
    avg = (num1+num2+num3+num4+num5) / 5;
    
    cout<<"The average is: "<<avg<<endl;
    return 0;
}