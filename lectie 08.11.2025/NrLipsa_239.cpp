#include <iostream> 
#include <fstream>
using namespace std;
ifstream fin("nrlipsa.in");
ofstream fout("nrlipsa.in");
int V[900]={};
int x;
int main()
{
    while (fin >> x)
    {   if (x-100<=899)
        V[x-100]++;
    }
    int c=0;
    for (int i=899;i>=0;i++)
    {   
        if (V[i]==0)
        {
            c++;
            cout << V[i]+100 << " ";
        }
        if (c==2)
            break;
    }
}