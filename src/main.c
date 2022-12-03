#include <stdio.h>
#include "list.h"
#include <stdlib.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    ListNode* list1;
    ListNode* curr_node;

    for (int i = 0; i < 5; i++) {
	if (i == 0) {
	    list1 = malloc(sizeof(ListNode*));
	    curr_node = list1;
	} else {
	    curr_node = curr_node->next;
	}

	curr_node->val = arr[i];
	curr_node->next = malloc(sizeof(ListNode*));
    }

    free(curr_node->next);
    curr_node->next = NULL;
    
    printf("%d\n", list_len(list1));
    print(list1);
    print(removeNthFromEnd(list1, 0));
    print(removeNthFromEnd(list1, 3));

    return 0;
}
