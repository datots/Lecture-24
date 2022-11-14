/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int i, j, matrix[10][10], row, col;
   int sum = 0;
   

   cout<<"\nEnter the number of Rows : ";
   cin>>row;
 
   cout<<"\nEnter the number of Columns : ";
   cin>>col;
   
   for(i=0;i<row;i++){
       for(j=0;j<col;j++){
         cout<<"\nEnter the Element a[%d][%d] : ", i, j;
         cin>>matrix[i][j];
       }
   }
   for(i=0;i<row;i++){
       for(j=0;j<col;j++){
           if(i==j)
            sum = sum + matrix[i][j];
       }
   }
    cout<<"\nAddition of Diagonal Array Elements in the Matrix is: "<<sum;

    return 0;
}
