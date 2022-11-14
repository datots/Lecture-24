/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

void printUnion(int arr1[],int arr2[],int m,int n){
    
    int i = 0,j = 0;
    while(i<m&&j<n){
        if(arr1[i] < arr2[i])
           cout<<arr1[i++] << " ";
        else if (arr2[j]< arr1[j])
                cout<<arr2[j++]<<" ";
        else{
            cout<<arr2[j++]<<" ";
            i++;
        }        
    }
    
    while(i<m)
         cout<<arr1[i++]<<" ";
    while(j<n)
         cout<<arr2[j++]<<" ";
}


int main()
{
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {2,3,5,7};
    
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    
    printUnion(arr1,arr2,m,n);

    return 0;
}