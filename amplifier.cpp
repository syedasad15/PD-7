#include<iostream>
using namespace std;
main()
{
    int a;
    cout <<"Enter the number to amplify: ";
    cin >>a ;
    for(int i=1;i<=a;i++)
    {
    if(i%4==0)

    cout<<i*10 <<", ";
    else
    
    cout<<i <<", ";
    }
}