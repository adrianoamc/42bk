/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:23:16 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/30 14:56:14 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int g_i_ks[8];
int g_i_key_dic[412];
int g_i_ks_c[44];
int g_i_v_l[4];
int g_i_v_c[4];

void	ini_k_dic(void)
{
	ini_k_dic_zero();
	g_i_key_dic[121] = 4123;
	g_i_key_dic[122] = 4213;
	g_i_key_dic[131] = 4132;
	g_i_key_dic[132] = 4231;
	g_i_key_dic[133] = 4312;
	g_i_key_dic[141] = 4321;
	g_i_key_dic[211] = 3124;
	g_i_key_dic[212] = 3214;
	g_i_key_dic[221] = 1423;
	g_i_key_dic[222] = 2143;
	g_i_key_dic[223] = 2413;
	g_i_key_dic[224] = 3142;
	g_i_key_dic[225] = 3241;
	g_i_key_dic[226] = 3412;
	g_i_key_dic[231] = 1432;
	g_i_key_dic[232] = 2431;
	g_i_key_dic[233] = 3421;
	g_i_key_dic[311] = 1324;
	g_i_key_dic[312] = 2134;
	g_i_key_dic[313] = 2314;
	g_i_key_dic[321] = 1243;
	g_i_key_dic[322] = 1342;
	g_i_key_dic[323] = 2341;
	g_i_key_dic[411] = 1234;
}

void	ini_key_count(void)
{
	int i_c;

	i_c = 0;
	while (i_c < 44)
	{
		g_i_ks_c[i_c] = 0;
		i_c++;
	}
	g_i_ks_c[12] = 2;
	g_i_ks_c[13] = 3;
	g_i_ks_c[14] = 1;
	g_i_ks_c[21] = 2;
	g_i_ks_c[22] = 6;
	g_i_ks_c[23] = 3;
	g_i_ks_c[31] = 3;
	g_i_ks_c[32] = 3;
	g_i_ks_c[41] = 1;
}

int		validate_keys(int i_pars[16])
{
	int i_c;

	i_c = 0;
	while (i_c < 4)
	{
		g_i_ks[i_c] = 10 * i_pars[i_c] + i_pars[i_c + 4];
		g_i_ks[i_c + 4] = 10 * i_pars[i_c + 8] + i_pars[i_c + 12];
		i_c++;
	}
	ini_k_dic();
	ini_key_count();
	i_c = 0;
	while (i_c < 8)
	{
		if (g_i_ks_c[g_i_ks[i_c]] == 0)
			return (0);
		i_c++;
	}
	return (1);
}

int		ext_pars(char *args_list, int *i_pars)
{
	int i_ps;

	if (ft_strlen(args_list) != 31)
		return (0);
	i_ps = 0;
	while (*args_list && i_ps < 16)
	{
		if ((*args_list >= '1' && *args_list <= '4')
		&& (*(args_list + 1) == ' ' || *(args_list + 1) == '\0'))
		{
			i_pars[i_ps] = *args_list - '0';
			i_ps++;
			args_list++;
		}
		if (*args_list == ' ')
		{
			args_list++;
		}
		else if (*args_list != '\0')
		{
			return (0);
		}
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i_pars[16];

	if (argc == 2)
	{
		if (ext_pars(argv[1], i_pars))
		{
			if (validate_keys(i_pars))
			{
				create_table();
			}
			else
				error_msg();
		}
		else
			error_msg();
	}
	else
		error_msg();
	return (0);
}
