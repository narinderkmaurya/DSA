//                     1
//                 1       1
//             1       2       1
//         1       3       3       1
//     1       4       6       4      1    



//     1. Tell the element at least place for given row and column number
// R=5 C=3 +> 6


//     2. Print any nth row of the pascal triangle
//     N=5   1 4 6 4 1

//     3. Given N print the entire triangle

//  For 1st -->
//     R-1
//         c
//             C-1

//         7c2 = 7!
//         _______     = 7 X 6
//                     ________ 
//                       2 X 1 
//         2! X 5!

// SHORCTCUT-> BOTH WILL GO THE SAME PLACES

// 10/9 x 9/2 x 8/3

// we will use like 10/1 x 9/2 x 8/3

// why? ==== 10/3 nothing 
// 10 x 9/2  divisible 
// in three numbers one will definittely be divisble 


// Pseduo cide-

// function NCR(n , r)
// {
//     res =1 ;
//     for (int i = 0; i < r; i++)
//     {
//         res = res x (n-i);
//         res = res/i+1;
//     }
//  return res;   
// }

// T.c - O(r)
// s.c - O(1)

// take long long so as it no overflow

// 2. For printing row

//     nth row will always have n elements
//      R-1
//         c
//             C-1

//     for (int c = 1; c < =n; c++)
//     {
//         print (funcNCR  (n-1, c-1))
//     }
//     T.c--> 0(nxr)


