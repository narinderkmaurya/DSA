#include <iostream>
using namespace std;

int main()
{
   int a[100];
    int n =sizeof(a)/sizeof(int); //n = numbe of elements in the array
    cout<< "Enter the number of elements of array (at max 100) : " << endl;
    cin >>n;
    cout << "Write the elements of array :"<< endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }
    cout << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout <<  a[i] ;
        
    }
    cout << endl;
    for (int i = 0; i <= n-2; i++)// till <=n-2 kyuki last element to sahi ho jaayega agr hum except of last sabhi elements ko gorup bna k sort kar k rakh denge  
    
    {int min=i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j]< a[min])
            {
                min = j;

            }
            
        }
        swap (a[i],a[min] );
    }
    
   for (int i = 0; i < n; i++)
    {
        cout <<  a[i];
        
    }
    
    return 0;
}