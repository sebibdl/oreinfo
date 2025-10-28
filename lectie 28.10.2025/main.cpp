#include <iostream>
using namespace std;
int n;
int main()
{   
    int s=0;
    cin >> n;
    int c=0;
    int mini1 = 1<<28, mini2= 1<<28;
    
    for (int i=2;i*i<=n;i++)
    {
        if (n%i==0)
        {
           s+=i;
           c++;
        }
        if (c==2)
        break;
    }
    cout << s;
    return 0;
}