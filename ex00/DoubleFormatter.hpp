/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DoubleFormatter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:27:39 by tkong             #+#    #+#             */
/*   Updated: 2023/02/17 22:31:01 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOUBLEFORMATTER_HPP
#define DOUBLEFORMATTER_HPP

#include "AFormatter.hpp"

class DoubleFormatter : public AFormatter {

public:
	DoubleFormatter();
	DoubleFormatter(const DoubleFormatter& rhs);
	DoubleFormatter(const std::string& value);
	virtual ~DoubleFormatter();
	virtual DoubleFormatter& operator=(const DoubleFormatter& rhs);

	virtual std::string format() const;

};

#endif
