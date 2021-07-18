#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct s_createNode
{
	char				*item;
	struct s_createNode	*next;
}						t_btree;

#endif