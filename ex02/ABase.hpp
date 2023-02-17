/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 05:30:22 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 05:38:27 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ABASE_HPP
#define ABASE_HPP

class ABase {

public:
	virtual ~ABase();
	virtual void printIdentify() const = 0;

};

#endif
