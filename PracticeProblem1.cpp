#include <iostream>
using namespace std;

int main()
{
    
    int n=7;
    bool isPrime = true;

    for (int i = 2; i <= n-1; i++)
    {
        if (n%i == 0)
        {
            isPrime = false;
            break;
        }
        
    }
    
    if (isPrime == true)
    {
        cout << "Prime Number";
    }else
    {
        cout << "Not a Prime Number";
    }
    
    
    
    return 0;
}
