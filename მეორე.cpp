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
    int arr[] = {12,45,34,87,90,39};
    
    int size = 6;
    
    int sum=0;
    
    for(int i = 0; i<size;i++){
        sum = sum + arr[i];
    }
    
    cout << "The sum of the elements in the array: " << sum;
    return 0;
}