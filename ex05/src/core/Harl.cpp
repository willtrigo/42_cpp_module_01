/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:07:30 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/08 16:35:56 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Harl.hpp"
#include "utils/TerminalColor.hpp"
#include <iostream>

const Harl::Level Harl::levelMap[TOTAL_LEVEL] = {
  {"DEBUG", &Harl::debug},
  {"INFO", &Harl::info},
  {"WARNING", &Harl::warning},
  {"ERROR", &Harl::error}
};

Harl::Harl() : m_color(TerminalColor::getInstance()) {}

Harl::Harl(const Harl& other) : m_color(TerminalColor::getInstance()) {
  *this = other;
  std::cout << "Copy constructor called for Hald" << std::endl;
}

Harl& Harl::operator=(const Harl& other) {
  if (this != &other) {}
  std::cout << "Copy assignment operator called for Harl" << std::endl;
  return *this;
}

Harl::~Harl() {}

void Harl::debug(void) {
    std::cout << m_color.setColor(BG_RESET, BLUE, "[ DEBUG ] ") << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << m_color.setColor(BG_RESET, YELLOW, "[ INFO ] ") << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << m_color.setColor(BG_RESET, ORANGE, "[ WARNING ] ") << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << m_color.setColor(BG_RESET, RED, "[ ERROR ] ") << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

bool Harl::harlCheckArgs(int argc, char* argv[]) {
  bool is_valid = true;
  if (argc != TOTAL_ARGS) {
    is_valid = false;
  } else {
    for (int i = 0; i < TOTAL_LEVEL; ++i) {
      if (this->levelMap[i].levelName == static_cast<std::string>(argv[LEVEL])) {
        is_valid = true;
        break;
      }
      is_valid = false;
    }
  }
  if (!is_valid) {
    std::cout << "You have this levels:" << std::endl;
    for (int i = 0; i < TOTAL_LEVEL; ++i) {
      std::cout << "  " << this->levelMap[i].levelName << std::endl;
    }
    std::cout << "Usage: " + std::string(argv[PROGRAM_NAME]) + " <level>" << std::endl;
  }
  return is_valid;
}

void Harl::complain(std::string level) {
  for (int i = 0; i < TOTAL_LEVEL; ++i) {
    if (this->levelMap[i].levelName == level) {
      (this->*levelMap[i].func)();
      return;
    }
  }
}
