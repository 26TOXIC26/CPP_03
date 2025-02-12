/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:51:51 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/09 01:46:50 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int  main()
{
	DiamondTrap diamond("DiamondTrap");
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.takeDamage(10);
	diamond.beRepaired(10);
	diamond.whoAmI();
	diamond.attack("target");
	return (0);
}

