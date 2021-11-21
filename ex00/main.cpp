/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:20:03 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/21 23:12:49 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Literal.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Literal lit(argv[1]);
		lit.printChar();
		lit.printInt();
		lit.printFloat();
		lit.printDouble();
	}
	else
		std::cout << "Usage: ./literal <literal>" << std::endl;

	return (0);
}
