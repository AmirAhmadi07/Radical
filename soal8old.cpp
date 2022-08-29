#include <iostream>
using namespace std;

int main()
{
	int m, i = 1;
	cin >> m;
	string str;
	while (str.size() < m)
	{
		str += to_string(i);
		i+=1;
	}
	cout << str[m -1] << endl;
	return 0;
}
