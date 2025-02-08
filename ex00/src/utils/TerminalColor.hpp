/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TerminalColor.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:34:23 by dande-je          #+#    #+#             */
/*   Updated: 2025/02/08 13:35:38 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TERMINAL_COLOR_HPP
#define TERMINAL_COLOR_HPP

#include <string>
#include <utility>

enum ColorCode {
  RED,
  GREEN,
  YELLOW,
  BLUE,
  WHITE,
  ORANGE,
  RESET,
  TOTAL_COLOR
};

class TerminalColor {
 public:
  ~TerminalColor();

  static TerminalColor& getInstance();

  std::string setColor(ColorCode color, const std::string& str) const;

 private:
  TerminalColor();
  TerminalColor(const TerminalColor&);
  TerminalColor& operator=(const TerminalColor&);

  static const std::pair<ColorCode, std::string> COLOR_MAP[];
};

#endif // TERMINAL_COLOR_HPP
