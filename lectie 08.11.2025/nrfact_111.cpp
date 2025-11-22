#include <iostream> 
using namespace std;
int n,x;
int main ()
{   
    int maxim=-1,d;
    int cop2;
    int c=0;
    cin >> n;
    for (int i=1;i<=n;i++)
    {   c=0;
        cin >> x;
        int cop=x;
        d=2;
        while (cop>1)
        {   
            
            if (cop%d==0)
            {
                while (cop%d==0)
                    cop/=d;
                c++;     
            }
            d++;
            if (d*d>=cop && cop!=1)
            {
                c++;
                break;
            }
        }  
        if (c>maxim)
        {
            maxim=c;
            cop2=x;
        }
        if (c==maxim && cop2>x)
        cop2=x;
    }

    cout << cop2 ;
}