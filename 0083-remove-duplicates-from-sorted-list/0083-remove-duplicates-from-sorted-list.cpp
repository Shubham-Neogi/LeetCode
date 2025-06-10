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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;  //emptyList
        }
        if(head->next==NULL){
            return head;  //singleElement
        }
        ListNode* temp=head;
        while(temp!=NULL){
            if((temp->next!=NULL) && (temp->val==temp->next->val)){
                //remove
             ListNode* nextNode=temp->next;
             temp->next=nextNode->next;
             nextNode->next=NULL;
             delete nextNode;   
            }else{
                //Move ahead!!
                temp=temp->next;
            }
        }
        return head;
    }
};