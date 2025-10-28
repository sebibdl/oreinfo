
#include <iostream>
using namespace std;

int nr(int n)
{
    int c=0;
    for(int i=1;i*i<=n;i++)
        if (n%i==0) //i este divizor
        {
            //avem 2 posibilitati de divizori
            //i si n/i => daca i == n/i(n este patrat perfect) => numaram doar unul dintre ei

            if(i % 2 == 0)  
                c++;
            if((n / i) == 0 && n / i != i)
                c++;
        }
    return c;
}
int main()
{
    int a,b, minim,maxim;
    cin >> a >> b;
    for (int i=a;i<=b;i++)
    {
        
    }
    


    return 0;
} 