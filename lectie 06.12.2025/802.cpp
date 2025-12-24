#include <iostream>
#include <cstring>
using namespace std;
char s[256] , nou [256];
int main()
{   
    cin.getline(s,256);
    int ok=0;
    for (int i=0;i<=strlen(s);i++)
    {
        
        if (s[i]==' ' || s[i]==0)
         {  
            if (ok==3)
            {
                s[i-3]='*';
                strcpy (nou, s+i);
                strcpy (s+i-2 , nou);
                i-=2;
            }
            ok=0;
         }   
        
        else ok++;

    }
    cout << s;
    return 0;
}
