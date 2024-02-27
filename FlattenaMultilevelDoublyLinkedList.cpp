/*// Definition for a Node.class Node {public:
   int val;
   Node* prev;
   Node* next;
   Node* child;};*/class Solution {public:
   Node* flatten(Node* head) {
   if (!head)
        return nullptr;
   Node* curr = head;
   while (curr) {
       if (curr->child) {
           Node* next = curr->next;
           Node* childTail = curr->child;
           while (childTail->next)
               childTail = childTail->next;
           curr->next = curr->child;
           curr->child->prev = curr;
           curr->child = nullptr;
           if (next) {
               childTail->next = next;
               next->prev = childTail;
           }
       }
       curr = curr->next;
   }
   return head;}};