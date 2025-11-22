#include <iostream>
using namespace std;
int V[1001], I[1001],n;
int main()
{
    cin >> n;
    for (int i=1;i<=n;i++)
        { 
            cin >> V[i];
            I[i]=i;
        }
    for (int i=1;i<n;i++)
    {   
        for (int j=i+1;j<=n;j++)
        {
            if (V[i]>V[j])
            {
                int aux1=V[i];
                V[i]=V[j];
                V[j]=aux1;

                int aux2=I[i];
                I[i]=I[j];
                I[j]=aux2;
            }
        }
    }
    for (int i=1;i<=n;i++)
        cout << I[i] << " ";
    return 0;
}