/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:51:51 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/09 00:36:58 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int  main()
{
	ScavTrap scav1("Scav1");
	ScavTrap scav2("Scav2");
	std::cout << std::endl;
	FragTrap frag1("");
	FragTrap frag2("");
	std::cout << std::endl;

	scav1.attack("Scav2");
	scav2.takeDamage(20);
	scav2.beRepaired(10);
	scav1.guardGate();
	scav2.guardGate();
	std::cout << std::endl;
	frag1.attack("Frag2");
	frag2.takeDamage(20);
	frag2.beRepaired(10);
	frag1.highFivesGuys();
	return (0);
}

