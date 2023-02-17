/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharFormatter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:27:36 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 02:10:01 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CharFormatter.hpp"

CharFormatter::CharFormatter() : AFormatter() {}
CharFormatter::CharFormatter(const CharFormatter& rhs) { *this = rhs; }
CharFormatter::CharFormatter(const std::string& value) : AFormatter(value) {}
CharFormatter::~CharFormatter() {}
CharFormatter& CharFormatter::operator=(const CharFormatter& rhs) {
	if (this == &rhs) {
		return *this;
	}
	*dynamic_cast<AFormatter*>(this) = *dynamic_cast<const AFormatter*>(&rhs);
	return *this;
}

std::string CharFormatter::format() const {
	std::string rtn;
	try {
		int val = std::stoi(this->getValue());
		if (std::isprint(val)) {
			rtn += '\'';
			rtn += (char) val;
			rtn += '\'';
		} else {
			rtn = "Non displayable";
		}
	} catch (...) {
		rtn = "impossible";
	}
	return rtn;
}
