#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
	if (index <= 0) {
		mx_push_front(list, data);
		return;
	}
	t_list *new_node = mx_create_node(data);
	t_list *temp = *list;
	int i = 0;

	while (temp && i < index - 1) {
		temp = temp->next;
		i++;
	}
	if (!temp) {
		mx_push_back(list, data);
		return;
	}
	new_node->next = temp->next;
	temp->next = new_node;
}

