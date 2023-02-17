/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 04:23:38 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 04:55:23 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

class Data;
class Serializer {

public:
	Serializer();
	Serializer(const Serializer& rhs);
	virtual ~Serializer();
	virtual Serializer operator=(const Serializer& rhs);

	virtual uintptr_t serialize(Data* ptr);
	virtual Data* deserialize(uintptr_t raw);

};

#endif
