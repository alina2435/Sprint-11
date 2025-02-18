#include "list.h"

void mx_push_back(t_list **list, void *data) {
	if (!list) {
		return;
	}
	t_list *new_node = mx_create_node(data);
	
	if (!new_node) {
		return;
	}
	if (!*list) {
		*list = new_node;
		return;
	}
	t_list *temp = *list;
	
	while (temp->next) {
		temp = temp->next;
	}
	temp->next = new_node;
}

