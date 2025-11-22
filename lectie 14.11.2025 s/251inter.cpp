#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("interclasare2.in");
ofstream fout ("interclasare2.out");

int n , A[100001], m, B[100001], C[200002];
int main ()
{
    int p=1;
    fin >> n;
    for(int i=1;i<=n;i++)
        fin >> A[i];
    
    fin >> m;
    for (int i=1;i<=m;i++)
        fin >> B[i];

    int i=1,j=1;

    while (i<n && j<m)
    {
        if (A[i]==B[j])
        {
            C[p++]=A[i++];
        } else if(A[i] < B[j]) i++;
                else j++;

    }
    int c=0;
    for (int i=1;i<p;i++)
    {
        c++;
        fout << C[i]<< " ";
        if (c%10==0)
        fout << endl;


    }
}