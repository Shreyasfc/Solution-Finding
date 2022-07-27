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
    ListNode* middleNode(ListNode* head) {
        
        vector<ListNode*> allNodes = {head};
        
        while (allNodes.back()->next != NULL)
            allNodes.push_back(allNodes.back()->next);
        
        return allNodes[allNodes.size() / 2]; 
    }
};