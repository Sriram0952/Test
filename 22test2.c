#include <iostream>
using namespace std;

int main()
{
    int m = 2, n = 2, p = 2;
    int A[m][n] = { {1, 1}, {2, 2} };
    int B[n][p] = { {1, 1}, {2, 2} };
    int result[m][p] = {0};

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            for(int k=0;k<n;k++)
            {
                result[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    cout<<"Result matrix is: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//output
Result matrix is:
3 3 
6 6
