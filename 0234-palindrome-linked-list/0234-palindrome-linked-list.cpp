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
ListNode* reverseList(ListNode* prev,ListNode* curr){
    while(curr!=NULL){
        ListNode* nextNode=curr->next;//for tracking
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}
 ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL){
            fast=fast->next;
            if(fast->next!=NULL){
                fast=fast->next;
                //mae yaha keh skta hu fast ne 2 step chal liya hai
                //ab slow ko bhi 1 step chalwao
                slow=slow->next;
            }
        }
        return slow;
    }
    bool compareList(ListNode* head1,ListNode* head2){
        ListNode* temp1=head1;
        ListNode* temp2=head2;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val!=temp2->val){
                return false;
            }else{
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        //Break into two halves
        ListNode* midNode=middleNode(head);
        ListNode* head2=midNode->next;
        midNode->next=NULL;  //breaking link
        ListNode* prev=NULL;
        ListNode* curr=head2;
        head2=reverseList(prev,curr);
        bool  ans=compareList(head,head2);
        return ans;
    }
};