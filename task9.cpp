#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "enter word: ";
    getline(cin, name);
    int idx = 0;
    int count;
    count = name.length();
   
    cout << "reversed string : ";
    for (int index = count; index >= 0; index--)
    {
        cout << name[index];
    }
}