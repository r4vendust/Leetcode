#include <iostream>

/// Could you solve it without converting the integer to a string?

using namespace std;

bool isPalindrome(int x);

int main()
{
    int x = 32451;

    cout << isPalindrome(x);

    return 0;
}

bool isPalindrome(int x)
{
    if (x < 0) return false;

    int x2 = x;
    long aux = 0;

    while(x > 0)
    {
        aux = aux * 10 + x % 10;
        x/=10;
    }
    return (x2 == aux);
}
