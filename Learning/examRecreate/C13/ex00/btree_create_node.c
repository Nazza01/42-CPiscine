#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	struct s_createNode	*node;

	node = NULL;
	node = malloc(sizeof(node));
	if (node)
	{
		node->item = item;
		node->next = 0;
	}
}
