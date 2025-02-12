/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:51:51 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/10 04:56:36 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int  main()
{
	ClapTrap clap1;
	ClapTrap clap2("hwa");
	ClapTrap clap3(clap2);
	ClapTrap clap4 = clap1;


	std::cout << std::endl;
	clap1.attack("hwa");
	clap2.attack("hiya");
	clap3.attack("homa");
	clap4.attack("lb3ab3");
	std::cout << std::endl;

	clap1.takeDamage(5);
	clap2.takeDamage(5);
	clap3.takeDamage(5);
	clap4.takeDamage(5);
	std::cout << std::endl;

	clap1.beRepaired(5);
	clap2.beRepaired(5);
	clap3.beRepaired(5);
	clap4.beRepaired(5);
	std::cout << std::endl;
	return (0);
}
