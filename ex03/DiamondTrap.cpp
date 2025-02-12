/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 01:32:03 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/10 03:08:44 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = "Default";
	this->Healt = FragTrap::Healt;
	this->Energy = ScavTrap::Energy;
	this->Attack = FragTrap::Attack;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->Healt = FragTrap::Healt;
	this->Energy = ScavTrap::Energy;
	this->Attack = FragTrap::Attack;
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond)
{
	*this = diamond;
	std::cout << "DiamondTrap " << diamond._name << " copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " is died!!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamond)
{
	this->_name = diamond._name;
	this->Healt = diamond.Healt;
	this->Energy = diamond.Energy;
	this->Attack = diamond.Attack;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_name << " and my ClapTrap name is " << this->Name << std::endl;
}
