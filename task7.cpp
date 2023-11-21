#include <iostream>
using namespace std;
void hospital(int n1)
{
    int doc = 7;
    int treated = 0; 
    int untreated = 0;
    int n2;
    for (int a = 1; a <= n1; a++)
    {
        cout << "Number of patients who visited hospital on Day "<<a <<" : ";
        cin >> n2;
        if (a % 3 == 0)
        {
            if (untreated > treated)
            {
                doc +=1;
            }
        }
        if (n2 <= doc)
        {
            treated = treated + n2;
        }
        else
        {
            treated= treated + doc;
            untreated = untreated+(n2 - doc) ;
        }
    }
    cout << "Treated Patients: " << treated <<"\n"; 
    cout << "Untreated Patients: " << untreated;
    
}

main()
{
    int n1 = 0, n2 = 0;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> n1;
    hospital(n1);
}