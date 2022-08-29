#include <iostream>
#include<math.h>
using namespace std;

bool portavan(int n)
{
	while (n % 2 == 0) 
    {
        int power = 0;
        while (n % 2 == 0) 
        {
            n /= 2;
            power++;
        }
        if (power == 1)
            return false;
        }
        for (int factor = 3; factor <= sqrt(n); factor += 2) 
        {
            int power = 0;
            while (n % factor == 0) 
            {
                n = n / factor;
                power++;
            }
        if (power == 1)
            return false;
    }
    return (n == 1);
}
int main()
{
	unsigned long long int n, i, counter = 0;
    cin >> n;
    for (i = 4; counter < n; i++)
    {
        if (portavan(i) == 1)
            counter++;
    }
    cout << i - 1;
	return 0;
}
