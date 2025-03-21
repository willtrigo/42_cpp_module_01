/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlUtility.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 01:40:50 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 01:45:31 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Harl.hpp"
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
              << "I cannot believe adding extra bacon costs more money. You "
              << "didn’t put enough bacon in my burger! If you did, I wouldn’t "
              << "be asking for more!" << std::endl;
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

void Harl::invalid(void) {
    std::cout << m_color.setColor(BG_WHITE, BLACK, "[ Probably complaining about insignificant problems ]") << std::endl;
}

bool Harl::harlCheckArgs(int argc, char* argv[]) {
  if (argc != TOTAL_ARGS) {
    std::cout << "You have this levels:" << std::endl;
    for (int i = 0; i < INVALID; ++i) {
      std::cout << "  " << this->levelMap[i].levelName << std::endl;
    }
    std::cout << "Usage: " + std::string(argv[PROGRAM_NAME]) + " <level>" << std::endl;
    return false;
  } 
  return true;
}

void Harl::harlFilter(std::string level) {
  std::string levelNormalize = toUpper(level);

  for (int i = 0; i < INVALID; ++i) {
    if (this->levelMap[i].levelName == levelNormalize) {
      (this->*levelMap[i].func)();
      return;
    }
  }
  (this->*levelMap[INVALID].func)();
}

static std::string toUpper(const std::string& str) {
  std::string new_str(str);

  for (size_t i = 0; i < new_str.length(); ++i) {
    new_str.at(i) = std::toupper(new_str.at(i));
  }
  return new_str;
}
