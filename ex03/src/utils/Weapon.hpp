/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 07:13:28 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 00:59:17 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "utils/TerminalColor.hpp"
#include <string>

class Weapon {
 public:
  Weapon();
  Weapon(const std::string type);
  Weapon(const Weapon& other);
  ~Weapon();

  Weapon& operator=(const Weapon& other);

  void setType(const std::string type);
  std::string &getType();

 private:
  std::string m_type;
  const TerminalColor& m_color;
  StrColor m_strColor;
  BgColor m_bgColor;
};

#endif // WEAPON_HPP
