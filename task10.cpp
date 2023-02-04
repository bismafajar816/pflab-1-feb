#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "enter word: ";
    getline(cin,name);
    int idx = 0;
    int count;
    count = name.length();
   
   if(count / 2 == 0)
   {
    cout << "even "<<endl;
   }
   else
   {
    cout << "odd";
   }
}