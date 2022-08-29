#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int year;
    double totalProfit, avgProfit;
    cin >> year >> totalProfit;

    avgProfit = pow((100 + totalProfit)/100, 1.0/year);
    //Rinding the year-th root of the total Profit

    avgProfit = round(avgProfit*100 - 100);
    //Rounding the average Profit

    cout << avgProfit;
}
