#include <iostream>
using namespace std;
int V[17], n;

int main()
{
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> V[i];
    int cnt = 0;
    while (cnt < n-1)
    {
        int S = V[1];
        for (int i=1; i<n; i++)
            V[i] = V[i+1];
        V[n] = S;

        for (int i=1; i<=n; i++)
            cout << V[i] << " ";
        cout << endl;

        cnt++;
    }
    return 0;
}