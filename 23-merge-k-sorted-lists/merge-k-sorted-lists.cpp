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

    ListNode* mergeKLists(vector<ListNode*>& lists) {
     if(lists.size()==0)
     {
        return NULL;
     }
      priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> pq;
      int n=lists.size();
      for(int i=0;i<n;i++)
      {
        if(lists[i])
        {
            pq.push({lists[i]->val,lists[i]});
        }
      }

      ListNode* dummy=new ListNode;
      ListNode* temp=dummy;
      while(!pq.empty())
      {
        auto it=pq.top();
        pq.pop();
        ListNode* x=it.second;
        temp->next=x;
        if(x->next)
        {
            pq.push({x->next->val,x->next});
        }
        temp=temp->next;
      }
      return dummy->next;
      
    }
};



 