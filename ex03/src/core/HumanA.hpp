/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 07:13:57 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 00:51:49 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "utils/Weapon.hpp"
#include <string>

class HumanA {
 public:
  HumanA();
  HumanA(std::string name, Weapon& weapon);
  HumanA(const HumanA& other);
  ~HumanA();

  HumanA& operator=(const HumanA& other);

  void setWeapon(Weapon& weapon);
  void attack();

 private:
  std::string m_name;
  Weapon& m_weapon;
};

#endif // HUMANA_HPP
