/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobbin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:24:43 by trobbin           #+#    #+#             */
/*   Updated: 2019/09/11 23:13:27 by trobbin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_swap(char **av_pr, char **av_nt)
{
	char *temp;

	temp = *av_pr;
	*av_pr = *av_nt;
	*av_nt = temp;
}

void	ft_write_params(int ac, char **av)
{
	int i;

	i = 1;
	while (ac != 1)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
		ac--;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				i = 1;
			}
			else
				i++;
		}
		ft_write_params(argc, argv);
	}
	return (0);
}
