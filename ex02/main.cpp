/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:14:10 by tkong             #+#    #+#             */
/*   Updated: 2023/02/27 22:00:45 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <random>

int _rand(int mn, int mx) {
	static std::mt19937 gnt((std::random_device())());
	return (std::uniform_int_distribution<int>(mn, mx))(gnt);
}
Base* generate(void) {
	switch (_rand(0, 2)) {
		case 0: return new A();
		case 1: return new B();
		case 2: return new C();
		default: return nullptr;
	}
}
void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A\n";
	}
	if (dynamic_cast<B*>(p)) {
		std::cout << "B\n";
	}
	if (dynamic_cast<C*>(p)) {
		std::cout << "C\n";
	}
}
void identify(Base& p) {
	try {
		(void) dynamic_cast<A&>(p);
		std::cout << "A\n";
		return;
	} catch (...) {}
	try {
		(void) dynamic_cast<B&>(p);
		std::cout << "B\n";
		return;
	} catch (...) {}
	try {
		(void) dynamic_cast<C&>(p);
		std::cout << "C\n";
		return;
	} catch (...) {}
}

int main() {
	for (int i = 0; i < 5; ++i) {
		Base* ptr = generate();
		if (ptr) {
			identify(ptr);
			identify(*ptr);
			delete ptr;
		}
	}
}
