#include <iostream>
using namespace std;

long long n;
long long V[11];
int p,t;
int main()
{   
    int sum=0;
    cin >> n >> t >> p;
    for (int i=1;i<=n;i++)
        {
            cin >> V[i];
            sum+=V[i];
        }
    if (t==1)
    {   long long minim=V[1];
        for (int i=2;i<=p;i++)
            if (V[i]<minim)
                minim=V[i];
        long long s=0;
        while (minim)
        {
            s+=minim%10;
            minim/=10;
        }
        cout << s << "\n";
        cout << sum ;
    }
    if (t==2)
    {
        int maxim=-1;
        for (int i=1;i<=p;i++)
            if (V[i]>maxim)
                maxim=V[i];
        
        int c=0;
            for(int i=1;i*i<=maxim;i++)
                if (maxim%i==0)
                {
                    c++;
                    int k=maxim/i;
                    if (k!=i)
                        c++;
                }
        cout << c << "\n";
        cout << sum;
    }
    return 0;
}