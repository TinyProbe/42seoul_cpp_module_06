/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charger.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:40:01 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 06:01:12 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARGER_HPP
#define CHARGER_HPP

class ABase;
class Charger {

	static int _rand(int = int(1), int = int(100));
public:
	virtual ~Charger();
	virtual ABase* generate(void) const;
	virtual void identify(const ABase* p) const;
	virtual void identify(const ABase& p) const;

};

#endif
