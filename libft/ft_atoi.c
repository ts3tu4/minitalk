/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:28:34 by mnanke            #+#    #+#             */
/*   Updated: 2023/06/06 17:28:47 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	is_sp(char str)
{
	return ((9 <= str && str <= 13) || str == 32);
}

static int	check_ans(int pm)
{
	if (pm == -1)
		return ((int)LONG_MIN);
	else
		return ((int)LONG_MAX);
}

int	ft_atoi(const char *str)
{
	int		pm;
	long	ans;
	long	lm_div;

	lm_div = LONG_MAX / 10;
	pm = 1;
	ans = 0;
	while (is_sp(*str))
		str ++;
	while ((*str == '-' || *str == '+'))
	{
		if (*str == '-')
			pm = pm * -1;
		str ++;
		if (*str == '-' || *str == '+')
			return (0);
	}
	while (*str && ft_isdigit(*str))
	{
		if (ans > lm_div || (ans == lm_div && *str - '0' > LONG_MAX % 10))
			return (check_ans(pm));
		ans = ans * 10 + *str++ - '0';
	}
	return (pm * ans);
}

// int	main(void)
// {
// 	char	str[1000];
// 
	// strcpy(str, "123+100");
	// printf("atoi1:%d\n", atoi(str));
	// printf("test1:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "a1");
	// printf("atoi2:%d\n", atoi(str));
	// printf("test2:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "--1");
	// printf("atoi3:%d\n", atoi(str));
	// printf("test3:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "++1");
	// printf("atoi4:%d\n", atoi(str));
	// printf("test4:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "+1");
	// printf("atoi5:%d\n", atoi(str));
	// printf("test5:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "-1");
	// printf("atoi6:%d\n", atoi(str));
	// printf("test6:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "0");
	// printf("atoi7:%d\n", atoi(str));
	// printf("test7:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "+42lyon");
	// printf("atoi8:%d\n", atoi(str));
	// printf("test8:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "+101");
	// printf("atoi9:%d\n", atoi(str));
	// printf("test9:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "-9223372036854775808");
	// printf("atoi10:%d\n", atoi(str));
	// printf("test10:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "18446744073709551614");
	// printf("atoi11:%d\n", atoi(str));
	// printf("test11:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "18446744073709551614");
	// printf("atoi12:%d\n", atoi(str));
	// printf("test12:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "4294967296");
	// printf("atoi13:%d\n", atoi(str));
	// printf("test13:%d\n", ft_atoi(str));
	// printf("---------------------\n");
	// strcpy(str, "4294967294");
	// printf("atoi14:%d\n", atoi(str));
	// printf("test14:%d\n", ft_atoi(str));
	// printf("---------------------\n");
// 	strcpy(str, "9223372036854775807");
// 	printf("atoi15:%d\n", atoi(str));
// 	printf("test15:%d\n", ft_atoi(str));
// 	printf("---------------------\n");
// 	strcpy(str, "9223372036854775808");
// 	printf("atoi16:%d\n", atoi(str));
// 	printf("test16:%d\n", ft_atoi(str));
// 	printf("---------------------\n");
// 	strcpy(str, "-9223372036854775808");
// 	printf("atoi17:%d\n", atoi(str));
// 	printf("test17:%d\n", ft_atoi(str));
// 	printf("---------------------\n");
// 	strcpy(str, "-9223372036854775809");
// 	printf("atoi18:%d\n", atoi(str));
// 	printf("test18:%d\n", ft_atoi(str));
// 	printf("---------------------\n");
// }
