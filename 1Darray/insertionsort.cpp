#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int i , j;
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
    

    for (int i = 1; i < n; i++)
    {
            int pickedupcard= a[i];
            for (int j = i-1; j >= 0 and  a[j]> pickedupcard ; j--)
            {
               a[j+1]= a[j];
            }
              a[ j+1] = pickedupcard;
    }
     for (int i = 0; i < n; i++)
    {
        cout <<  a[i];
        
    }
    return 0;
}