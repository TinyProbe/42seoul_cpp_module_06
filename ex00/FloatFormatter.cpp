/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FloatFormatter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:27:39 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 04:00:09 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FloatFormatter.hpp"

FloatFormatter::FloatFormatter() : AFormatter() {}
FloatFormatter::FloatFormatter(const FloatFormatter& rhs) { *this = rhs; }
FloatFormatter::FloatFormatter(const std::string& value) : AFormatter(value) {}
FloatFormatter::~FloatFormatter() {}
FloatFormatter& FloatFormatter::operator=(const FloatFormatter& rhs) {
	if (this == &rhs) {
		return *this;
	}
	*dynamic_cast<AFormatter*>(this) = *dynamic_cast<const AFormatter*>(&rhs);
	return *this;
}

std::string FloatFormatter::format() const {
	std::string rtn;
	try {
		float val = std::stof(this->getValue());
		rtn = std::to_string(val);
		while (rtn.back() == '0') {
			rtn.pop_back();
		}
		if (rtn.back() == '.') {
			rtn += '0';
		}
		rtn += 'f';
	} catch (...) {
		rtn = "impossible";
	}
	return rtn;
}
