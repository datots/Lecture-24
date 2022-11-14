/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j,arr[10][10],sum,rows,cols;
    cout<<"\n Enter Number of Rows    : ";
    cin>>rows;
    
    cout<<"\n Enter Number of Columns : ";
    cin>>cols;
    
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
        cout<<"\n Enter the Elements : ";//<<arr[i]<<arr[j];
        cin>>arr[i][j];
        }
        
    }
    cout<<"\n Matrix is : \n";
    for(i=0;i<rows;i++){
        cout<<"";
        for(j=0;j<cols;j++){
            if(i>j){
                cout<<" ";
                cout<<arr[i][j];  
            }
        }cout<<"\n"
    }
    sum = 0;
    for(i=0;i<rows;i++)
    for(j=0;j<cols;j++){
        if(i>j){
            sum = sum+arr[i][j];
        }
    }
    cout<<"\n Sum of Lower Triangle Elements : "<<sum;
    return 0;
}
