/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:43:11 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/21 15:25:45 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <random>
#include <ctime>
#include "Base.hpp"

int main(void)
{
	Base base;
	Base *p;

	std::srand(time(NULL));
	p = base.generate();
	p->identify(p);

	return (0);
}