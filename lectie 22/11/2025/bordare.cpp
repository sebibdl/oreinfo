#include <fstream>
#include <iostream>
using namespace std;

int A[50][50], n, m;
int main() {

    cin >> n >> m;

    for(int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> A[i][j];
    
    int x=A[n][m];
    for(int i=1;i<=n;i++)
    {
        A[i][1]=x;
        A[i][m]=x;
    }

    for (int i=1;i<=m;i++)
    {
        A[1][i]=x;
        A[n][i]=x;
    }

     for(int i=1;i<=n;i++)
       { for (int j=1;j<=m;j++)
            cout << A[i][j] << " ";
        cout << endl;
       }


}