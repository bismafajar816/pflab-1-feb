#include <iostream>
using namespace std;
main()
{
    int size;
    bool isfound = false;
    cout << "enter the size of array : ";
    cin >> size;
    float number;

    float find[size];
    for (int index = 0; index < size; index++)
    {
        cout << "enter a number: ";
        cin >> find[index];
    }

    cout << "enter number to find :";
    cin >> number;
    for (int index = 0; index < size; index++)
    {
        if (number == find[index])
        {
           isfound = true;
           break;
        }

    }
    if(isfound == true)
    {
        cout << "number is present "<<endl;
    }
    else
    {
        cout << "not present" << endl; 
    }
}