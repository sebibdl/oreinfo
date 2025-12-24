#include <fstream>
#include <iostream>
using namespace std;
ifstream fin ("maxminmatrice.in");
ofstream fout ("maxminmatrice.out");
int A[24][24], n, m;
int main() {
    fin >> n >> m;

    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            fin >> A[i][j];
        int maximg=-1;
    for (int i=1;i<=n;i++)
        {   int maximl=A[i][1];
             for (int j=1;j<=m;j++)
                if (maximl > A[i][j])
                    maximl=A[i][j];
            if (maximl>maximg)
                maximg=maximl;
        }
        fout << maximg;

}