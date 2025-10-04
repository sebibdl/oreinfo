#include <iostream>
using namespace std;
int V[100] , n;
int cnt(int n)
{  
    int cnt=0;
    while (n)
    {
        cnt ++;
        n/=10;
    }
    return cnt;
}
bool Adidas(int n)
{ 
    int c=cnt(n);
    int V[100];
    int cop=n;
    int i = 1;
    
    while (cop) {
    	V[i] = cop % 10;
    	cop /= 10;
    	i++;
    }
    bool ok=true;
 
    if (c!=6)
        ok=0;
    
    if (V[6]!=V[2]) // penultima si prima
        ok=0;
 
    if (V[5]!=V[3]) // a patra si a doua
        ok=0;
 
    //prima cifra -> poz 6
    //a doua cifra -> poz 5
    //a treia cifra -> poz 4
    //ultima cifra -> poz 1
    //prima cifră, a doua, a treia și ultima sunt diferite două câte două;
    
    int pos[] = {6, 5, 4, 1};
    
    for(int i = 0; i < 4; ++i)
        for(int j = i + 1; j < 4; ++j)
        	if(V[pos[i]] == V[pos[j]])
        		ok = 0;

    return ok;
}
int main() {
    cin >> n;
    int maxim=-1;
    
    for (int i=1;i<=n;i++)
    	cin >> V[i];

    for (int i=1;i<=n;i++)
    {
        if (Adidas(V[i])==true)
            if (V[i]>maxim)
                maxim =V[i];
    }
    
    if (maxim==-1)
    cout << "Nu exista";
    else cout << maxim;
    
    
    
    
    return 0;
}