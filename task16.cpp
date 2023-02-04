#include <iostream>
using namespace std;
main()
{
    int size;
    int number = 0;

    cout << "enter the size of array : ";
    cin >> size;

    float largest[size];
    for (int index = 0; index < size; index++)
    {
        cout << "enter number : ";
        cin >> largest[index];
    }
    for(int index = 1 ; index < size ; index++)
    {
        number = largest[0];
        if (number < largest[index])
        {
           number = largest[index];
        }
    }
    cout << number;
}