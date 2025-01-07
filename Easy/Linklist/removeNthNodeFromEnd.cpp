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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        // if(head == nullptr) return
        int length = 0;
        ListNode *current = head;
        while (current != nullptr)
        {
            length++;
            current = current->next;
        }
        if (n > length)
            return head;
        if (n == length)
        {
            ListNode *temp = head;
            head = head->next;
            delete (temp);
            return head;
        }

        ListNode *looptemp = head;
        for (int i = 1; i < length - n; i++)
        {
            looptemp = looptemp->next;
        }
        looptemp->next = looptemp->next->next;
        return head;
    }
};