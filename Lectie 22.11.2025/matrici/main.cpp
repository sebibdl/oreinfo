#include <iostream>
using namespace std;

int M[1001][1001];

int main(){
    /*
        bordarea matricei
        diagonala principala
        diagonala secundara
    */

    int n, m;

    cin >> n >> m;

    //bordam liniile 

    for(int i = 1; i <= m; ++i)
        M[1][i] = 1, M[n][i] = 1;

    for(int i = 1; i <= n; ++i)
        M[i][1] = 1, M[i][m] = 1;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j)
            cout << M[i][j] << " ";
        
        cout << "\n";
    }     

    //diagonala principala
    //n = m
    int i = 1;

    while(i <= n) {
        cout << M[i][i];
        i++;
    }

    for(int i = 1; i <= n; ++i)
        cout << M[i][i];

    //diagonala secundara

    int i = 1, j = n;

    while(i <= n) {
        cout << M[i][j] << " ";
        j--;
        i++;

    }
}