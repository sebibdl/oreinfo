#include <iostream>
#include <cstring>
using namespace std;
char c[256] , A[256] , s[256], T[256];
int V[101];
int main()
{  
    cin.getline (c,256);
    cin.getline (s,256);
    
    for (int i=0;i<strlen(c);i++)
    {  
        if ((s[i]-'0')%2==0)
        {
            strcpy(T , A);
            strcpy (A+1 , T);
            A[0]=c[i];
        }
        else
           A[strlen(A)]=c[i];

    }
    cout << A;
    return 0;
}