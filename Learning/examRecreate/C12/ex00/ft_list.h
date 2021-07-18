#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct Node
{
	char			*data;
	struct Node		*next;
}	t_list;

#endif