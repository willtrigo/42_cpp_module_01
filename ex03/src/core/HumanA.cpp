/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 07:14:02 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 00:53:27 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/HumanA.hpp"
#include "utils/Weapon.hpp"
#include <iostream>

HumanA::HumanA()
  : m_name("unamed"),
    m_weapon(*(new Weapon())) {}

HumanA::HumanA(std::string name, Weapon& weapon)
  : m_name(name),
  m_weapon(weapon) {}

HumanA::HumanA(const HumanA& other)
  : m_name(other.m_name),
  m_weapon(other.m_weapon) {
  *this = other;
  std::cout << "Copy constructor called for " << this->m_name << std::endl;
}

HumanA::~HumanA() {}

HumanA& HumanA::operator=(const HumanA& other) {
  if (this != &other) {
    this->m_name = other.m_name;
    this->m_weapon = other.m_weapon;
    std::cout << "Copy assigment operator called for " << this->m_name << std::endl;
  }
  return *this;
}

void HumanA::setWeapon(Weapon& weapon) {
  m_weapon = weapon;
}

void HumanA::attack() {
  std::cout << m_name << " attack with their " << m_weapon.getType() << std::endl;
}
