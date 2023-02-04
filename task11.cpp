#include <iostream>
using namespace std;
main()
{
    string name;
    char find;
    cout << "enter word: ";
    getline(cin,name);
    int count = name.length();
    cout <<"enter a character to find : ";
    cin >> find;
    if(find == name[count -1])
    {
        cout <<"is present at end ";
    }
    else
    {
     cout <<"not present at end ";
    }
}