#include <iostream>
using namespace std;

int a , b, x;
int main(){
    cin >> a >> b;
    int a1=a,b1=b;
    while (a1)
    {
        int r=b1%a1;
        b1=a1;
        a1=r;
    }
    x=a*b/b1;
    cout << x;
}