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
int getlen(ListNode*head){
    ListNode*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k>getlen(head)) return head;
        ListNode*forward=NULL;
        ListNode*curr=head;
        ListNode*prev=NULL;
        int cnt=0;
        while(curr!=NULL && cnt<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            cnt++;
        }
        if(forward) head->next=reverseKGroup(forward,k);
        return prev;
    }
};
