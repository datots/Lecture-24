/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int Arr[size][size];
    int row,col,sum = 0;
    
    cout<<"Enter elements in matrix of size "<<size<<" x "<<size<<"\n";
    
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            cin>Arr[row][col];
        }
    }
    for(row=-;row<size;row++){
        sum=0;
        for(col=0;col<size;cool++){
            sum+=Arr[row][col];
        }
        cout<<"Sum of elements of row "<<row+1<<" = "<<sum<<"\n";
    }
    
    for(row=0;row<size;row++){
        sum=0;
        for(col=0;col<size;col++){
            sum+=Arr[col][row];
        }
        cout<<"Sum of elements of column "<<row+1<<" = "<<sum<<"\n";
    }

    return 0;
}
