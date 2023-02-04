#include <iostream>
using namespace std;
main()
{
    float money[4];
    cout << "enter number of quarters for first time " << endl;
    cout << "enter number of dimes for second time " << endl;
    cout << "enter number of nickels for third time " << endl;
    cout << "enter number of pennies for fourth time " << endl;
    cout << endl;

    for (int index = 0; index < 4; index++)
    {
        cout << "enter money : ";
        cin >> money[index];
    }
    cout << endl;
    float quarter = money[0] * 0.25;
    float dime = money[1] * 0.10;
    float nickel = money[2] * 0.05;
    float penny = money[3] * 0.01;
    float sum = quarter + dime + nickel + penny;
    float price;
    cout << "enter the price of product : ";
    cin >> price;
    if (sum >= price)
    {
        cout << "true";
    }
    else
    {
        cout << "false ";
    }
}