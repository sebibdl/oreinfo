#include <fstream>
#include <cstring>
using namespace std;

ifstream cin("textcuv.in");
ofstream cout("textcuv.out");

int main() {
    /*
    dacă T = 1, atunci veți afișa numărul de cuvinte, apoi cuvintele din text, câte unul pe un rând
    dacă T = 2, atunci veți afișa cuvântul cel mai mic din punct de vedere lexicografic.
    dacă T = 3, atunci veți afișa numărul de cuvinte care conțin secvența ini.
    dacă T = 4, atunci veți afișa cuvintele oglindite, câte unul pe un rând
    dacă T = 5, atunci veți afișa numărul de cuvinte care se termină cu litera a.
    dacă T = 6, atunci veți afișa, separate prin spațiu, lungimea minimă și lungimea maximă a unui cuvânt.
    */

    int T;
    char text[1001];
    char cuvinte[1001][1001];

    cin >> T;
    //...destul
    //cin >> text; //citesc pana la spatiu sau endline
    cin.get();//trec pe linia urmatoare
    cin.getline(text, 1001); //luam tot randul
    

    int cnt = 0;
    char *p = strtok(text, ".,!?:;- ");
    
    while(p != NULL) {
        cnt++;
        strcpy(cuvinte[cnt], p);
        p = strtok(nullptr, ".,!?:;- ");
        
    }

    /*
        4
        destul
        de
        rece
        desigur
    */

    if(T == 1) {
        cout << cnt << "\n";

        for(int i = 1; i <= cnt; ++i)
            cout << cuvinte[i] << "\n";
    }
    else if(T == 2) {
    //dacă T = 2, atunci veți afișa cuvântul cel mai mic din punct de vedere lexicografic

        char min[1001];
        strcpy(min, cuvinte[1]);

        for(int i = 2; i <= cnt; i++) {
            if(strcmp(cuvinte[i], min) < 0)
                strcpy(min, cuvinte[i]);
        }

        cout << min;
    }
    else if(T == 3) {
        //dacă T = 3, atunci veți afișa numărul de cuvinte care conțin secvența ini.

        int count = 0;

        for(int i = 1; i <= cnt; ++i) {
            if(strstr(cuvinte[i], "ini"))
                count++;
        }

        cout << count;
    }
    else if(T == 4) {
        // dacă T = 4, atunci veți afișa cuvintele oglindite, câte unul pe un rând
        // destul -> lusted

        for(int i = 1; i <= cnt; ++i) {
            char oglindit[1001];

            for(int j = strlen(cuvinte[i]) - 1, k = 0; j >= 0; --j, k++) {
                oglindit[k] = cuvinte[i][j];
            }

            cout << oglindit << "\n";
        }
    }
    else if(T == 5) {
        int count = 0;

        for(int i = 1; i <= cnt; ++i) {
            if(cuvinte[i][strlen(cuvinte[i]) - 1] == 'a')
                count++;    
        }

        cout << count;
    }
    else if(T == 6) {
        //dacă T = 6, atunci veți afișa, separate prin spațiu, lungimea minimă și lungimea maximă a unui cuvânt.
        int maxi = 0, mini = 1<<28;

        for(int i = 1; i <= cnt; ++i)  {
            if(maxi < strlen(cuvinte[i]))
                maxi = strlen(cuvinte[i]);

            if(mini > strlen(cuvinte[i]))
                mini = strlen(cuvinte[i]);
        }

        cout << mini << " " << maxi;
    }
}