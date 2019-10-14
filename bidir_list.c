struct list_s 
{
	void * data;
	list_s * next;
	list_s * parent;
}

struct list_s * push(struct list_s * parent, void* data)
{ 
	struct list_s * new_node = (struct list_s *)malloc(sizeof(struct list_s));
	new_node.data = data;
	new_node.next = NULL;
	new_node.parent = NULL;

	new_node->parent = parent;
	if (parent != NULL)
		parent->next = new_node;

	return new_node;
}

struct t_list * push_to_end(struct list_s * node, void* data)
{
	if (node == NULL)
	{
		struct list_s * new_node = (struct list_s *)malloc(sizeof(struct list_s));
		new_node.data = data;
		new_node.next = NULL;
		new_node.parent = NULL;
		return new_node;
	}

	while (node->next != NULL)
	{
		node = node->next;
	}
	return push(node, data);
}

void * pop(struct list_s * node)
{
	if (node->parent != NULL)
		node->parent->next = node->next;
	if (node->next != NULL)
		node->next->parent = node->parent;
	void * data = node->data;
	free(node);
	return data;
}
