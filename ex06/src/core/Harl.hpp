/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:07:47 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/08 17:00:50 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include "utils/TerminalColor.hpp"
#include <string>

enum LevelEnum {
  DEBUG,
  INFO,
  WARNING,
  ERROR,
  INVALID,
  TOTAL_LEVEL
};

class Harl {
 private:
  enum Arguments {
    PROGRAM_NAME,
    LEVEL,
    TOTAL_ARGS
  };
  typedef void (Harl::* harlFunc)();
  struct Level {
    std::string levelName;
    harlFunc func;
  };
  static const Level levelMap[TOTAL_LEVEL];
  const TerminalColor& m_color;

  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
  void invalid(void);
 public:
  Harl();
  Harl(const Harl& other);
  Harl& operator=(const Harl& other);
  ~Harl();

  bool harlCheckArgs(int argc, char* argv[]);
  void harlFilter(std::string level);
};

#endif // HARL_HPP
