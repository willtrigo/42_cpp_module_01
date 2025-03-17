/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:26:20 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 00:35:58 by dande-je         ###   ########.fr       */
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

Zombie* zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP
