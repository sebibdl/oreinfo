 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; 
    /*
n = 5

***** i = 0 -> i = i
 ***** i = 1 -> i = i
  ***** i = 2 -> i = i
   ***** i = 3 -> i = i 
    ***** i = 4 -> i = i
   ***** i = 3 -> 2 * 5 - i - 2
  ***** i = 2 -> 2 * 5 - i - 2
 ***** i = 1 -> 2 * 5 - i - 2
***** i = 0 -> 2 * 5 - i - 2
    */
    for(int i=0;i<2 * n - 1;i++) 
    {   
        int k=i; 

        if(k >= n)
            k = 2 * n - i - 2;

        while (k)
        {
            cout << " ";
            k--;
        }
        int v=n;
        while (v)
        {
            cout << "*";
            v--;
        }
        cout << endl;
    }

    return 0;
}