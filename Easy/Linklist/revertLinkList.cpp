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
    ListNode *reverseList(ListNode *head)
    {
        int length = 0;
        ListNode *p_count = head;
        while (count != nullptr)
        {
            p_count = p_count->next;
            length++;
        }
        ListNode *before = nullptr;
        ListNode *after = nullptr;

        for (int i = 0; i < length; i++)
        {
            after = temp->next;
            temp->next = before;
            before = temp;
        }
    }
};