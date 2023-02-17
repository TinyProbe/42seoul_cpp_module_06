/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:30:26 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 05:50:53 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef C_HPP
#define C_HPP

#include "ABase.hpp"

class C : public ABase {

public:
	virtual ~C();
	virtual void printIdentify() const;

};

#endif
