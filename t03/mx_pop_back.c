#include "list.h"

void mx_pop_back(t_list **list) {
	if (!list || !*list) {
		return;
	}
	if (!(*list)->next) {
		free(*list);
		*list = NULL;
		return;
	}
	t_list *temp = *list;

	while (temp->next->next) {
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}

