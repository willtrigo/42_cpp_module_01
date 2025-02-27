/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:34:47 by dande-je          #+#    #+#             */
/*   Updated: 2025/02/27 18:16:42 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Zombie.hpp"
#include <iostream>

Zombie::Zombie() : m_name("Unnamed Zombie") {}

Zombie::Zombie(std::string name) : m_name(name) {}

Zombie::Zombie(const Zombie& other) {
  this->m_name = other.m_name;
  std::cout << "Copy constructor called for " << this->m_name << std::endl;
}

Zombie& Zombie::operator=(const Zombie& other) {
  if (this != &other) {
    this->m_name = other.m_name;
    std::cout << "Copy assigment operator called for " << this->m_name << std::endl;
  }
  return *this;
}

Zombie::~Zombie() {
  std::cout << m_name << " is destroyed." << std::endl;
}

void Zombie::announce(void) {
  std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
  this->m_name = name;
}
