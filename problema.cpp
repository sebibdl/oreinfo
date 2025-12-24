#include <iostream>
#include <cstring>
using namespace std;
char c[256];

int main()
{  
    int c=0;
    cin.getline(c,256);
    char *p= strtok (c ,  " ");
    int max=0;
    while (p!=NULL)
    {
      if (!isnum(p))
      { ok=1; 
        if (p[0]>max)
            max=p[0];

      }
        p=strtok(NULL , " ");
    }

    if ()

    return 0;
}