#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<unordered_set>
#include<unordered_map>
#include<stack>
#include<algorithm>
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
    int length(ListNode * node)
    {
        int count=0;
        while(node){
            count++;
            node=node->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
       if(length(head) < k)
           return head;
       ListNode * cur=head;
       ListNode * prev=NULL, *next=NULL;
       for(int i=0; i < k; i++)
       {
           next=cur->next;
           cur->next=prev;
           prev=cur;
           cur=next;
       }
       head->next=reverseKGroup(cur, k);
       return prev;
    }
};
int main(){
    ListNode * head=new ListNode(1);
    ListNode * temp=head;
    for(int i=2; i <= 5; i++)
    {
        temp->next=new ListNode(i);
        temp=temp->next;
    }
    Solution s;
    ListNode * result=s.reverseKGroup(head, 2);
    while(result)
    {
        cout<<result->val<<" ";
        result=result->next;
    }
    return 0;
}