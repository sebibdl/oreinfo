#include <iostream>
using namespace std;

//greatest common divisor
int gcd_subtraction(int a, int b) {
    while(a != b){
        if(a > b)
            a = a - b;
        else b = b - a;
    }    

    return a;
}

//de stiut asa cum e
int gcd(int a, int b) {
    while(a != 0) {
        int r = b % a;
        b = a;
        a = r;
    }

    return b;
}

int main(){
    cout << gcd_subtraction(28, 49) << " ";
    cout << gcd(28, 49) << "\n";

    int a = 20, b = 123213;

    //cel mai mare multiplu comun = a * b / gcd(a,b)
}