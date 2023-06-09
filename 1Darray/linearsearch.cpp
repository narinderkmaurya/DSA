#include <iostream>
using namespace std;

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
    int key;
    cout << "Enter the value of key: " << endl;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
            if ( a[i] == key)
            {
                    cout << "Key found at index " << i;
                    break;                
            }
            
    }
    
    return 0;
}