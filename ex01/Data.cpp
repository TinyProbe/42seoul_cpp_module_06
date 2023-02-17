/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 04:23:40 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 04:37:08 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : i(), f() {}
Data::Data(const Data& rhs) { *this = rhs; }
Data::Data(int i, float f) : i(i), f(f) {}
Data::~Data() {}
Data Data::operator=(const Data& rhs) {
	if (this == &rhs) {
		return *this;
	}
	this->i = rhs.i;
	this->f = rhs.f;
	return *this;
}

int Data::getI() const { return this->i; }
float Data::getF() const { return this->f; }
void Data::setI(int i) { this->i = i; }
void Data::setF(float f) { this->f = f; }
