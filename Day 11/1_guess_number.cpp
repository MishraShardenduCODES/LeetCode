// #include <bits/stdc++.h>
// using namespace std;

// /** 
//  * Forward declaration of guess API.
//  * @param  num   your guess
//  * @return 	     -1 if num is higher than the picked number
//  *			      1 if num is lower than the picked number
//  *               otherwise return 0
//  * int guess(int num);
//  */

// class Solution {
// public:
//     int guessNumber(int n) {
//         int l=1,r=n;
//         while(l<=r){
//             int m = l + (r-l)/2;
//             if(!guess(m)){
//                 return m;
//             }else if(guess(m) == -1){
//                 r=m-1;
//             }else{
//                 l=m+1;
//             }
//         }
//         return 0;
//     }
// };