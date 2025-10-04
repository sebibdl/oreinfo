 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; 
    // afisam prima jumatate a *
    /*
    *****
     *****
      *****
       *****
        *****
    */
    for(int i=0;i<n;i++) 
    {   
        int k=i; 
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
    
    for(int i=n - 2;i>=0;i--) 
    {   
        int k=i; 
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