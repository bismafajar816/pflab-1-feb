#include <iostream>
using namespace std;
main()
{

    float array[2];
    for (int index = 0; index < 2; index++)
    {
        cout << "enter number : ";
        cin >> array[index];
    }
    cout << endl;
    cout << endl;
    int number;
    cout << "enter the size of second array :";
    cin >> number;
    float arr[number];

    for (int index = 0; index < number; index++)
    {
        cout << "enter number : ";
        cin >> arr[index];
    }
    cout << "the new series is : " << array[0] << " ";
    for (int index = 0; index < number; index++)
    {

        cout << arr[index] << " ";
    }
    cout << array[1];
}