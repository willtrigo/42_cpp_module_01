/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:24:49 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/03 20:11:46 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Zombie.hpp"
#include <cstdlib>
#include <string>

int main() {
  int N = 5;
  std::string name = "undeath";
  Zombie* horde = zombieHorde(N, name);
  for (int i = 0; i < N; ++i) {
    horde[i].announce();
  }
  delete[] horde;
  return EXIT_SUCCESS;
}
