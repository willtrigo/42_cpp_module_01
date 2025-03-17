/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:07:47 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 01:36:20 by dande-je         ###   ########.fr       */
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
  TOTAL_LEVEL
};

enum Arguments {
  PROGRAM_NAME,
  LEVEL,
  TOTAL_ARGS
};

class Harl {
 private:
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

 public:
  Harl();
  Harl(const Harl& other);
  ~Harl();

  Harl& operator=(const Harl&);

  void complain(std::string level);
  bool harlCheckArgs(int argc, char* argv[]);
};

#endif // HARL_HPP
