/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:58:51 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/21 23:12:38 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERAL_HPP
# define LITERAL_HPP

# include <iostream>
# include <string>

class Literal
{
	private:
		std::string _str;
		Literal(void);
	public:
		Literal(std::string str);
		Literal(Literal const &copy);
		~Literal(void);
		Literal &operator=(Literal const &copy);

		void printChar(void) const;
		void printInt(void) const;
		void printFloat(void) const;
		void printDouble(void) const;
};

#endif 
