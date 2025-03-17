/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlUtility.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:23:32 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 01:34:00 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Harl.hpp"
#include "utils/TerminalColor.hpp"
#include <iostream>

static std::string toUpper(const std::string& str);

void Harl::debug(void) {
    std::cout << m_color.setColor(BG_RESET, BLUE, "[ DEBUG ] ") 
              << "I love having extra bacon for my "
              << "7XL-double-cheese-triple-pickle-special-ketchup burger. "
              << "I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << m_color.setColor(BG_RESET, YELLOW, "[ INFO ] ") 
              << "I cannot believe adding extra bacon costs more money. "
              << "You didn’t put enough bacon in my burger! If you did, I "
              << "wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << m_color.setColor(BG_RESET, ORANGE, "[ WARNING ] ") 
              << "I think I deserve to have some extra bacon for free. I’ve "
              << "been coming for years whereas you started working here since "
              << "last month." << std::endl;
}

void Harl::error(void) {
    std::cout << m_color.setColor(BG_RESET, RED, "[ ERROR ] ") 
              << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

bool Harl::harlCheckArgs(int argc, char* argv[]) {
  bool is_valid = true;

  if (argc != TOTAL_ARGS) {
    is_valid = false;
  } else {
    std::string levelNormalize = toUpper(static_cast<std::string>(argv[LEVEL]));

    for (int i = 0; i < TOTAL_LEVEL; ++i) {
      if (this->levelMap[i].levelName == levelNormalize) {
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
    std::cout << "Usage: " + std::string(argv[PROGRAM_NAME]) + " <level>"
              << std::endl;
  }
  return is_valid;
}

void Harl::complain(std::string level) {
  std::string levelNormalize = toUpper(level);

  for (int i = 0; i < TOTAL_LEVEL; ++i) {
    if (this->levelMap[i].levelName == levelNormalize) {
      (this->*levelMap[i].func)();
      return;
    }
  }
}

static std::string toUpper(const std::string& str) {
  std::string new_str(str);

  for (size_t i = 0; i < new_str.length(); ++i) {
    new_str.at(i) = std::toupper(new_str.at(i));
  }
  return new_str;
}
