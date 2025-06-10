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
    int getLength(ListNode* head){
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return head; //emptyList
        }
        if(head->next==NULL){
            return head;  //singleElement
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextNode=curr->next;
        int pos=0;
         int leng=getLength(head);
        if(leng<k){
            return head;
        }
        //! case mae solve karunga
        while(pos<k){
            nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
            pos++;
        }
       
        //Ab recursion sambhal lega
        ListNode* recursionKaAns=NULL;
        if(nextNode!=NULL){
            recursionKaAns=reverseKGroup(nextNode,k);
            head->next=recursionKaAns;
        }
        return prev;
    }
};