#include <iostream>
#include<climits> // INT_MAX & INT_MIN
using namespace std;
//mx= -{infinity}
int main()
{ 
    int max = INT_MIN; // equals to [-2^31]
   int a[100];
    int n; //n = numbe of elements in the array
    cout<< "Enter the number of elements of array (at max 100) : " << endl;
    cin >>n;
    cout << "Write the elements of array :"<< endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }
    cout << endl;
    for (int  i = 0; i < n; i++)
    {
        if (a[i] > max )
        {
            max= a[i];
        }
        
    }
    cout << "Largest number is " << max;
    return 0;
}