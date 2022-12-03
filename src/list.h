#ifndef LIST_H
#define LIST_H

struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode ListNode;
// Return length of list
int list_len(ListNode*);

// Removes nth node from the list 
ListNode* removeNthFromEnd(ListNode*, int);

// Print a list
void print(ListNode*);
#endif
