#include <iostream>
using namespace std;
main()
{
    int size;
    float number;
    float mul;
    cout << "enter the size of array : ";
    cin >> size;
    
    float product[size];
    for (int index = 0; index < size; index++)
    {
        cout << "enter number : ";
        cin >> product[index];
    }
    cout << "enter a number to multiply :";
    cin >> number;

     for(int index = size -1 ; index >=0 ; index--)
        {
        mul = number * product[index];
        cout << "product is : " << mul << endl;
        }
    
}