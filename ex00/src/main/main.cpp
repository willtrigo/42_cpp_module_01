/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:31:48 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/08 20:18:04 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Zombie.hpp"
#include <cstdlib>

int main() {
  Zombie* heapZombie = newZombie("HeapZombie");
  heapZombie->announce();
  delete heapZombie;

  randomChump("StackZombie");

  Zombie heapZombieCopyDefault("CopyZombieDefault");

  Zombie heapZombieCopyAssignment;
  heapZombieCopyAssignment = heapZombieCopyDefault;
  heapZombieCopyAssignment.announce();

  Zombie heapZombieCopyConstructor(heapZombieCopyDefault);
  heapZombieCopyConstructor.announce();

  Zombie heapZombieDefault;
  heapZombieDefault.announce();
  return EXIT_SUCCESS;
}
