/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 01:34:54 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/09 00:37:31 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors

FragTrap::FragTrap() : ClapTrap()
{
	this->Healt = 100;
	this->Energy = 100;
	this->Attack = 30;
	std::cout << "FragTrap " << this->Name <<  " is created"  <<  std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->Healt = 100;
	this->Energy = 100;
	this->Attack = 30;
	std::cout << "FragTrap " << name <<  " is created"  <<  std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap " << copy.Name <<  " is created"  <<  std::endl;
}

// Destructor

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->Name <<  " is died!!"  <<  std::endl;
}

// Operator

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	this->Name = src.Name;
	this->Healt = src.Healt;
	this->Energy = src.Energy;
	this->Attack = src.Attack;
	return (*this);
}

// Member Functions

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->Name << " high fives guys!" << std::endl;
}
