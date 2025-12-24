#include <iostream>
#include <cstring>
using namespace std;

bool isDigit(char c){
    // '0' -> 48
    // '9' -> 57

    if(c >= '0' && c <= '9')
        return true;
    
    return false;
}

bool isLetter(char c){
    // '0' -> 48
    // '9' -> 57

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    
    return false;
}

bool isLower() {
    //ok
}

bool toLower(char c) {
    //Z -> z
    // X -> x
    return c + 'a' - 'A';
}

int main() {
    int V[101]; // vector de inturi

    char S[101]; // Siruri de caractere

    char c; // 010101 -> 8 biti 0, 256 pe unsigned sau -127, 128 pt cazul actual

    /*
        ce au in plus sirurile de caractere fata de cele normale:
            functii predefinite
            afisarea cuvantului

        S[] = "Andrei";

        cout << S; -> Andrei
        cout << S + 2; -> drei
        ultimul caracter are null
    */
    cin.getline(S, 32);

    //strlen -> arata lungime sirului

    cout << strlen(S) << "\n";

    char sep[]=" .,";

    char * p = strtok(S , sep);
    while(p != NULL)
    {
        cout << p << endl;
        p = strtok(NULL , sep);
    }

    char T[101];

    strcpy(T, S);

    cout << T << "\n";

    char Y[101];

    strncpy(Y, S, 23);

    cout << Y << "\n";

    strchr(Y, 'o');// Y + unde gaseste prima data carecterul, null altfel

    cout << "\n" << strcmp("aaaaaa", "aaa");
}