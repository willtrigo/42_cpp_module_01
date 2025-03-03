/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:26:20 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/03 19:31:23 by dande-je         ###   ########.fr       */
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
  Zombie& operator=(const Zombie& other);
  ~Zombie();

  void announce(void);
  void setName(std::string name);
  void setColors(ColorCode bg, ColorCode str);
 private:
  std::string m_name;
  const TerminalColor& m_color;
  ColorCode m_str_color;
  ColorCode m_bg_color;
};

Zombie* zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP
