// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int firstBadVersion(int n) {
//         long long l=0,r=n,ans=0;
//         while(l<=r){
//             long long mid = l + (r-l)/2;
//             if(isBadVersion(mid)){
//                 ans = mid;
//                 r=mid-1;
//             }else{
//                 l=mid+1;
//             }
//         }
//         return ans;
//     }
// };