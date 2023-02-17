/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IFormatter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:58:20 by tkong             #+#    #+#             */
/*   Updated: 2023/02/17 22:17:48 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AFORMATTER_HPP
#define AFORMATTER_HPP

#include <string>

class AFormatter {
	std::string value;

public:
	AFormatter();
	AFormatter(const AFormatter& rhs);
	AFormatter(const std::string& value);
	virtual ~AFormatter();
	virtual AFormatter& operator=(const AFormatter& rhs);

	virtual const std::string& getValue() const;
	virtual std::string format() const = 0;

};

#endif
