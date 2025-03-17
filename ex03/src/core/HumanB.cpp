/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 07:13:50 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 00:53:14 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/HumanB.hpp"
#include "utils/Weapon.hpp"
#include <iostream>

HumanB::HumanB()
  : m_name("unamed"),
    m_weapon(NULL) {}

HumanB::HumanB(std::string name)
  : m_name(name),
    m_weapon(NULL) {}

HumanB::HumanB(const HumanB& other)
  : m_name(other.m_name),
    m_weapon(other.m_weapon) {
  *this = other;
  std::cout << "Copy constructor called for " << this->m_name << std::endl;
}

HumanB::~HumanB() {}

HumanB& HumanB::operator=(const HumanB& other) {
  if (this != &other) {
    this->m_name = other.m_name;
    this->m_weapon = other.m_weapon;
    std::cout << "Copy assigment operator called for " << this->m_name << std::endl;
  }
  return *this;
}

void HumanB::setWeapon(Weapon& weapon) {
  m_weapon = &weapon;
}

void HumanB::attack() {
  if (m_weapon) {
    std::cout << m_name << " attack with their " << m_weapon->getType() << std::endl;
  } else {
    std::cout << m_name << " has no weapon to attack with!" << std::endl;
  }
}
