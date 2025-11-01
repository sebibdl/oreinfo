#include <iostream>
using namespace std;

int nrdiv(int n){ //O(sqrt(n))
    return 1;
}

int main() {
    int n;

    cin >> n;

    int V[1001];

    for(int i = 1; i <= n; ++i)
        cin >> V[i];
    
    /*
        timp -> cati pasi face algoritmul(aproximare) -> O(xyz)
        spatiu -> cat spatiu consuma(aproximare) -> O(xyz)
    
        O(n) -> complexitatea in timp
        O(n) -> complexitate in spatiu deoarece avem n elemente citite si dimensiunea vectorului nu o sa depaseasca n
    */

    int sum = 0;

    for(int i = 1; i <= n; ++i)
        sum += V[i];

    cout << sum;

        
    /*
        Cand calculam complexitate ne intereseaza cum creste functia din punct de vedere al timpului
        Tot timpul eliminam constantele din complexitate => O(2 * n) = O(n)
        O(n) -> complexitatea in timp
        O(n) -> complexitate in spatiu
    */


    //alt program
    int sumDiv = 0;

    for(int i = 1; i <= n; ++i)
        sumDiv += nrdiv(i);
    
    /*
        O(n*sqrt(n)) -> complexitate in timp
    */

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= i; ++j)
            if(V[j] > V[i])
                 swap(V[i], V[j]);

    /*
        O(n*n) -> complexitate in timp
    */

    int j = 1, sum = 0;

    for(int i = 1; i <= n; ++i) {
        while(V[i] % 2 == 0 && j <= i)
        {
            sum += V[j];
            ++j;
        }
    }
    // n + n
    cout << sum;

    /*
        O(n) -> complexitate 
    */
}