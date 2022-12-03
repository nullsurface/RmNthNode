#include "list.h"
#include <stdlib.h> 
#include <stdio.h>

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* curr_node = head;
    ListNode* last_node = NULL;
    int count = 0;
    n = list_len(head) - n;

    while (curr_node) {
	if (count == n) {
	    if (last_node)
		last_node->next = curr_node->next;
	    else
		head = curr_node->next;

	    return head;
	}
	
	last_node = curr_node;
	curr_node = curr_node->next;
	count++;
    }

    return head;
}

int list_len(ListNode* head) {
    int count = 0;

    while (head) {
	count++;
	head = head->next;
    }

    return count;
}

void print(ListNode* list) {
    printf("[");
    while(list) {
	if (list->next)
	    printf("%d, ", list->val);
	else
	    printf("%d", list->val);

        list = list->next;
    }
    printf("]\n");
}
