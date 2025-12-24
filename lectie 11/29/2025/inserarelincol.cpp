#include <fstream>
#include <iostream>
using namespace std;
ifstream fin ("prodmax.in");
ofstream fout ("prodmax.out");
int n , m;
double V[101], A[101][101];
int main ()
{
    cin >> n;
    m=n;
    for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=m;j++)
          {  cin >> A[i][j];
             V[i]+=A[i][j];
          }
        }
    
    int mijloc = m/2+1;
    for (int i=1;i<=n;i++)
        for (int j=m;j>=mijloc;j--)
            A[i][j+1]=A[i][j];
            
    m++;
    for (int i=1;i<=n;i++)
        A[i][mijloc]=V[i]/n;

     for (int i=1;i<=n;i++)
         { 
            for (int j=1;j<=m;j++)
            cout << A[i][j] << " ";
            cout << endl;
         }

    return 0;   
}