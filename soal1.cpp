#include<iostream>
#include<cmath>
using namespace std;


int doubleA = 1;
bool isPrime (int n)
{
    bool flag = true;
    if (n == 2)
        return true;
    else if (n == 1)
        return false;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int reverse (int n)
{
    int reversed_number = 0, remainder;
    while(n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    return reversed_number;
}

int main ()
{
    int n, i;
    cin >> n;
    if (n == 1)
    {
        cout << 2;
        return 0;
    }
    for (i = 3; doubleA < n; i += 2)
    {
        if (isPrime(i) == 1)
        {
            if (isPrime(reverse(i)) == 1)
            {
                doubleA++;
            }
        }
    }
    cout << i - 2;
    return 0;
}
