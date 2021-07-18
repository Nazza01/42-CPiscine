#include "ft_list.h"
#include <stdlib.h>

t_list	ft_create_elem(void *data)
{
	t_list	*element;

	element = NULL;
	element = malloc(sizeof(t_list));
	if (element)
	{	
		element->data = data;
		element->next = NULL;
	}
	return (*element);
}
