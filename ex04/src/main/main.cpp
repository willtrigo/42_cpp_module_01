/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:07:19 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/05 17:23:12 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/FileProcessor.hpp"
#include <cstdlib>

int main(int argc, char* argv[]) {
  FileProcessor file;
  if (!file.run(argc, argv))
    return EXIT_FAILURE;
  return EXIT_SUCCESS;
}
