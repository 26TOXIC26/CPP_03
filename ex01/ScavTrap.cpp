/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:00:35 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/10 03:13:10 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_gatekeeper = false;
	this->Healt = 100;
	this->Energy = 50;
	this->Attack = 20;
	std::cout << "ScavTrap " << this->Name <<  " is created"  <<  std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_gatekeeper = false;
	this->Healt = 100;
	this->Energy = 50;
	this->Attack = 20;
	std::cout << "ScavTrap " << name <<  " is created"  <<  std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	this->_gatekeeper = copy._gatekeeper;
	std::cout << "ScavTrap " << copy.Name <<  " is created"  <<  std::endl;
}

// Destructor

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->Name <<  " is died!!"  <<  std::endl;
}

// Operator

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	this->Name = src.Name;
	this->Healt = src.Healt;
	this->Energy = src.Energy;
	this->Attack = src.Attack;
	this->_gatekeeper = src._gatekeeper;
	return (*this);
}

// Member Functions

void ScavTrap::attack(const std::string &target)
{
	if (this->Energy > 0 && this->Healt > 0)
	{
		std::cout << "ScavTrap " << this->Name << " attack " << target << " causing " << this->Attack << " points of damage!" << std::endl;
		this->Energy -= 1;
	}
	else
	{
		std::cout << "ScavTrap " << this->Name << " can't attack " << target << " because he is dead or out of energy" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (this->_gatekeeper)
	{
		std::cout << "ScavTrap " << this->Name << " have already enterred in Gate keeper mode" << std::endl;
		return ;
	}
	this->_gatekeeper = true;
	std::cout << "ScavTrap " << this->Name << " have enterred in Gate keeper mode" << std::endl;
}
