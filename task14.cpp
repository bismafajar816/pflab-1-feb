#include <iostream>
using namespace std;
main()
{
    string name;

    cout << "enter word: ";
    getline(cin, name);
    int count = name.length();
     cout << "something"<< " ";
    for(int i = 0 ; i < count ; i++)
    {
    cout << name[i];
    }
}