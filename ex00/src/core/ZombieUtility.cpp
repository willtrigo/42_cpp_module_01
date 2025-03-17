/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieUtility.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 19:55:52 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 00:34:29 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Zombie.hpp"
#include "utils/TerminalColor.hpp"
#include <iostream>


void Zombie::announce(void) {
  log(this->m_name + ": BraiiiiiiinnnzzzZ...");
}

void Zombie::setColors(BgColor bg, StrColor str) {
  this->m_bgColor = bg;
  this->m_strColor = str;
}

void Zombie::log(const std::string& str) const {
  std::cout << this->m_color.setColor(this->m_bgColor, this->m_strColor, str) << std::endl;
}
