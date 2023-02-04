#include <iostream>
using namespace std;
main()
{
    string name;

    cout << "enter word: ";
    getline(cin, name);
    int count = name.length();
    for (int index = 0; index < count; index++)
    {
        if (name[index] == 'a')
        {
            name[index] = 'b';
        }
        else if (name[index] == 'b')
        {
            name[index] = 'c';
        }
        else if (name[index] == 'c')
        {
            name[index] = 'd';
        }
        else if (name[index] == 'd')
        {
            name[index] = 'e';
        }
        else if (name[index] == 'e')
        {
            name[index] = 'f';
        }
        else if (name[index] == 'f')
        {
            name[index] = 'g';
        }
        else if (name[index] == 'g')
        {
            name[index] = 'h';
        }
       else if (name[index] == 'h')
        {
            name[index] = 'i';
        }
       else if (name[index] == 'i')
        {
            name[index] = 'j';
        }
        else if (name[index] == 'j')
        {
            name[index] = 'k';
        }
        else if (name[index] == 'k')
        {
            name[index] = 'l';
        }
        else if (name[index] == 'l')
        {
            name[index] = 'm';
        }
        else if (name[index] == 'm')
        {
            name[index] = 'n';
        }
        else if (name[index] == 'n')
        {
            name[index] = 'o';
        }
        else if (name[index] == 'o')
        {
            name[index] = 'p';
        }
        else if (name[index] == 'p')
        {
            name[index] = 'q';
        }
        else if (name[index] == 'q')
        {
            name[index] = 'r';
        }
        else if (name[index] == 'r')
        {
            name[index] = 's';
        }
        else if (name[index] == 's')
        {
            name[index] = 't';
        }
        else if (name[index] == 't')
        {
            name[index] = 'u';
        }
        else if (name[index] == 'u')
        {
            name[index] = 'v';
        }
        else if (name[index] == 'v')
        {
            name[index] = 'w';
        }
        else if (name[index] == 'w')
        {
            name[index] = 'x';
        }
        else if (name[index] == 'x')
        {
            name[index] = 'y';
        }
        else if (name[index] == 'y')
        {
            name[index] = 'z';
        }
             else if (name[index] == 'z')
        {
            name[index] = 'a';
        }

        cout << name[index];
    }
}