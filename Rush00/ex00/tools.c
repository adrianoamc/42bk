/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:53:20 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/30 14:56:31 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern int g_i_ks[8];
extern int g_i_key_dic[412];
extern int g_i_ks_c[44];
extern int g_i_v_l[4];
extern int g_i_v_c[4];

/*
void    ft_putchar(char c);
void    error_msg(void);
int        ft_p(int i_base, int i_exp);
void    print_tab(void);
int        ft_strlen(char *args_list);
void    n_col(int i_col[4], int i_c1);
int        c_box(void);
int        d_e(int i_k, int i_n);
int        c_c_n(int i_c2);
int        c_c(void);
void    vec_lin(int i_l1, int i_l2, int i_l3, int i_l4);
int        test_sol(int i1, int i2, int i3, int i4);
int        find_sol(void);
void    create_table(void);
void    ini_k_dic_zero(void);
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	error_msg(void)
{
	write(1, "Error\n", 6);
}

int		ft_p(int i_base, int i_exp)
{
	int i_result;

	i_result = 1;
	while (i_exp > 0)
	{
		i_result = i_result * i_base;
		i_exp = i_exp - 1;
	}
	return (i_result);
}

void	print_tab(void)
{
	int		i_l;
	int		i_c;
	char	c_el;

	i_l = 0;
	while (i_l < 4)
	{
		i_c = 0;
		while (i_c < 4)
		{
			c_el = g_i_v_l[i_l] % ft_p(10, 4 - i_c) / ft_p(10, 3 - i_c) + '0';
			ft_putchar(c_el);
			i_c++;
		}
		write(1, "\n", 1);
		i_l++;
	}
}

int		ft_strlen(char *args_list)
{
	int i_c;

	i_c = 0;
	while (*args_list != '\0')
	{
		i_c++;
		args_list++;
	}
	return (i_c);
}
