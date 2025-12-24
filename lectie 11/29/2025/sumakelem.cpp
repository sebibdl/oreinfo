#include <fstream>
#include <iostream>
using namespace std;
ifstream fin ("exista.in");
ofstream fout ("exista.in");
int n , m, A[101][101];
int main ()
{
    int k;
    fin >> m >> n >> k;

    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++)    
            fin >> A[i][j];
    int ok=0, s=0;
    for (int i=1;i<=n;i++)
        {   bool merge = true;
            for (int j=1;j<=m;j++)    
            if (merge=true && A[i][j]==k)
            {
                s+=i;
                // i++;
                merge=false;
                ok=1;
            }
        }
    if (ok==0)
        cout << "NU EXISTA";
    else 
        fout << s << " "; 
    return 0;
}