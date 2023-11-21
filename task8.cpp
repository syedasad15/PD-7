

#include <iostream>
using namespace std;

int main()
{
    int c = 0, w = 0;
    float a = 0, mb = 0, tru = 0, tra = 0;
    cout<< "Enter the count of cargo for weightage: ";
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cout<< "Enter the weight (tonnage) of cargo " << i+1<<": ";
        cin >> w;
        a = a + w;
        if (w <= 3)
        {
            mb =mb + w;
        }
        else if (w > 3 && w <= 11)
        {
            tru =tru + w;
        }
        else
        {
            tra =tra + w;
        }
    }

    float averagePrice = ( tru * 175 + mb * 200+ tra * 120) ;
    averagePrice =averagePrice/a;
    tra = tra/a;
    tra = tra*100;
    mb = mb/a;
    mb = mb*100;
    tru = tru/a;
    tru = tru*100;
    cout << fixed;
    cout.precision(2);
    cout << averagePrice << endl;
    cout << mb << "%" << endl;
    cout << tru << "%" << endl;
    cout << tra << "%" << endl;

    return 0;
}