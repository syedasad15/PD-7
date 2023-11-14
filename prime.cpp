#include<iostream>
using namespace std;
bool primechecker(int a)
{
    for (int i=2;i=a-1;i++)
    {
        if(a%i==0)
    
    return false;
    }
    return true;
    
}
main()
{
int p;
cout <<"Enter any number: ";
cin >> p;
cout << primechecker(p);

}
