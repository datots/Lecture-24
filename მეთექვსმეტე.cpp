/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[4][2] = {
		{ 10, 11 },
		{ 20, 21 },
		{ 30, 31 },
		{ 40, 41 }
		} ;
		
		int i,j;
		
		cout<<"Printing a 2D Array:\n";
		
		for(i=0;i<4;i++){
		    for(j=0;j<2;j++){
		        cout<<"\t"<<arr[i][j];
		    }
		    cout<<endl;
		}
    return 0;
}
