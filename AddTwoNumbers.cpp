#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {
}};
class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* head = new ListNode(0);
            ListNode* p = head;
            int carry = 0;
            while(l1 || l2 || carry) {
                int sum = 0;
                if(l1) {
                    sum += l1->val;
                    l1 = l1->next;
                }
                if(l2) {
                    sum += l2->val;
                    l2 = l2->next;
                }
                sum += carry;
                carry = sum / 10;
                p->next = new ListNode(sum % 10);
                p = p->next;
            }
            return head->next;
        }} ; 
int main(){
    Solution s;
    ListNode* l1 = new ListNode(2);
    ListNode* l2 = new ListNode(5);
    ListNode* l3 = new ListNode(3);
    ListNode* l4 = new ListNode(5);
    ListNode* l5 = new ListNode(6);
    ListNode* l6 = new ListNode(4);
    l1->next = l3;
    l2->next = l4;
    l4->next = l5;
    l5->next = l6;
    ListNode* l = s.addTwoNumbers(l1, l2);
    while(l) {
        cout << l->val << " ";
        l = l->next;
    }
    cout << endl;
    return 0;
}