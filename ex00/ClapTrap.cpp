/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:07:16 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/10 06:39:39 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors

ClapTrap::ClapTrap() : Name("Default"), Healt(10), Energy(10), Attack(0)
{
	std::cout << "ClapTrap " << this->Name <<  " is created"  <<  std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), Healt(10), Energy(10), Attack(0)
{
	std::cout << "ClapTrap " << name <<  " is created"  <<  std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "ClapTrap " << copy.Name <<  " is created"  <<  std::endl;
}

// Destructor

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->Name <<  " is died!!"  <<  std::endl;
}

// Operator

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	this->Name = src.Name;
	this->Healt = src.Healt;
	this->Energy = src.Energy;
	this->Attack = src.Attack;
	return (*this);
}

// Member functions

void ClapTrap::attack(const std::string &target)
{
	if (this->Energy > 0 && this->Healt > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attack " << target << " causing " << this->Attack << " points of damage!" << std::endl;
		this->Energy -= 1;
	}
	else
		std::cout << "ClapTrap " << this->Name << " can't attack " << target << " because he is dead or out of energy!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Healt > 0)
	{
		std::cout << "ClapTrap " << this->Name << " take " << amount << " points of damage!" << std::endl;
		this->Healt -= amount;
	}
	else
		std::cout << "ClapTrap " << this->Name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Healt > 0 && this->Energy > 0)
	{
		std::cout << "ClapTrap " << this->Name << " is repaired for " << amount << " points!" << std::endl;
		this->Healt += amount;
		this->Energy -= 1;
	}
	else if (this->Energy <= 0)
		std::cout << "ClapTrap " << this->Name << " can't be repaired because he is out of energy!" << std::endl;
	else
		std::cout << "ClapTrap " << this->Name << " is already dead!" << std::endl;
}


