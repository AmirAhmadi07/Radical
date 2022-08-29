#include<bits/stdc++.h>

using namespace std;

int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
int pow2[] = {6 , 2 , 4 , 8};
// 2^4 = 1(6)/ 2^5 = 3(2)/ 2^6 = 6(4)/ 2^7 = 12(8)

int lastNon0Digit(int n)
{
	// n = 5a + b
	int a = n / 5;
	int b = n % 5;
	if (n < 10)
		return dig[n];
        else
		return (pow2[a%4]*lastNon0Digit(a)*lastNon0Digit(b)) % 10;
	
}
#include <iostream>

int main()
{
	int n;
	cin >>  n ;
	cout << lastNon0Digit(n);
	return 0;
}

