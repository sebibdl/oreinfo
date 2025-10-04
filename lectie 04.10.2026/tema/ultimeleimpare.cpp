#include <iostream>
using namespace std;
int V[10001], n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> V[i];

    int F[2];
    int cnt = 0;
    
    for (int i = n - 1; i >= 0 && cnt < 2; i--) {
        if (V[i] % 2 != 0) {
            F[cnt] = V[i];
            cnt++;
        }
    }
    
    if(cnt < 2)
        cout << "Numere insuficiente";
    else
        for (int i = cnt - 1; i >= 0; i--) {
            cout << F[i] << " ";
        }

    return 0;
}
