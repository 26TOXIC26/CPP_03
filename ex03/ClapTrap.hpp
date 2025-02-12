/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:07:20 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/04 23:55:33 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{
	protected:
		std::string Name;
		unsigned int Healt;
		unsigned int Energy;
		unsigned int Attack;

	public:
			ClapTrap();
			ClapTrap(const ClapTrap &copy);
			ClapTrap(std::string name);
			~ClapTrap();
			ClapTrap &operator=(const ClapTrap &src);
			void attack(const std::string &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
};
#endif
