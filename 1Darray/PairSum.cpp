// Sorted Array given , find the pair that adds and give us the req sum(s)

// Two Pointer Approach

// (a,b) S=11

// a+b

// let  a=5 . b=6 and a+b=x , therefore x=11;
// if x=12 cause  (a.b) =(5,7{Decrease the higher value close to sum required})

//     1|4|5|6|8|10|
//  i=0               j=5
//  if ( a[i] + a[j] == Sum )
//  print ith and jth value

// update value of I and decrease the value of j
// lets add then == 12 > Sum {decrease jth value}
//    if (x> sum)
//    {
//     j--;
//    }
//    j comes to lower index => in this case to 3;
//    now if x < sum => Update the lower value
//    i.e if (x < sum){
//     i++;
//    }
//     when i and j overshow STOP don't take the same value of i And j not poitning on the same index that's why i <j only condition that will work

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 4,5,6,8,10};
    int n = sizeof(a) / sizeof(int);

    int i = 0, j = n - 1;
    int sum = 11;
    while (i < j)
    {
        if (a[i] + a[j] == sum)
        {
            cout << " (" << a[i] << "," << a[j] << ")";
            i++;
            j--;
        }
        else if (a[i] + a[j] > sum)
        {
            j--;
        }
        else if (a[i] + a[j] < sum)
        {
            i++;
        }
    }

    return 0;
}
