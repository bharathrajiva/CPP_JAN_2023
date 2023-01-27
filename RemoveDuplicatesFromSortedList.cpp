//  Definition for singly-linked list.
 
#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
using namespace std;
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(temp !=NULL && temp->next!=NULL){
            if(temp->val == temp->next->val){
                temp->next=temp->next->next;
               
            }
            else{
                temp=temp->next;
            }
        } 
        return head;
    }
};
int main(){
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(1);
    ListNode* third = new ListNode(2);
    ListNode* fourth = new ListNode(3);
    ListNode* fifth = new ListNode(3);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    Solution s;
    ListNode* temp = s.deleteDuplicates(head);
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}