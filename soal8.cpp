#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int numberCount = 9;
    int digitCount = 1;
    
    while (n - numberCount * digitCount > 0)
    {
        n -= numberCount * digitCount;
        numberCount *= 10;
        digitCount++;
    }
    
    if (digitCount == 1)
    {
        cout << n;
        return 0;
    }
    
    int number = pow(10, digitCount - 1) + (n-1) / digitCount;
    
    if(n % digitCount == 0)
    {
        cout << number % 10;
        return 0;
    }
    
    for (int i = digitCount; i >= 1; i--)
    {
        if(i == n % digitCount)
        {
            cout << number % 10;
            return 0;
        }
        number /= 10;
    }
}
