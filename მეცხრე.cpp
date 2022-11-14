/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    
    int arr1[size];
    int arr2[size];
    int merge[size *2];
    cout<<"Enter elements of first array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of second array"<<endl;
    for(int i = 0;i < size;i++){
        
        cin>>arr2[i];
    }
    for(int i = 0;i<size;i++){
        
        merge[i] = arr1[i];
    }
    
    for(int i = 0; i< size; i++){
        
        merge[size + i] = arr2[i];
    }
    
    cout<<"Merge array is"<< endl;
    
    for(int i = 0; i < size * 2;i++){
        cout<<merge[i]<<" ";
    }

    return 0;
}