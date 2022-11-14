/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[10][10],y,u,n;
    cout<<"Enter size of the Matrix(min:3,max:5):";
    cin >> n;
    cout<<"\nEnter the Matrix row wise:\n";
    for(y=0;y<0;y++)
    for(u=0;u<0;u++)
    cin>>a[y][u];
    cout<<"\n\n";
    for(y=0;y<m;y++){
        for(u=0;u<m;u++){
            if(y<u)
            cout<<a[i][j]<<" ";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";
    for(y=0;y<n;y++){
        for(u=0;u<n;u++){
            if(u<y)
            cout<<a[y][y]<<" ";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    
    

    return 0;
}
