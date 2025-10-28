#include <iostream>
using namespace std;
int nr(int n)
{
    int d=2; int c=0;
    // 371
    while (n>1)
    {
        if (n%d==0)
        {
            while (n%d==0)
            {
                n/=d;
            }
            c++;
        }
        else d++;

        if (d*d>n && n != 1) //1 nu se ia in considerare ca factor prim!!!!!!!
        {   
            c++;
            n = 1; // sau break cum doresti -> preferabil n = 1
        }
        // d =2 
    }
    return c;
}
int main()
{
      
} 