#include <iostream>
using namespace std;

int prime(int n)
{
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
    
    return isPrime;
}

int main(){

    prime(6);

    return 0;
}