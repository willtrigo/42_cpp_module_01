/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:32:11 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/16 23:33:43 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "utils/TerminalColor.hpp"
#include <string>

class Zombie {
 public:
  Zombie();
  Zombie(std::string name);
  Zombie(const Zombie& other);
  ~Zombie();

  Zombie& operator=(const Zombie& other);

  void announce(void);
  void setName(std::string name);
  void setColors(BgColor bg, StrColor str);

 private:
  std::string m_name;
  const TerminalColor& m_color;
  StrColor m_strColor;
  BgColor m_bgColor;

  void log(const std::string& str) const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif // ZOMBIE_HPP
