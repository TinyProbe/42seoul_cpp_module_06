/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:30:24 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 05:48:18 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef A_HPP
#define A_HPP

#include "ABase.hpp"

class A : public ABase {

public:
	virtual ~A();
	virtual void printIdentify() const;

};

#endif
