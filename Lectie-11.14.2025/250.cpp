#include <iostream>
#include <fstream> 
using namespace std;

ifstream fin ("interclasare1.in");
ofstream fout ("interclasare1.out");
int m , n , A[10001] , B[10001] , p, C[20002];
int main()
{
    fin >> n ;
    for (int i=1;i<=n;i++)
        fin >> A[i];
    
    fin >> m;

    for (int i=1;i<=m;i++)
        fin >> B[i];
    
    int i=1, j=1;
    while (i<=n && j<=m)
    {
        if (A[i]==B[j])
        {
            C[p++]=A[i++];
            j++;
        }
        else 
        {
            if (A[i]<B[j])
                C[p++]=A[i++];
            else 
                C[p++]=B[j++];
        }
    }   
    while (i<=n)
    C[p++]=A[i++];

    while (j<=m)
    C[p++]=B[j++];

    for (int i=0;i<p;i++)
    {
        fout << C[i] << " ";
        if (i%10==0)
            fout << endl;
    }
    
}