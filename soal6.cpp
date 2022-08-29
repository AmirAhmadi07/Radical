#include <iostream>
#include <string>
using namespace std;

int main()

{
    int d1 , m1 , d2 , m2 , x , y , ekhtelaf ;

    string day[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    string iday;
    int index , i = 0;

    cin >> d1 >> m1 >> iday >> d2 >> m2;

    for (int i = 0; i < 7; i++)
    {
       if(iday == day[i])
       {
	   	index = i + 1;
		break;
       }

    }



	if (m1 < 8 && m1 > 0)
		x = (m1 - 1) * 31 + d1 ;
	else if (m1 > 7 && m1 < 13)
        x = 186 + (m1 - 7) * 30 + d1 ;
	else
	{
        cout << "values are not acceptable!";
        return 0;
    }

    if (m2 < 8 && m2 > 0)
        y = (m2 - 1) * 31 + d2 ;
	else if (m2 > 7 && m2 < 13)
        y = 186 + (m2 - 7) * 30 + d2 ;
	else
	{
        cout << "values are not acceptable!";
        return 0;
    }


    if (x == y)
        cout << day;
    else if (x > y)
	{
		ekhtelaf = ( x - y ) % 7 ;

	     if (index < ekhtelaf)
            cout << day[index + 6 - ekhtelaf];
	     else
            cout << day[index - ekhtelaf - 1];
	}
	else if (x < y)
    {
		ekhtelaf = ( y - x ) % 7 ;

		if ((index + ekhtelaf) > 6)
            cout << day[index + ekhtelaf - 8];
		else
            cout << day[index + ekhtelaf - 1];
    }
    return 0;
}
