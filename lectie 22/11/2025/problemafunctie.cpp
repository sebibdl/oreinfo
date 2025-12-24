#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("pozitiiconsecutive.in");
ofstream fout("pozitiiconsecutive.out");

int V[1000001];

int main() {
     /*
        x , y apartin lui f -> V[n] == y
        V[1] = 0
        V[2] = 3
        V[n] = 2 * V[n - 1] - V[n - 2] + 2
     */
    /*
        V[n - 2] = 2 * V[n - 1] - V[n] + 2

        z ,x, y
        x, y
        z = 2 * x - y + 2;
        y = x
        x = z

    */

    int x, y;

    fin >> x >> y;

    // 0, 3, 8, 15, 24, 35, 48, 63, 80
    //           z    x  y
    //
    // z = 2 * x - y + 2;

    fout << y << " " << x << " ";

    int z = -1;
    while (z != 0)
    {
        z = 2 * x - y + 2;
        fout << z << " ";
        y = x;
        x = z;
    }
    
}   