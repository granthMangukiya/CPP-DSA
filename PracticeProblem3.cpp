#include <iostream>
using namespace std;

int main(){

    int n=4;
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i; 
    }

    cout << factorial; 
    

    return 0;
}