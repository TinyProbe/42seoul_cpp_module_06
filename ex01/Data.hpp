/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 04:23:40 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 04:33:38 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DATA_HPP
#define DATA_HPP

class Data {
	int i;
	float f;

public:
	Data();
	Data(const Data& rhs);
	Data(int i, float f);
	virtual ~Data();
	virtual Data operator=(const Data& rhs);

	virtual int getI() const;
	virtual float getF() const;
	virtual void setI(int i);
	virtual void setF(float f);

};

#endif
