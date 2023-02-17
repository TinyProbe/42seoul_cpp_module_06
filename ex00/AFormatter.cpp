/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IFormatter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:58:21 by tkong             #+#    #+#             */
/*   Updated: 2023/02/17 22:25:35 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AFormatter.hpp"

AFormatter::AFormatter() : value("0") {}
AFormatter::AFormatter(const AFormatter& rhs) { *this = rhs; }
AFormatter::AFormatter(const std::string& value) : value(value) {}
AFormatter::~AFormatter() {}
AFormatter& AFormatter::operator=(const AFormatter& rhs) {
	if (this == &rhs) {
		return *this;
	}
	this->value = rhs.value;
	return *this;
}

const std::string& AFormatter::getValue() const { return this->value; }
