#include<bits/stdc++.h>
using namespace std;
 
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* frwd = nullptr;
        
        while(curr != nullptr){
            frwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = frwd;
        }
        
        return prev;
    }
};
