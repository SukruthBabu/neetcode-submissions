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

#include <algorithm>

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr)
        {
            return nullptr;
        }

        // Better aproach that takes up O(1)
        ListNode* cur = head; 
        ListNode* prev = nullptr;

        while(cur != nullptr)
        {
            ListNode* next = cur->next; // save the next pointer
            cur->next = prev; // set the cur to the next pointer
            prev = cur; // advance the prev to point to cur
            cur = next; // advance the cur to point to next
        }

        return prev; // previous now points to the head of the reversed list 


        // Below approach takes up O(n)
        // vector<ListNode*> vec;
        // ListNode* cur = head; 
        // while(cur != nullptr)
        // {
        //     vec.push_back(cur);
        //     cur = cur->next;
        // }     

        // reverse(vec.begin(), vec.end());
        // for(int i = 0; i < vec.size(); ++i)
        // {
        //     if(i == vec.size() -1)
        //     {
        //         vec[i]->next = nullptr;
        //         break;
        //     }

        //     vec[i]->next = vec[i+1];
        // }

        // return vec.front();
    }
};
