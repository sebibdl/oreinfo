#include <iostream> 
#include <fstream>
using namespace std;
ifstream fin("nrlipsa.in");
ofstream fout("nrlipsa.out");
int V[900];
int x;

int main()
{
    while (fin >> x)
    {  
        if (x>=100 && x-100<=899) {
            V[x-100]++;
        }
    }

    int c=0;
    //maxi1, maxi2 -> le tinem minte
    //mai rulam foru inca o data

    int maxi1, maxi2;

    for (int i=899;i>=0;i--)
    {   
        if (V[i]==0)
        {
            c++;
            if(c == 1) {
                maxi1 = i + 100;
            }
            if(c == 2) {
                maxi2 = i + 100;
            }
        }
        if (c==2)
            break;
    }

    if(c != 0) fout << "NU";
    else {
        cout << maxi1 << " " << maxi2 << "\n";
    }
}
