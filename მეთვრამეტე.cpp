/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    const int n=10;
    int arr1[n],arr2[n],i;
    
    cout <<"Enter array element";
    
    for(i=0;i<n;i++){
        cin >> arr1[i];
    }
    for(i = 0;i<n;i++){
        arr2[i] = arr1[i];
    }
    cout<<"Copy Array List is: ";
    for(i = 0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}
