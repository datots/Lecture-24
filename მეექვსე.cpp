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
    int arr[100],size,pos,i,count = 0;
    cout<<"Enter the size of an array \n";
    cin >> size;
    
    cout<<"Enter the value in array \n";
    
    for(i = 0;i < size;i++){
        cin >> arr[i];
    }
    cout<<"Enter the position \n";
    cin>>pos;
    
    for(i = pos -1;i<size;i++){
        arr[i] = arr[i+1];
    }
    
    size--;
    
    
    for(i = 0;i<size;i++){
        cout<<"  "<<arr[i];
    }
    return 0;
}