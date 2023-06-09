// // continous set of numbers present in Array = Subarray 
 
//   init => j=i      
//  |1|2|3|4|

//  123 - yes
//  1234 - no
//  1 2 3 4        
//  1,2            2           3
//  1,2,3          2,3         3,4
//  1,2,3,4        2,3,4       

//  take iterator k=i from zeroth index i=0 , print single, next , next , next...
//  loop(i=0 ... i<n-1)
//  {
//     loop(j=i ,,, j<n-1){
//          loop(k=i   <=j){ 
//     cout << a[k];
//  }
//  }
//  }


//   0 ... <=0  => o/p =1;
//   j= i+1;
//   0 ... <=1  => o/p = 12;
//   j= i+2;
//   0 ... <=2  => o/p =123;
//   j= i+3;

//   therefore j will go to n-1 , here j will go to i+3



#include<iostream>
using namespace std;


void GenerateSubarrays(int a[],int n){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int  k = i; k <=j ; k++)
                {
                    cout << a[k] << " ";
                }
                cout << endl;
            }
            
        }
        
}
int main()
{       
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    GenerateSubarrays(a,n);
    return 0;
}
