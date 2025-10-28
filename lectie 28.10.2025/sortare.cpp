#include <iostream>
using namespace std;

int V[1001], A[1001];
int F[1000001] = {0};

int main() {
    int n;

    cin >> n;

    for(int i = 1; i <= n; ++i)
        cin >> A[i];
    
    //afisam vectorul ordonat crescator

    /*
        ex: 1 5 2 5 2
        out: 1 2 2 5 5
    */

    //metoda bulelor -> https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/visualize/
    //V[i] = 5, V[i + 1] = 7  ->   V[i] <-> V[i+ 1] => V[i] = 7 && V[i + 1] = 5 => metoda paharelor

    /*
        ex: 
            it = 1
            1 5 2 5 2
            1 2 5 5 2
            1 2 5 2 5 -> 5 a ajuns la final

            it = 2

            1 2 5 2 5
            1 2 2 5 5

            it = 3

            1 2 2 5 5

    */

    for(int i = 1; i <= n; ++i)
        V[i] = A[i];

    //metoda lenesa
    //ducem elementul cel mai mare la pozitia lui(iese la suprafata ca o bula)
    for(int j = 1; j <= n; ++j)
        for(int i = 1; i <= n - j; ++i) {
            if(V[i] > V[i + 1])
            {
                int aux = V[i];
                V[i] = V[i + 1];
                V[i + 1] = aux;
            }
        }
        
    cout << "Sortare prin metoda bulelor: \n";

    for(int i = 1; i <= n; ++i)
        cout << V[i] << " ";
    cout << "\n";

    //reinitializez V
    for(int i = 1; i <= n; ++i)
        V[i] = A[i];

    //sortare prin metoda selectiei
    /*
        Selectam cel mai mic element si il punem pe pozitia lui    
    */

    for(int i = 1; i <= n; ++i) {
        int mini = V[i], index = i;

        // aflam pozitia celui mai mic element
        for(int j = i; j <= n; ++j) {
            if(V[j] < mini) {
                mini = V[j];
                index = j;
            }
        }
        
        // unde trebuie sa apara elementul cel mai mic? -> pe pozitia i(cele de dinainte sunt deja sortate)

        int aux = V[i];
        V[i] = V[index];
        V[index] = aux;
    }

    cout << "Sortare prin metoda selectiei: \n";

    for(int i = 1; i <= n; ++i)
        cout << V[i] << " ";

    cout << "\n";

    //reinitializez V
    for(int i = 1; i <= n; ++i)
        V[i] = A[i];

    cout << "Sortare prin metoda selectiei: \n";

    for(int i = 2; i <= n; ++i) {
        
        int j = i;

        while(j != 1 && V[j] < V[j - 1]) {
            int aux = V[j - 1];
            V[j - 1] = V[j];
            V[j] = aux;
            j--;
        }
    }

    for(int i = 1; i <= n; ++i)
        cout << V[i] << " ";
    
    cout << "\n";
    cout << "Sortare prin metoda numararii: \n";

    for(int i = 1; i <= n; ++i)
        V[i] = A[i];


    //Sortare prin numarare
    //O(n) -> complexitate -> pusca pentru numere foarte mari din cauza lipsei de memorie

    for(int i = 1; i <= n; i++)
        F[V[i]]++;
    
    for(int i = 1; i <= 1e6; ++i)
        if(F[i]) {
            while(F[i]) {
                cout << i << " ";
                F[i]--;
            }
        }

    // pentru a visualiza algoritmii de sortare: https://visualgo.net/en/sorting

    bool cond = false;
    //operator conditional -> daca cond e adevarata se intampla ce e dupa ? daca nu ce este dupa :
    string eAdevarat = cond ? "Adevarat" : "Fals";
    int x = 6;
    int y = 8;

    //dca y este par adunam lax 2, in caz contrar adunam 7

    (y % 2 == 0) ? (x = x + 2) : (x = x + 7);

    cout << "\n" << eAdevarat << " " << x << "\n"; 
}