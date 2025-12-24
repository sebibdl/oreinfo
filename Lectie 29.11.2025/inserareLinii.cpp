#include <iostream>
using namespace std;

double M[1001][1001];
double V[1001];

int main() {
    int n, m;

    cin >> n;
    m = n;

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin >> M[i][j];
    
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            V[j] += M[i][j];//am suma de pe fiecare coloana
    
    int mijloc = n / 2 + 1;

    for(int i = n; i >= mijloc; i--){
        for(int j = 1; j <= m; ++j)
            M[i + 1][j] = M[i][j]; 
    }
    
    n++;

    for(int i = 1; i <= m; ++i)
        M[mijloc][i] = V[i] / m;


    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j)
            cout << M[i][j] << " ";
        cout << "\n";
    }
}