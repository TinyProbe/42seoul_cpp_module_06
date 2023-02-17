/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 04:23:38 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 05:03:53 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main() {
	Serializer slz;
	Data data(10, 123.123f);

	uintptr_t p1 = slz.serialize(&data);
	Data* p2 = slz.deserialize(p1);
	if (p1 == (uintptr_t) p2) {
		std::cout << "same\n";
	} else {
		std::cout << "unsame\n";
	}
}
