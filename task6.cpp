#include <iostream>
using namespace std;
main()
{
    int size;
    int number = 0;

    cout << "enter the size of array : ";
    cin >> size;

    float smallest[size];
    for (int index = 0; index < size; index++)
    {
        cout << "enter number : ";
        cin >> smallest[index];
    }
    for(int index = 1 ; index < size ; index++)
    {
        number = smallest[0];
        if (number > smallest[index])
        {
           number = smallest[index];
        }
    }
    cout << number;
}