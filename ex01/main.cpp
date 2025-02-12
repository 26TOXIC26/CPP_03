/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:51:51 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/08 01:31:26 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int  main()
{
	ScavTrap scav1("Scav1");
	ScavTrap scav2("Scav2");

	scav1.attack("Scav2");
	scav2.takeDamage(20);
	scav2.beRepaired(10);
	scav1.guardGate();
	scav2.guardGate();
	return (0);
}

