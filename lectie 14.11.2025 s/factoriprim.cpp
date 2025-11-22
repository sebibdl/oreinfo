#include <iostream>
using namespace std;

int n;
int main ()
{   
    cin >> n;

    int d=2, p=0;
    while (n > 1)
    {
        if (n%d==0)
        {   p=0;
            while (n%d==0)
            {
                n/=d;
                p++;        
            }
            cout << d << "^" << p << "*"; 
        }
        
        d++;

        if (n>1 && d*d>n)
            d=n; 
    }

    return 0;
}