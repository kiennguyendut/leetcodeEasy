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
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (!head || !head->next)
            return true;
        // Find trung diem
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // revert nua phia sau
        ListNode *prev = nullptr;
        while (slow)
        {
            ListNode *temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }

        // Compare hai nua
        ListNode *left = head;
        ListNode *right = prev; // prev is fisrt Node of revert list

        while (right)
        {
            if (left->val != right->val)
                return false;
            left = left->next;
            right = right->next;
        }

        return true;
    }
};