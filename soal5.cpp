#include <iostream>
#include <cmath>
using namespace std;
int main()
{
        int q, i, j, cnt = 0;
        bool flag;
        cin >> q;
        for (int x = 0; x < q; x++)
        {
               std::cin >> i >> j;//first and second number
               cnt = 0;
               if (i > j)
               {
                     // if first number is bigger
                     int swap = i;
                     i = j;
                     j = swap;
               }
               if (i < 2) // especially for negative cases
               {
                  i = 2;
                  if (j > 2)
                  {
                     cnt++;// for number '2'
                  }
               }
               for (i = i + 1; i < j; i++)
               {
                  flag = true;
                  for (int index = 2; index <= sqrt(i); index++)
                  {
                     if (i % index == 0)
                     {
                        flag = false;
                        break;
                     }
                  }
                  if (flag)
                  {
                     cnt++;
                  }
               }
               cout << cnt << endl;
        }
}
