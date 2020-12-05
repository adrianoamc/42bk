/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 23:23:16 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/29 20:07:57 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	create_table(int *parameters);
int		ft_strlen(char *args_list)

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	error_msg(void)
{
	write(1, "Error\n", 6);
}

void	print_tab(int tab[4][4])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			ft_putchar((char)(tab[i][j] + '0'));
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int		find_sol(int tab[4][4], int *parameters)
{

	return (0);
}

void	create_table(int *parameters)
{
	int i_tab[4][4];
	int i_l;
	int i_c;

	i_l = 0;
	i_c = 0;
	while (i_l < 4)
	{
		while (i_c < 4)
		{
			i_tab[i_l][i_c] = 0;
			i_c++;
		}
		i_l++;
	}
	if (find_sol(i_tab, parameters))
		print_tab(i_tab);
	else
		error_msg();
}

void	ini_key_dic(int i_key_dic[412])
{
	i_key_dic[121] = 4123;
	i_key_dic[122] = 4213;
	i_key_dic[131] = 4132;
	i_key_dic[132] = 4231;
	i_key_dic[133] = 4312;
	i_key_dic[141] = 4321;
	i_key_dic[211] = 3124;
	i_key_dic[212] = 3214;
	i_key_dic[221] = 1423;
	i_key_dic[222] = 2143;
	i_key_dic[223] = 2413;
	i_key_dic[224] = 3142;
	i_key_dic[225] = 3241;
	i_key_dic[226] = 3412;
	i_key_dic[231] = 1432;
	i_key_dic[232] = 2431;
	i_key_dic[233] = 3421;
	i_key_dic[311] = 1324;
	i_key_dic[311] = 2134;
	i_key_dic[312] = 2314;
	i_key_dic[321] = 1243;
	i_key_dic[322] = 1342;
	i_key_dic[323] = 2341;
	i_key_dic[411] = 1234;
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

int		ext_pars(char *args_list, int i_pars[16], int *i_ps)
{
	if (ft_strlen > 31)
		return (0);
	while (*args_list && *i_ps < 16)
	{
		if ((*args_list >= '1' && *args_list <= '4')
		&& (*(args_list + 1) == ' ')) || *(argument + 1) == 0) 
		{
			i_pars[*i_ps] = ((int)(*args_list - '0'));
			*i_ps++;
			args_list++;
		}
		if (*args_list == ' ')
		{
			args_list++;
		}
		else if (*args_list != 0)
		{
			return (0);
		}
	}
	return (1);
}

int validate_keys(int i_pars[16], int i_ks[8], int i_key_dic[412])
{
	int i_c;

	i_c = 0;
	while (i_c < 4)
	{
		i_ks[i_c] = 10 * i_pars[i_c] + i_pars[i_c + 4];
		i_ks[i_c + 4] = 10 * i_pars[i_c + 8] + i_pars[i_c + 12];
		i_c++;
	}
	ini_key_dic(&i_key_dic[0]);
	
}

void	test(int j)
{
	(j == 16) ? printf("Ok\n") : printf("Not Ok\n");
}

int		main(int argc, char **argv)
{
	int i_pars[16];
	int i_ks[8];
	int i_key_dic[42];
	int i_ps;

	i_ps = 0;
	if (argc == 2)
	{
		if (ext_pars(argv[1], &i_pars[0], &i_ps))
		{
			if (validate_keys(&i_pars[0], &i_ks[0], &i_cl_ks[0], &i_key_dic[0])
				create_table(parameters); //printf("%s\n", argv[1]); 
			else
				error_msg();
		}
		else
			error_msg();
	}
	else
	{
		error_msg();
	}	
	return (0);
}
