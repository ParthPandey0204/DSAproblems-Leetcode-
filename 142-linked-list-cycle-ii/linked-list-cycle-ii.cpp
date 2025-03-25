

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, bool> visited;
        ListNode* temp = head;

        while (temp) {
            if (visited.find(temp) != visited.end()) {
                return temp; 
            }
            visited[temp] = true;
            temp = temp->next;
        }
        return nullptr;
    }
};
