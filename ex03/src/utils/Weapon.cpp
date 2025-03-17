/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 07:13:32 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 00:57:09 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/Weapon.hpp"
#include "utils/TerminalColor.hpp"
#include <iostream>

Weapon::Weapon()
  : m_type("dagger"),
    m_color(TerminalColor::getInstance()),
    m_strColor(RED),
    m_bgColor(BG_RESET) {}

Weapon::Weapon(const std::string type)
  : m_type(type),
    m_color(TerminalColor::getInstance()),
    m_strColor(BLUE),
    m_bgColor(BG_RESET) {}

Weapon::Weapon(const Weapon& other)
  : m_type(other.m_type),
    m_color(TerminalColor::getInstance()) {
  *this = other;
  this->m_bgColor = BG_RESET;
  this->m_strColor = YELLOW;
  std::cout << "Copy constructor called for " << this->m_type << std::endl;
}

Weapon::~Weapon() {}

Weapon& Weapon::operator=(const Weapon& other) {
  if (this != &other) {
    this->m_type = other.m_type;
    this->m_bgColor = BG_RESET;
    this->m_strColor = GREEN;
    std::cout << "Copy assigment operator called for " << this->m_type << std::endl;
  }
  return *this;
}

void Weapon::setType(std::string type) {
  this->m_strColor = ORANGE;
  this->m_type = type;
}

std::string &Weapon::getType() {
  this->m_type = this->m_color.setColor(this->m_bgColor, this->m_strColor, this->m_type);
  return this->m_type;
}
