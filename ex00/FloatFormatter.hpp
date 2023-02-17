/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FloatFormatter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:27:38 by tkong             #+#    #+#             */
/*   Updated: 2023/02/17 22:30:45 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FLOATFORMATTER_HPP
#define FLOATFORMATTER_HPP

#include "AFormatter.hpp"

class FloatFormatter : public AFormatter {

public:
	FloatFormatter();
	FloatFormatter(const FloatFormatter& rhs);
	FloatFormatter(const std::string& value);
	virtual ~FloatFormatter();
	virtual FloatFormatter& operator=(const FloatFormatter& rhs);

	virtual std::string format() const;

};

#endif
