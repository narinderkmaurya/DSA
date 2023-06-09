// n(==no of elements/buckets)= sizeof(a)/sizeof(int)
// a[10]={1,2,3,4,5}  Rest 5 are zero ; sizeof(a)=buckets* sizeof(int); {not the value of initialized is final it will give the complete size, agar size likhoge in main function to zero aayega agr nahi to nahi} 2.{if using outside main fucntion }
// aur size bhi wahei rahega na kam na zayada
#include <iostream>
using namespace std;
void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)

    {
        cout << a[i] << " ";
    }
    
    cout << endl;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 7, 8, 90};
    int n = sizeof(a) / sizeof(int);

    cout << n << endl;

    cout << "Using PrintArray Function" << endl;

    PrintArray(a, n);

    return 0;
}