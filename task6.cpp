#include<iostream>
using namespace std;
bool primechecker(int a)
{
    for (int i=2;i<a-1;i++)
    {
        if(a%i==0)
    
    return false;
    }
    return true;
    
}
int primorial(int n )
{
    int b=2;
    int  total=1;
    for(int i=0;i!=n;i++)
    {
    if(primechecker(b))
    {
    total=total*b;
    }
    b++;
    }
    cout<<total ;
}
main()
{
int p;
cout <<"Enter any number: ";
cin >> p;
primorial(p);

}