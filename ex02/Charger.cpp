/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charger.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:40:02 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 06:10:11 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Charger.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>

int Charger::_rand(int mn, int mx) {
    static std::mt19937 gnt((std::random_device())());
    return (std::uniform_int_distribution<int>(mn, mx))(gnt);
}

Charger::~Charger() {}

ABase* Charger::generate(void) const {
	switch (Charger::_rand(0, 2)) {
		case 0: return new A();
		case 1: return new B();
		case 2: return new C();
		default:
			throw std::runtime_error("Random value is not in 0 to 2");
	}
}
void Charger::identify(const ABase* p) const { p->printIdentify(); }
void Charger::identify(const ABase& p) const { p.printIdentify(); }
