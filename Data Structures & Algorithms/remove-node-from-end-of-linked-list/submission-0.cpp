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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=0;
        int N=0;
        vector<ListNode*>node;
        ListNode* curr=head;
        while(curr)
        {
            N++;
            node.push_back(curr);
            curr=curr->next;

        }

        int removeindex=N-n;

        if(removeindex==0)
        return head->next;

        node[removeindex-1]->next=node[removeindex]->next;

        return head;
    }
};
