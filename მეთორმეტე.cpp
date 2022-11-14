/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int b[5][5],big2 = 1,big3 = 0,m,n,y,j;
    cout<<"Enter number of rows and columns(max 5):";
    cin>>n>>m;
    cout<<"Enter the array:\n";
    
    for(y=0;y<n;y++)
        for(j=0;j<m;j++)
            cin>>b[y][j];
    for(y=0;y<n;y++)
        for(j=0;j<m;j++){
            if(b[y][j]>big2)
                big2=b[y][j];
        }
    for(y=0;y<m;y++)
        for(j=0;j<n;j++){
            if(b[y][j]>big2&&b[y][j]<big2)
                big3=b[y][j];
        }
    cout<<"\nLargest number:"<<big2;
    cout<<"\nSecond largest number:"<<big3;    
    

    return 0;
}
