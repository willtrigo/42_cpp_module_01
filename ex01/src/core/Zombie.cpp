/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:26:09 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 00:36:55 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Zombie.hpp"
#include "utils/TerminalColor.hpp"

Zombie::Zombie()
  : m_name("Unnamed Zombie"),
    m_color(TerminalColor::getInstance()),
    m_strColor(BLACK),
    m_bgColor(BG_WHITE) {}

Zombie::Zombie(std::string name)
  : m_name(name),
    m_color(TerminalColor::getInstance()),
    m_strColor(BLACK),
    m_bgColor(BG_YELLOW) {}

Zombie::Zombie(const Zombie& other) : m_color(TerminalColor::getInstance()) {
  *this = other;
  this->m_strColor = WHITE;
  this->m_bgColor = BG_BLUE;
  log("Copy constructor called for " + this->m_name);
}

Zombie::~Zombie() {
  log(this->m_name + " is destroyed.");
}

Zombie& Zombie::operator=(const Zombie& other) {
  if (this != &other) {
    this->m_name = other.m_name;
    this->m_bgColor = BG_ORANGE;
    this->m_strColor = BLACK;
    log("Copy assigment operator called for " + this->m_name);
  }
  return *this;
}
