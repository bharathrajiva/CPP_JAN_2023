#include<iostream>
#include<vector>
#include<queue>

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode dummy(0);
        ListNode* current = &dummy;
        vector<ListNode*> pointers(lists.size());
        
        for (int i = 0; i < lists.size(); i++) {
            pointers[i] = lists[i];
        }
        
        while (true) {
            int min_val = INT32_MAX;
            int min_list = -1;
            for (int i = 0; i < pointers.size(); i++) {
                if (pointers[i] && pointers[i]->val < min_val) {
                    min_val = pointers[i]->val;
                    min_list = i;
                }
            }
            
            if (min_list == -1) {
                break;
            }
            
            current->next = pointers[min_list];
            current = current->next;
            pointers[min_list] = pointers[min_list]->next;
        }
        
        return dummy.next;
    }
};
int main(){
    Solution s;
    ListNode* head = new ListNode(1);
    ListNode* head1 = new ListNode(4);
    ListNode* head2 = new ListNode(5);
    ListNode* head3 = new ListNode(1);
    ListNode* head4 = new ListNode(3);
    ListNode* head5 = new ListNode(4);
    ListNode* head6 = new ListNode(2);
    ListNode* head7 = new ListNode(6);
    head->next = head1;
    head1->next = head2;
    head3->next = head4;
    head4->next = head5;
    head6->next = head7;
    vector<ListNode*> lists;
    lists.push_back(head);
    lists.push_back(head3);
    lists.push_back(head6);
    ListNode* res = s.mergeKLists(lists);
    while(res){
        cout << res->val << " ";
        res = res->next;
    }
    return 0;}