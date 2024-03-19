/** * Definition for singly-linked list. * struct ListNode { *
    int val; *
    ListNode *next; *
    ListNode() : val(0), next(nullptr) {} *
    ListNode(int x) : val(x), next(nullptr) {} *
    ListNode(int x, ListNode *next) : val(x), next(next) {} * }; */class Solution {public:
   ListNode* reverseList(ListNode* head) {
       ListNode *prev = nullptr, *next = nullptr;
       while (head) {
           next = head->next;
           head->next = prev;
           prev = head;
           head = next;
       }
       return prev;
   }
   int size(ListNode* head) {
       int count=0;
       ListNode* current = head;
       while (current) {
           count++;
           current = current->next;
       }
       return count;
   }
   bool isPalindrome(ListNode* head) {
       if (!head || !head->next){
           return true;
       }
       ListNode *slow = head, *fast = head;
       while (fast->next && fast->next->next) {
           slow = slow->next;
           fast = fast->next->next;
       }
       ListNode* secondHalf = reverseList(slow->next);
       while (secondHalf) {
           if (head->val != secondHalf->val)
               return false;
           head = head->next;
           secondHalf = secondHalf->next;
       }
       return true;
           }};