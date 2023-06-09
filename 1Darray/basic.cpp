#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100];
    cout << "Enter the size of the array (max-100) : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
