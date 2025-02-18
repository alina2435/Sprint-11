#include "list.h"
#include <stdbool.h>

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
	if (!list || !list->next) {
		return list;
	}
	bool swapped;
	t_list *temp;
	void *swap_data;
	
	do {
		swapped = false;
		temp = list;

		while (temp->next) {
			if (cmp(temp->data, temp->next->data)) {  
				swap_data = temp->data;
				temp->data = temp->next->data;
				temp->next->data = swap_data;
				swapped = true;
			}
			temp = temp->next;
		}
	}
	while (swapped);
	
	return list;
}

