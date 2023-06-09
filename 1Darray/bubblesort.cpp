#include <iostream>
using namespace std;
// dekh bhai yaha par kya hai ki yaha par pehle waala element bda hona chaiye aage waale se (comapare the current element with the next element run this process n-1 times in order to sort the entire array) kyuki last mei to kuch hai nahi to n-2 tak jaaeyga
int main()
{
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
    for (int i = 0; i < n; i++)
    {
        cout <<  a[i];
        
    }
    cout << endl;
    for (int i = 0; i < n-1; i++)// to sort entire array that-swhy n-1 times
    {
       for (int j = 0; j <n-2; j++)
       {
            if (a[j]> a[j+1])
            {
                swap(a[j], a[j+1]);
            }
            
       }
       
        
    }
    for (int i = 0; i < n; i++)
    {
        cout <<  a[i];
        
    }
    return 0;
} 