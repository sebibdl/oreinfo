#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char t[101] = "teste";
    cout << strstr(t, "te");
    cout << strcmp(strstr(t, "te"), t);
}