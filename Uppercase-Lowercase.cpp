#include <iostream>
using namespace std;

int main()
{
    
    char ch;
    cout << "Enter your character : ";
    cin >> ch;

    if (ch>='a' && ch<='z')
    {
        cout << "It is an lowercase character";
    } 
    else 
    {
        cout << "It is an uppercase character";
    }
    
    

    return 0;
}
