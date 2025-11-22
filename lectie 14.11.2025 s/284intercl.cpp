#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("interclasare3.in");
ofstream fout ("interclasare3.out");
int A[100001] ,  B[100001] , C[2000002], m , n;
int main()
{
    int p=1;
    fin >> n >> m;
    for (int i=1;i<=n;i++)
        fin >> A[i];

    for (int j=1;j<=m;j++)
        fin >> B[j];

    for (int i=1;i<m;i++)
    {
        for (int j=i+1;j<=m;j++)
        if (B[i]>B[j])
        {
            int aux=B[i];
            B[i]=B[j];
            B[j]=aux;
        }
    }
    int i=1, j=1;
    while(i <= n && j <= m)
    if(A[i] < B[j]){
        if(A[i] % 2 == 0)
            C[p ++] = A[i++]; // v[p++]= V[p] , p ++  , V[++p]=V[p+1]
        else i++;
    }
    else {
        if(B[j] % 2 == 0)
            C[p ++] = B[j++];
        else j++;
    }

    while(i <= n){
        if(A[i] % 2 == 0)
            C[p++] = A[i++];
        else i++;
    }
    while(j <= m) {
        if(B[j] % 2 == 0)
            C[p ++] = B[j ++];
        else j++;
    }
    int c=0;
    for (int i=1;i<p;i++)
    {   
        fout << C[i] << " ";
        c++;
        if (c%20==0)
        cout << endl;
    }

    return 0;
} 