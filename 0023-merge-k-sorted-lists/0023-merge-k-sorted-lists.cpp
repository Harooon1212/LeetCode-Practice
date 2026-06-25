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
    // Merge two sorted linked lists
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if (list1 != nullptr)
            temp->next = list1;
        if (list2 != nullptr)
            temp->next = list2;
        return dummy->next;
    }

    // Divide and Conquer function
    ListNode* merge(vector<ListNode*>& lists, int left, int right) {
        // Base case: only one list
        if (left == right)
            return lists[left];

        // Divide
        int mid = left + (right - left) / 2;

        // Conquer
        ListNode* leftList = merge(lists, left, mid);
        ListNode* rightList = merge(lists, mid + 1, right);

        // Combine
        return mergeTwoLists(leftList, rightList);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty())
            return nullptr;

        return merge(lists, 0, lists.size() - 1);
    }
};