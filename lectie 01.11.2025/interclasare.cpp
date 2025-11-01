#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("interclasare.in");
ofstream fout ("interclasare.out");
int A[100001],B[100001],C[200002],m,n;
int main ()
{
    fin >> n ;
    for (int i=1;i<=n;i++)
        fin >> A[i];
    
    fin >> m;
    for (int i=1;i<=m;i++)
        fin >> B[i];
    
    int i=1,j=1,k=1;
    while (i<=n && j<=m)
    {
        if (A[i]<B[j])
        {
            C[k]=A[i];
            i++;
            k++;
        }
        else
        {
            C[k]=B[j];
            k++;
            j++;
        }
    }
    while (i<=n)
    {
        C[k++]=A[i];
        i++;
    }
    while (j<=m)
    {
        C[k++]=B[j];
        j++;
    }
    for (int i=1;i<k;i++)
        {
        fout << C[i] << " ";
        if (i%10==0)
            fout << "\n";
        }
    return 0;
}