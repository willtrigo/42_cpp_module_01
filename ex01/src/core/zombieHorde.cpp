/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:28:23 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 00:38:03 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Zombie.hpp"
#include <sstream>
#include <string>

Zombie* zombieHorde(int N, std::string name) {
  Zombie* new_horde = new Zombie[N];

  for (int i = 0; i < N; ++i) {
    std::ostringstream new_name;
    new_name << name << " " << (i + 1);
    new_horde[i].setName(new_name.str());
  }
  return new_horde;
}
