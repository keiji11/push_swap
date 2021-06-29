/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:11:37 by llucente          #+#    #+#             */
/*   Updated: 2021/06/29 16:44:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define QUARTER frame->quarter
# define MEDIAN frame->median
# define THREE_Q frame->three_quarters
# define BIGGEST frame->biggest
# define BIG_ROTATE frame->big_rotate
# define BIG_RROTATE frame->big_rrotate
# define BIG_FLAG frame->big_flag
# define SMALLEST frame->smallest
# define SMALL_ROTATE frame->small_rotate
# define SMALL_RROTATE frame->small_rrotate
# define SMALL_FLAG frame->small_flag

/*
** circular doubly-linked list
*/

typedef struct s_stack
{
	long int		num;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

/*
** typedef for stacks a + b
*/

typedef struct s_frame
{
	struct s_stack	*a;
	struct s_stack	*b;

	char			**argv;
	char			*line;
	char			*str;

	int				print_stacks;
	int				do_write;
	int				stack_len;
	long			quarter;
	long			median;
	long			three_quarters;

	long			biggest;
	int				big_rotate;
	int				big_rrotate;
	int				big_flag;

	long			smallest;
	int				small_rotate;
	int				small_rrotate;
	int				small_flag;

	int				after_rotate;
}					t_frame;

/*
** Function for jump table
*/

typedef void		(*t_table)(t_frame *frame);

/*
** checker functions
*/

void				do_launch(t_frame *frame);
void				sort_test(t_frame *frame);

/*
** push_swap functions
*/

void				find_moves(t_frame *frame, char stack_name);
void				find_biggest_smallest(t_frame *frame, char stack_name);
void				find_biggest(t_frame *frame, char stack_name);
void				find_smallest(t_frame *frame, char stack_name);
int					find_stack_len(t_frame *frame, char stack_name);
void				insertion_solve_half(t_frame *frame);
void				insertion_solve_quarters(t_frame *frame);
void				median(t_frame *frame, char stack_name);
void				moves_to_end(t_frame *frame, char stack_name, int flag);
void				moves_to_start(t_frame *frame, char stack_name, int flag);
void				push_median(t_frame *frame, int split);
void				push_quarters(t_frame *frame, t_stack *stack_a, int split);
void				reset_moves(t_frame *frame);
void				solve_5_or_less(t_frame *frame);
void				solver(t_frame *frame);
int					sorted(t_frame *frame);

/*
** shared functions
*/

t_frame				*create_frame(t_frame *frame, char **argv);
void				display_stacks(t_frame *frame);
void				do_pa(t_frame *frame);
void				do_pb(t_frame *frame);
void				do_ra(t_frame *frame);
void				do_rb(t_frame *frame);
void				do_rr(t_frame *frame);
void				do_rra(t_frame *frame);
void				do_rrb(t_frame *frame);
void				do_rrr(t_frame *frame);
void				do_sa(t_frame *frame);
void				do_sb(t_frame *frame);
void				do_ss(t_frame *frame);
void				fill_stack_a(t_frame *frame);
void				push_swap_error(t_frame *frame);
void				push_swap_free(t_frame *frame);
void				stack_add_end(t_frame *frame, char stack_name, int num);
void				no_stack_add_end(t_stack **top, t_frame *frame, int num);
void				stack_del_top(t_frame *frame, char stack_name);
void				stack_add_top(t_frame *frame, char stack_name, int num);

int					ft_isneg(char c);
void				ft_goto_pushswap_error(int len, t_frame *frame);
int					ft_strcmp(const char *s1, const char *s2);
void				ter_stack_frm_a_b(char stack_name, t_frame *frame, char ch);
void				ter_flag_rrotate(int flag, t_frame *frame);

void				if_stack_a_b(int a_flag, int b_flag);
void				if_flag_a_b(int a_flag, int b_flag, t_stack *stack_a, t_stack *stack_a,
						char *a, char *b);
void				if_stack_a_b_2(t_frame *frame, int a_flag, int b_flag,
						t_stack *a, t_stack *b);
void				not_stack(t_stack *stack_a, t_stack *stack_b, char *a,
						char *b);
void				check_stacks(t_frame *frame, t_stack *stack_a, t_stack *stack_b);

#endif
