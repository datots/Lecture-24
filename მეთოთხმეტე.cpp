/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int i,j,rows,columns,sum=0;
  cout << "\nPlease Enter the rows and Columns =  ";
  cin >> i>>j;
  
  int sumDgnalArr[i][j];
  
  cout << "\nPlease Enter the Items\n";
  
  for(rows = 0;rows < i;rows++){
      for(columns = 0;columns < i;columns++){
          cin>> sumDgnalArr[rows][columns];
      }
  }
  
  for(rows = 0;rows<1;rows++){
      sum=sum+sumDgnalArr[rows][columns];
  }
  cout << "\nThe Sum of Diagonal Elements = " << sum;

    return 0;
}
