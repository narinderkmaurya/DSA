#include <iostream>
using namespace std;
void printarray1(int even[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;
}
void printarray2(int odd[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << odd[i] << " ";
    }
    cout << endl;
}
void swapalternate1(int even[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(even[i], even[i + 1]);
        }
    }
}
void swapalternate2(int odd[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(odd[i], odd[i + 1]);
        }
    }
}
int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {1, 2, 3, 4, 5};
    swapalternate1(even, 6);
    swapalternate2(odd, 5);
    printarray1(even,6);
    printarray2(odd, 5);
    return 0;
}