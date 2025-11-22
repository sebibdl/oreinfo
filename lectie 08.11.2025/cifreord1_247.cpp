#include <iostream>
#include <fstream> 
using namespace std;
ifstream fin ("cifreord1.in");
ofstream fout("cifreord1.out");
int V[10]={};
int x;
int main()
{
    while (fin >> x)
    {
        while (x)
        {
            V[x%10]++;
            x/=10;
        }
    }
    int c=0;
    for (int i=9;i>=0;i--)
    {   
        while (V[i])
        {
            fout << i << " ";
            V[i]--;
            c++;
            if (c==20)
            cout << "\n" ;
        }
        
    }

    return 0;
}