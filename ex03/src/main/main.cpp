/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 07:08:24 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/08 21:10:29 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/HumanA.hpp"
#include "core/HumanB.hpp"
#include "utils/Weapon.hpp"

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
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
  {
    Weapon club = Weapon("crude spike club");
    HumanB willtrigo("Willtrigo");
    Weapon club2;
    willtrigo.attack();
    willtrigo.setWeapon(club2);
    willtrigo.attack();
    willtrigo.setWeapon(club);
    willtrigo.attack();
    club.setType("some other type of club");
    willtrigo.attack();
  }
  return 0;
}
