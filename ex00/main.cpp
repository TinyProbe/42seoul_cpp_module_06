/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:43:19 by tkong             #+#    #+#             */
/*   Updated: 2023/02/17 22:49:30 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "CharFormatter.hpp"
#include "IntFormatter.hpp"
#include "FloatFormatter.hpp"
#include "DoubleFormatter.hpp"

int main(int ac, char** av) {
	if (ac != 2) {
		return 1;
	}
	std::string arg(av[1]);
	std::cout << "char: " << CharFormatter(arg).format() << '\n';
	std::cout << "int: " << IntFormatter(arg).format() << '\n';
	std::cout << "float: " << FloatFormatter(arg).format() << '\n';
	std::cout << "double: " << DoubleFormatter(arg).format() << '\n';
}
