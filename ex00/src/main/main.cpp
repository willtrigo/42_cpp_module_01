/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:31:48 by dande-je          #+#    #+#             */
/*   Updated: 2025/02/27 18:23:09 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Zombie.hpp"
#include <cstdlib>

int main() {
  Zombie* heapZombie = newZombie("HeapZombie");
  heapZombie->announce();
  delete heapZombie;
  randomChump("StackZombie");
  Zombie heapZombie2;
  heapZombie2.announce();

  return EXIT_SUCCESS;
}
