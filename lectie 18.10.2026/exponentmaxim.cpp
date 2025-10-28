 #include <iostream>
using namespace std;

// cel mai mare factor prim din descompunerea lui n si exponentul acestuia -> pentru ora viitoare 463
int n;
int main()
{   
    cin >> n;
    int d=2;
    int k = 0;//maximul
    int p;//exponentul maximului
    while (n>1)
    {
        if (n%d==0)
        {   
            int e=0;
            while (n%d==0)
            {
                n/=d;
                e++;
            }
            if (d>k) {
                k = d;
                p = e;
            }
        }
        d++;
        
        if (d * d > n && n != 1)
        {   
            if (n>k){
                k=n;
                p = 1;
            }
            n=1;
        }    
    }
    cout << k << " ^ " << p;
} 