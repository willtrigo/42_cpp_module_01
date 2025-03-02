/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:34:34 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/02 17:46:22 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Zombie.hpp"
#include "utils/TerminalColor.hpp"
#include <string>

void randomChump(std::string name) {
  Zombie random_zombie(name);
  random_zombie.setColors(BG_RED, WHITE);
  random_zombie.announce();
}
