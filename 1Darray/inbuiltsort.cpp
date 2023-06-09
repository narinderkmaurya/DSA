#include <iostream>
#include<algorithm>// always use this for sorting
using namespace std;

bool compare(int a, int b)
{
    cout << "Comparing " << a << "and " << b << endl;
    return a > b;
}
int main()
{   
    int a[] = {5, 6, 4, 3, 1};
    int n = sizeof(a) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a, a + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}