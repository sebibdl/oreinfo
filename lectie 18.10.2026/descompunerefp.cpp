#include <iostream>
using namespace std;

int main() {
    /*
        Sa se afiseze descompunerea in factori primi ai lui N!!!!
    */

    int n;
    cin >> n;

    int d = 2;
    //2 3 5 7 11 13 17 -> numerele prime
    while(n > 1) { // ne oprim cand nu mai putem imparti (ajungem la 1 prin impartire repetata)
        int e = 0;//exponent
        while(n % d == 0) { // verificam daca il putem imparti pe n la d(numarul prim) si dupa il impartim de cate ori putem
            n /= d;
            e++;
            /*
                Deoarece incepem cu d = 2 si mergem crescator mereu cand vom intra in conditia de while
                d va fi numar prim. El este numar prim deoarece elimina toti multiplii viitori de d cand face
                impartirea din blocul while. => raman doar alte numere prime posibile pentru impartire
            */
        }
        if(e)
            cout << d << " " << e << "\n";

        if(d * d > n && n != 1) {
            // nu mai avem divizori pana la n => n este prim 
            // si nu mai are rost sa mergem cu d++ pana la n deoarece ne costa mult timp
            cout << n << " " << 1 << "\n";
            n = 1;
        }

        d++;//trecem la urmatorul divizor
    }


}