/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 07:13:47 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 00:52:20 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "utils/Weapon.hpp"
#include <string>

class HumanB {
 public:
  HumanB();
  HumanB(std::string name);
  HumanB(const HumanB& other);
  ~HumanB();

  HumanB& operator=(const HumanB& other);

  void setWeapon(Weapon &weapon);
  void attack();

 private:
  std::string m_name;
  Weapon* m_weapon;
};

#endif // HUMANB_HPP
