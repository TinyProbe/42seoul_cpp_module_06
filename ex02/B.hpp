/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:30:25 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 05:50:11 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef B_HPP
#define B_HPP

#include "ABase.hpp"

class B : public ABase {

public:
	virtual ~B();
	virtual void printIdentify() const;

};

#endif
