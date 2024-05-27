#include<bits/stdc++.h>
using namespace std;

// Better Approach To Solve This Question
class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1)return n;
        vector<int> dp(n+1);
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2;i <= n;i++){
            dp[i] = dp[i-2] + dp[i-1];
        }
        return dp[n];
    }
};

// Time Complexity is of 2^n

// class Solution {
// public:
//     int fib(int n) {
//         if(n == 0 || n == 1)return n;
//         return fib(n-1) + fib(n-2);
//     }
// };