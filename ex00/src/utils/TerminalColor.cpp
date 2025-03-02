/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TerminalColor.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 02:24:42 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/02 17:31:16 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TerminalColor.hpp"
#include <stdexcept>
#include <string>
#include <utility>

TerminalColor::TerminalColor() {}
TerminalColor::~TerminalColor() {}

TerminalColor& TerminalColor::getInstance() {
  static TerminalColor instance;
  return instance;
}

TerminalColor::TerminalColor(const TerminalColor&) {
  throw std::runtime_error("Copying of TerminalColor is not allowed");
}

TerminalColor& TerminalColor::operator=(const TerminalColor&) {
  throw std::runtime_error("Copy assignment of TerminalColor is not allowed");
  return *this;
}

const std::pair<ColorCode, std::string> TerminalColor::COLOR_MAP[] = {
  std::make_pair(BLACK, "\033[30m"),
  std::make_pair(RED, "\033[31m"),
  std::make_pair(GREEN, "\033[32m"),
  std::make_pair(YELLOW, "\033[33m"),
  std::make_pair(BLUE, "\033[34m"),
  std::make_pair(WHITE, "\033[37m"),
  std::make_pair(ORANGE, "\x1B[38;5;202m"),
  std::make_pair(RESET, "\033[0m"),
  std::make_pair(BG_BLACK, "\033[40m"),
  std::make_pair(BG_RED, "\033[41m"),
  std::make_pair(BG_GREEN, "\033[42m"),
  std::make_pair(BG_YELLOW, "\033[43m"),
  std::make_pair(BG_BLUE, "\033[44m"),
  std::make_pair(BG_WHITE, "\033[47m"),
  std::make_pair(BG_ORANGE, "\x1B[48;5;202m"),
  std::make_pair(BG_RESET, "\033[49m")
};

std::string TerminalColor::setColor(ColorCode bg, ColorCode color, const std::string& str) const {
  return COLOR_MAP[bg].second + COLOR_MAP[color].second + str + COLOR_MAP[RESET].second;
}
