/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:36:28 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/21 20:05:31 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data *data = new Data("hoge", 20);
	Data *new_data;
	uintptr_t raw;

	std::cout << data->getName() << std::endl;
	std::cout << data->getAge() << std::endl;

	raw = serialize(data);
	new_data = deserialize(raw);

	std::cout << new_data->getName() << std::endl;
	std::cout << new_data->getAge() << std::endl;

	std::cout << data << std::endl;
	std::cout << new_data << std::endl;
	
	return (0);
}
