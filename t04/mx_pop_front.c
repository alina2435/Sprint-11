#include "list.h"

void mx_pop_front(t_list **list) {
	if (!list || !*list) {
		return;
	}
	t_list *temp = *list;
	*list = temp->next;
	free(temp);
}

