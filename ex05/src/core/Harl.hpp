/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:07:47 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/07 18:44:40 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

enum LevelEnum {
  DEBUG,
  INFO,
  WARNING,
  ERROR,
  TOTAL_LEVEL
};

class Harl {
 private:
  typedef void (Harl::* harlFunc)();
  struct Level {
    std::string levelName;
    harlFunc func;
  };
  static const Level levelMap[TOTAL_LEVEL];

  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
 public:
  Harl();
  Harl(const Harl& other);
  Harl& operator=(const Harl& other);
  ~Harl();

  void complain(std::string level);
  bool harlCheckArgs(int argc, char* argv[]);
};

#endif // HARL_HPP
