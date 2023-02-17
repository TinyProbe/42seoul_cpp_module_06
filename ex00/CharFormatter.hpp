/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharFormatter.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:27:36 by tkong             #+#    #+#             */
/*   Updated: 2023/02/17 22:29:58 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARFORMATTER_HPP
#define CHARFORMATTER_HPP

#include "AFormatter.hpp"

class CharFormatter : public AFormatter {

public:
	CharFormatter();
	CharFormatter(const CharFormatter& rhs);
	CharFormatter(const std::string& value);
	virtual ~CharFormatter();
	virtual CharFormatter& operator=(const CharFormatter& rhs);

	virtual std::string format() const;

};

#endif
