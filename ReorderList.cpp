#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<queue>
#include<unordered_set>
#include<unordered_map>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};
class Solution {
public:
    void reorderList(ListNode *head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL) return;
        ListNode* ptr1s = head;
        ListNode* ptr2s = head;
        while(ptr1s && ptr2s && ptr2s->next && ptr2s->next){
            ptr1s = ptr1s->next;
            ptr2s = ptr2s->next->next;
        }
        ListNode* midptr = new ListNode(0);
        midptr->next = ptr1s->next;
        ptr1s->next = NULL;
        ptr1s = head;
        ListNode* cur = midptr->next;
        while(cur->next){
            ListNode* then = cur->next;
            cur->next = then->next;
            then->next = midptr->next;
            midptr->next = then;
        }
        ptr2s = midptr->next;
        delete midptr;
        ListNode* ptr1s_next_tmp = NULL;
        ListNode* ptr2s_next_tmp = NULL;
        while(ptr1s && ptr2s){
            ptr1s_next_tmp = ptr1s->next;
            ptr1s->next = ptr2s;
            ptr2s_next_tmp = ptr2s->next;
            ptr2s->next = ptr1s_next_tmp;
            ptr1s = ptr1s_next_tmp;
            ptr2s = ptr2s_next_tmp;
        }
    }
};
int main(){
    ListNode *head=new ListNode(1);
    ListNode *p1=new ListNode(2);
    ListNode *p2=new ListNode(3);
    ListNode *p3=new ListNode(4);
    ListNode *p4=new ListNode(5);
    head->next=p1;
    p1->next=p2;
    p2->next=p3;
    p3->next=p4;
    Solution s;
    s.reorderList(head);
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
    return 0;
}