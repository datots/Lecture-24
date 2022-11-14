/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[5],max,min,i;
    cout<<"Enter elements of array: ";
    cin>>arr[i];
    
    cout<<"Your array is: ";
    for(i=0;i<5;i++)
    cout<<arr[i]<<" ";
    
    max=arr[0];
    min=arr[0];
    for(i=0;i<5;i++)
    if(max<arr[i])
    max=arr[i];
    else if(min>arr[i])
        min=arr[i];
        
    cout<<"\nMaximum element of Array: "<<max;
    cout<<"\nMinimum element of Array: "<<min;    

    return 0;
}
