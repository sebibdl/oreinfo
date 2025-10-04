 
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("bac.in");
ofstream fout ("bac.out");
int n, min1=10002, min2=10000, maxi=-1 ,x;
int invers(int n)
{
    int nou=0;
    while(n)
    {
        nou=nou*10+n%10;
        n/=10;
    }
    return nou;
}
int main()
{
    while (fin >> x)
    {
        x=invers(x);
        if (x>maxi)
            maxi=x;
        if (x<min1)
        {
            min2=min1;
            min1=x;
        }
    }

    fout << min1 << " " << maxi << " " << min2;
    // cauta subiect
    return 0;
} 