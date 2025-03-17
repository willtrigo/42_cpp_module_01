/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:07:15 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 01:36:36 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/Harl.hpp"
#include <cstdlib>
#include <string>

int main(int argc, char* argv[]) {
  Harl harl;

  if (!harl.harlCheckArgs(argc, argv))
    return EXIT_FAILURE;
  harl.complain(static_cast<std::string>(argv[LEVEL]));
  return EXIT_SUCCESS;
}
