#include<iostream>
using namespace std;


int kamT = 1;
bool kamtavan(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % (i * i) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, i;
    cin >> n;
    for (i = 2; kamT <= n; i++)
    {
        if (kamtavan(i) == true)
            kamT++;
    }
    cout << i - 1;
    return 0;
}
