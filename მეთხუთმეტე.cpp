/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[50],num,temp,i,j;
    cout << " Please, enter the total no. you want to enter: ";  
    
    cin >> num;
    
    for(i=0;i<num;i++){
        cout<<"Enter the element"<<i+1<<":";
        cin>>arr[i]
    }
    
    for(i=0;j=num-1;i<num/2;i++;j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << "\n Reverse all elements of the array: " << endl;  
    
    for(i=0;i<num;i++){
        cout<< arr[i] << " ";  
    }
    return 0;
}
