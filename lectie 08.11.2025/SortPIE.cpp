#include <iostream>
using namespace std;
int pie(int a, int b)
{
    while (a)
    {
        int r=b%a;
        b=a;
        a=r;
    }
    return b;
}
int A[1001],n;
int main()
{   
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> A[i];
    
    int c=0, Nou[1001];
    for (int i=1;i<=n;i++)
    {
        if(pie(A[i],A[n])==1)
            {
                Nou[c]=A[i];
                c++;
            }
    }

    for(int i=0;i<c;i++)
    {
        for (int j=i+1;j<c;j++)
        {   
            if (Nou[i]<Nou[j])
            {
                int aux=Nou[i];
                Nou[i]=Nou[j];
                Nou[j]=aux;
            }
        }
    }
    for(int i=0;i<c;i++)
        cout << Nou[i] << " ";
    return 0;
}