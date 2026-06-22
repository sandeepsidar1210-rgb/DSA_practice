#include <bits/stdc++.h>
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
    ListNode* sortList(ListNode* head) {
        vector <int> v;
        ListNode* temp = head;

        while(temp != NULL){
            v.push_back(temp ->val);
            temp = temp -> next;
        }

        sort(v.begin() , v.end());

        temp = head;
        int i =0 ;

        while(temp != NULL){
            temp-> val = v[i];
            temp = temp -> next;
            i++;
        }
        return head;
    }
};


//------------------------------------------------optimal solution -----------------------------------------------------------------

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:

    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (left && right) {
            if (left->val < right->val) {
                tail->next = left;
                left = left->next;
            } else {
                tail->next = right;
                right = right->next;
            }

            tail = tail->next;
        }

        if (left) {
            tail->next = left;
        }

        if (right) {
            tail->next = right;
        }

        return dummy.next;
    }

    ListNode* sortList(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* mid = slow->next;
        slow->next = NULL;

        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);

        return merge(left, right);
    }
};