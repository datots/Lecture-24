/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
        int A[10], B[10], n, i, j, k = 0;

    cout << "Enter size of array : ";

    cin >> n;

    cout << "Enter elements of array : ";

    for (i = 0; i < n; i++)

        cin >> A[i];    

    for (i = 0; i < n; i++)

    {

        for (j = 0; j < k; j++)

        {

            if (A[i] == B[j])

                break;

        }

        if (j == k)

        {

            B[k] = A[i];

            k++;

        }

    }

    cout << "Repeated elements after deletion : ";

    for (i = 0; i < k; i++)

        cout << B[i] << " ";
    return 0;
}
