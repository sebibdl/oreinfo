#include <fstream>
#include <iostream>
using namespace std;
int n , m, A[101][101];
int main ()
{
    cin >> n >> m;
    for (int i=1; i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> A[i][j];
            
    int lin=n-1;

    for (int i=lin;i<n;i++)
        for (int j=1;j<=m;j++)
            A[i][j]=A[i+1][j];
    n--;
    
    int col=m-1;

    for (int i=1;i<=n;i++)
        for (int j=col; j<m;j++)
            A[i][j]=A[i][j+1];

    m--;

    for (int i=1; i<=n;i++)
        {
            for (int j=1;j<=m;j++)
            cout << A[i][j] << " ";
            cout << endl;
        }

    return 0;
}