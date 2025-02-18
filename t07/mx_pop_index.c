#include "list.h"

void mx_pop_index(t_list **list, int index) {
	if (*list == NULL) {
		return;
	}
	if (index <= 0) {
		mx_pop_front(list);
		return;
	}
	t_list *current = *list;
	int size = 0;

	while (current != NULL) {
		size++;
		current = current->next;
	}
	if (index >= size) {
		mx_pop_back(list);
		return;
	}
	current = *list;
	
	for (int i = 0; current != NULL && i < index - 1; i++) {
        current = current->next;
	}
	if (current != NULL && current->next != NULL) {
		t_list *to_delete = current->next;
		current->next = current->next->next;
		free(to_delete);
	}
}

