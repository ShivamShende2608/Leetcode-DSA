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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>criticalindices;
        ListNode*prev=head;
        ListNode*curr=head->next;
        int index=1;


        while(curr && curr->next){
            int val= curr->val;
            int prevval= prev->val;
            int nextval=curr->next->val;

            if((val > prevval && val> nextval) || (val < prevval && val < nextval)){
                criticalindices.push_back(index);
            }
            prev=curr;
            curr=curr->next;
            index++;
        }

            if(criticalindices.size() < 2) return {-1,-1};
            int minDist=INT_MAX;

            for(int i=1; i< criticalindices.size();i++){
                minDist=min(minDist, criticalindices[i]-criticalindices[i-1]);
            }

            int maxDist=criticalindices.back()- criticalindices.front();

            return {minDist, maxDist};
        }
        
    
};
