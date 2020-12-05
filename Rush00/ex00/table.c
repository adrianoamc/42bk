/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:57:16 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/30 14:56:25 by aakissue         ###   ########.fr       */
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

void	vec_lin(int i_l1, int i_l2, int i_l3, int i_l4)
{
	g_i_v_l[0] = i_l1;
	g_i_v_l[1] = i_l2;
	g_i_v_l[2] = i_l3;
	g_i_v_l[3] = i_l4;
}

int		test_sol(int i1, int i2, int i3, int i4)
{
	vec_lin(d_e(0, i1), d_e(1, i2), d_e(2, i3), d_e(3, i4));
	if (c_box())
	{
		if (c_c())
			return (1);
	}
	return (0);
}

int		find_sol(void)
{
	int i[4];

	i[0] = 0;
	while (i[0] < g_i_ks_c[g_i_ks[0]])
	{
		i[1] = 0;
		while (i[1] < g_i_ks_c[g_i_ks[1]])
		{
			i[2] = 0;
			while (i[2] < g_i_ks_c[g_i_ks[2]])
			{
				i[3] = 0;
				while (i[3] < g_i_ks_c[g_i_ks[3]])
				{
					if (test_sol(i[0], i[1], i[2], i[3]) == 1)
						return (1);
					i[3]++;
				}
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
	return (0);
}

void	create_table(void)
{
	if (find_sol())
		print_tab();
	else
		error_msg();
}

void	ini_k_dic_zero(void)
{
	int i_c;

	i_c = 0;
	while (i_c < 412)
	{
		g_i_key_dic[i_c] = 0;
		i_c++;
	}
}
