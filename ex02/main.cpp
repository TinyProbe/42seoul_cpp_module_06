/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:14:10 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 06:10:57 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Charger.hpp"
#include "ABase.hpp"
#include <iostream>

int main() {
	Charger chg;
	ABase* ptr;
	for (int i = 0; i < 5; ++i) {
		try {
			ptr = chg.generate();
			chg.identify(ptr);
			chg.identify(*ptr);
			delete ptr;
		} catch (const std::exception& e) {
			std::cout << e.what() << '\n';
		}
	}
}
