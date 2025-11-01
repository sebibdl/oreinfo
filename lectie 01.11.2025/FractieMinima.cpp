#include <iostream>
using namespace std;
int n, x;
int main ()
{   cin >> n;
    int minim=2e9 , maxim=-1;
    for(int i=1;i<=n;i++)
        {
            cin >> x;
            if (x>maxim)
                maxim = x;
            if (x < minim)
                minim = x;
        }
    int a=maxim,b=minim;
    while (a)
    {
        int r = b%a;
        b=a;
        a=r;
    }
    maxim/=b;
    minim/=b;
    cout << minim << "/" << maxim;
}