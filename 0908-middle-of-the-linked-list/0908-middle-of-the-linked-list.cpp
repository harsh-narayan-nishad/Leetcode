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
    ListNode* middleNode(ListNode* head) {
       // ListNode* temp = new ListNode();
       ListNode* temp = head;
        temp=head;
        int count = 0;

        while(temp!=NULL){
            count++;
            temp = temp -> next;
        }

        int size = count/2;
        temp = head;

        while(size!=0){
            size--;
            temp = temp -> next;
        }

        return temp;
    }
};