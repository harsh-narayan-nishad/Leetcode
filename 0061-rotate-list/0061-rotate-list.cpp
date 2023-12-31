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
    ListNode* rotateRight(ListNode* head, int k) {
        //edge cases

        if(!head || !head ->next || k==0) return head;

        // Computing the length

        ListNode* curr = head;
        int l = 1;

        while(curr ->next && ++l){
            curr = curr ->next;
        }

        // GO till last node

        curr->next = head;
        k=k%l;
        k= l -k;
        while(k--){
            curr = curr->next;
        }

        head = curr->next;
        curr ->next = NULL;
        return head;
    }
};