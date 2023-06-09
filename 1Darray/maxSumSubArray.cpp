// 1 4 - 2 3 9 - 6 - 2
// 1 4 - 2 3 9=> 15

// it can be possible if all are negative therefore take INT_MIN => -2^31

#include <iostream>
#include <climits>// use these when dealing with INTs
using namespace std;

void MaximumSubArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = i; k <= j; k++) // i=k invalide idk why
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}
void MaximumSumSubArray(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++) // i=k invalide idk why
            {
                sum = +a[k];
            }
            // cout << sum << endl;
        }
    }cout << "Maximum Sum SubArray :" << max;
}

int main()
{
    int a[10] = {-1, -2, -3, -4};
    int n = sizeof(a) / sizeof(int);
    MaximumSubArray(a, n);
    MaximumSumSubArray(a, n);
}