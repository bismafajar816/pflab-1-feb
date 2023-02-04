#include <iostream>
using namespace std;
main()
{
    string name;
    cout <<"enter word: ";
    getline(cin, name);
    int idx = 0;
    while(name[idx] != '\0')
    {
   
        cout << name[idx] << "is at  "<< idx << endl;
        idx ++;
    }
}