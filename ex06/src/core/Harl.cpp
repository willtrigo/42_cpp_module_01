/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:07:30 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 01:47:09 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Harl.hpp"
#include "utils/TerminalColor.hpp"
#include <iostream>

const Harl::Level Harl::levelMap[TOTAL_LEVEL] = {
  {"DEBUG", &Harl::debug},
  {"INFO", &Harl::info},
  {"WARNING", &Harl::warning},
  {"ERROR", &Harl::error},
  {"INVALID", &Harl::invalid}
};

Harl::Harl() : m_color(TerminalColor::getInstance()) {}

Harl::Harl(const Harl& other) : m_color(TerminalColor::getInstance()) {
  *this = other;
  std::cout << "Copy constructor called for Hald" << std::endl;
}

Harl::~Harl() {}

Harl& Harl::operator=(const Harl&) {
  std::cout << "Copy assignment operator called for Harl" << std::endl;
  return *this;
}
