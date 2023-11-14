#include<iostream>
using namespace std;
main()
{
    int triangle,sum=0;
    cout<<"Enter number of triangles: ";
    cin>>triangle;
    for(int i=0;i<=triangle;i++)
        sum=sum+i;
    cout<<"Dots in Triangle: " <<sum;
}