#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> first(26, INT_MAX);
        vector<int> last(26, INT_MIN);
        for (int i = 0; i < s.size(); i++) {
            int c = s[i] - 'a';
            first[c] = min(first[c], i);
            last[c] = max(last[c], i);
        }
        int result = -1;
        for (int c = 0; c < 26; c++) {
            if (first[c] == INT_MAX) continue;
            if (last[c] == INT_MIN) continue;
            result = max(result, (last[c] - first[c] - 1));
        }
        return result;
    }
};