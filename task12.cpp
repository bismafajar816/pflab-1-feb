#include <iostream>
using namespace std;
main()
{
    string name;
    char find;
    int number = 0;
    cout << "enter word: ";
    getline(cin,name);
    int count = name.length();
    for(int index = 0 ; index < count ; index++)
    {
       if(name[index] == 'a' ||name[index] == 'e' || name[index] == 'i' ||name[index] == 'o' ||name[index] == 'u')
       {
        number++;
       }

    }
    cout <<"the number of vowels is : "<< number;
}