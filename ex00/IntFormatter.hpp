/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntFormatter.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:27:37 by tkong             #+#    #+#             */
/*   Updated: 2023/02/17 22:30:23 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTFORMATTER_HPP
#define INTFORMATTER_HPP

#include "AFormatter.hpp"

class IntFormatter : public AFormatter {

public:
	IntFormatter();
	IntFormatter(const IntFormatter& rhs);
	IntFormatter(const std::string& value);
	virtual ~IntFormatter();
	virtual IntFormatter& operator=(const IntFormatter& rhs);

	virtual std::string format() const;

};

#endif
