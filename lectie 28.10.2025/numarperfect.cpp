#include <iostream>
using namespace std;
int n;
int main()
{   
    cin >> n;
    int p=0;
    for (int i=1;i<=n;i++)
    {
        if (n%i==0)
            p+=i;
    }
    if (p==2*n)
        cout << n << " este perfect";
    return 0;
}