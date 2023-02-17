/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntFormatter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:27:38 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 02:10:01 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IntFormatter.hpp"

IntFormatter::IntFormatter() : AFormatter() {}
IntFormatter::IntFormatter(const IntFormatter& rhs) { *this = rhs; }
IntFormatter::IntFormatter(const std::string& value) : AFormatter(value) {}
IntFormatter::~IntFormatter() {}
IntFormatter& IntFormatter::operator=(const IntFormatter& rhs) {
	if (this == &rhs) {
		return *this;
	}
	*dynamic_cast<AFormatter*>(this) = *dynamic_cast<const AFormatter*>(&rhs);
	return *this;
}

std::string IntFormatter::format() const {
	std::string rtn;
	try {
		int val = std::stoi(this->getValue());
		rtn = std::to_string(val);
	} catch (...) {
		rtn = "impossible";
	}
	return rtn;
}
