#include <iostream>
#include <cstring>
using namespace std;

char s[101];
char t[101];

void stergere(char cuv[101], int pos) {
    char t[101];
    strcpy(t, cuv + pos + 1);
    strcpy(cuv + pos, t);
}

int main() {
    cin.getline(s, 100);  // Citim șirul de caractere

    for(int i = 0; i <= strlen(s); ++i) {
        if(isdigit(s[i])) {
            bool eFractionar = false;

            int k = i;

            //234.232

            while(isdigit(s[k]))
                k++;
            
            if(s[k] == '.')
                eFractionar = true;
            
            if(eFractionar)
                while(isdigit(s[i]) || s[i] == '.')
                    stergere(s, i);
        } 
    }    

    cout << s;

    return 0;
}
