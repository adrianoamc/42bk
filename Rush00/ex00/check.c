/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:57:10 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/30 14:56:37 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	n_col(int i_col[4], int i_c1)
{
	int i_c;

	i_c = 0;
	while (i_c < 4)
	{
		i_col[i_c] = g_i_v_l[i_c] % ft_p(10, 4 - i_c1) / ft_p(10, 3 - i_c1);
		i_c++;
	}
}

int		c_box(void)
{
	int i_c[4];
	int i_col[4];

	i_c[0] = 0;
	while (i_c[0] < 4)
	{
		n_col(i_col, i_c[0]);
		i_c[1] = 1;
		while (i_c[1] <= 4)
		{
			i_c[2] = 0;
			i_c[3] = 0;
			while (i_c[2] < 4)
			{
				if (i_col[i_c[2]] == i_c[1])
					i_c[3]++;
				if (i_c[3] >= 2)
					return (0);
				i_c[2]++;
			}
			i_c[1]++;
		}
		i_c[0]++;
	}
	return (1);
}

int		d_e(int i_k, int i_n)
{
	return (g_i_key_dic[g_i_ks[i_k] * 10 + i_n + 1]);
}

int		c_c_n(int i_c2)
{
	int i_c;

	i_c = 0;
	while (i_c < g_i_ks_c[g_i_ks[i_c2 + 4]])
	{
		if (g_i_v_c[i_c2] == d_e(g_i_ks[i_c2 + 4], i_c))
			return (1);
		i_c++;
	}
	return (0);
}

int		c_c(void)
{
	int i[4];
	int i_col[4];

	i[0] = 0;
	while (i[0] < 4)
	{
		n_col(i_col, i[0]);
		g_i_v_c[i[0]] = 0;
		i[1] = 0;
		while (i[1] < 4)
		{
			i[2] = ft_p(10, 3 - i[0]);
			g_i_v_c[i[0]] = g_i_v_c[i[0]] + i_col[i[1]] * i[2];
			i[1]++;
		}
		if (!c_c_n(i[0]))
			return (0);
		i[0]++;
	}
	return (1);
}
