/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:34:47 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/08 20:08:49 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Zombie.hpp"
#include "utils/TerminalColor.hpp"
#include <iostream>

Zombie::Zombie() : m_name("Unnamed Zombie"), m_color(TerminalColor::getInstance()), m_str_color(BLACK), m_bg_color(BG_WHITE) {}

Zombie::Zombie(std::string name) : m_name(name), m_color(TerminalColor::getInstance()), m_str_color(BLACK), m_bg_color(BG_YELLOW) {}

Zombie::Zombie(const Zombie& other) : m_color(TerminalColor::getInstance()) {
  *this = other;
  this->m_str_color = WHITE;
  this->m_bg_color = BG_BLUE;
  std::cout << this->m_color.setColor(this->m_bg_color, this->m_str_color, "Copy constructor called for " + this->m_name) << std::endl;
}

Zombie& Zombie::operator=(const Zombie& other) {
  if (this != &other) {
    this->m_name = other.m_name;
    this->m_bg_color = BG_ORANGE;
    this->m_str_color = BLACK;
    std::cout << m_color.setColor(BG_ORANGE, BLACK, "Copy assigment operator called for " + this->m_name) << std::endl;
  }
  return *this;
}

Zombie::~Zombie() {
  std::cout << m_color.setColor(this->m_bg_color, this->m_str_color, this->m_name + " is destroyed.") << std::endl;
}

void Zombie::announce(void) {
  std::cout << m_color.setColor(this->m_bg_color, this->m_str_color, this->m_name + ": BraiiiiiiinnnzzzZ...") << std::endl;
}

void Zombie::setName(std::string name) {
  this->m_name = name;
}

void Zombie::setColors(ColorCode bg, ColorCode str) {
  this->m_bg_color = bg;
  this->m_str_color = str;
}
