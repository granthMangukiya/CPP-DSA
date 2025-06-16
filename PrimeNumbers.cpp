#include <iostream>
using namespace std;

int primeNum(int n)
{
    bool isPrime = true;

    for (int i = 2; i <= n; i++)
    {
        if (i % i == 0)
        {
            isPrime = false;
            break;
        }
        if (isPrime == true)
        {
            cout << i << endl;
        }
    }
    return 0;
}

int main()
{
    primeNum(13);
    return 0;
}
