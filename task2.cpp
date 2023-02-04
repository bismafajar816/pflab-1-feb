#include <iostream>
using namespace std;
main()
{
int size;
float sum=0,product = 1 , average ;
cout <<"enter size of array : ";
cin >> size;
float print[size];
for(int index = 0 ; index < size ; index++)
{
    cout <<"enter the number : ";
    cin >> print[index];


    sum = sum + print[index];
    average = sum / size;
}
cout <<"sum of numbers " << sum << endl;
cout << "the average is :"<< average << endl;
for(int index = 0 ; index < size ; index++)
{
    product = product * print[index];
}
cout << "the product is : "<< product << endl;

















}