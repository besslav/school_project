#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
#include <stdio.h>


typedef struct s_stack
{
	int					content;
	int					real_ind;
	struct s_stack		*next;
	struct s_stack		*prev;
	int					combo_len;
	int					best_combo;
	struct s_stack		*combo_prev;
	short int			a_dir;
	short int			b_dir;
	int					a_steps;
	int					b_steps;
	int					a_best_steps;
	int					b_best_steps;
	int					best_sum;
}	t_stack;

typedef struct s_meta
{
	t_stack	*a;
	t_stack	*b;
	int		len;
	int		a_size;
	int		b_size;	
}	t_meta;

int		isnum(char *num);
void	check_doubles(int *mass, int len);
void	sorted(int *mass, int len);
void	quick(int *mass, int start, int end);
int		ft_numslen(char **string);
int		ft_strlen(const char *string);
char	**ft_split(char const *s, char c);
int		ft_atoi(char *str);
void	cleaner(char **cleanit, int ind);
int		*numcpy(int *sors, int len);
t_stack	*ft_lstnew(int content);

void	printer(int *mass, int len);
void	list_printer(t_stack *a);

int		*ft_strjoin(int *s1, int *s2, int s1len, int s2len);
int		find_ind(int num,int *sorted);
void	init_stack(int *mass, int *sorted, t_meta *data);
void	algo_start(t_meta *data);
int		check_if_elem_in_subcombo(int *subcombo, t_meta *data);
void	algo_continue(t_meta *data);
t_stack	*algo_base(t_meta *data);
void	ground_zero(t_stack *on_count);
void	read_best_sum(t_stack *elem);

void	sa(t_meta *data);
void	sb(t_meta *data);
void	ss(t_meta *data);
void	pb(t_meta *data);
void	pa(t_meta *data);
void	r_ab(t_meta *data, char stack);
void	rr(t_meta *data);
void	rr_ab(t_meta *data, char stack);
void 	rrr(t_meta *data);

# endif