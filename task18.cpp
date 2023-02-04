#include <iostream>
using namespace std;
main ()
{
    int size;
    cout << "enter number of resistors: ";
    cin >> size;
    float resistance[size];
    float sum = 0.0;
    for(int index = 0 ; index<size ; index++)
    {
        cout << "enter the resistance value : ";
        cin >> resistance[index];
        sum = sum + resistance[index];
    }
   cout << "the total resistance is: "<<sum << " ohms";

}