#include <fstream>
#include <iostream>
using namespace std;

int A[50][50], n, m;
int main() {
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> A[i][j];

    for (int i=1;i<=m;i++)
      { 
        int ok=1; int ceva=A[1][i];
        for(int j=1;j<=n;j++)
            if (A[j][i]!=ceva)
                ok=0;
        if (ok)
            cout << ceva << " ";
        }


}