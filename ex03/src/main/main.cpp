/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 07:08:24 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/05 11:04:22 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/HumanA.hpp"
#include "core/HumanB.hpp"
#include "utils/Weapon.hpp"
#include <cstdlib>

int main() {
  {
    Weapon club = Weapon("crude spike club");

    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spike club");
    HumanB jim("Jim");
    Weapon club2;
    jim.attack();
    jim.setWeapon(club2);
    jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
  return EXIT_SUCCESS;
}
