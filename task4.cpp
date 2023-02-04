#include <iostream>
using namespace std;
main()
{
    int size ;
    cout << "enter the size of array : ";
    cin >> size;
    float reverse[size];
    for(int index = 0 ; index < size ; index ++)
    {
        cout << "enter number : ";
        cin >> reverse[index];
    }
    for(int index = size -1 ; index >=0 ; index--)
    {
        cout << reverse[index] << " "; 
    }
}