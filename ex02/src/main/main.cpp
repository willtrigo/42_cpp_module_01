/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 22:28:15 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 00:47:05 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>

int main() {
  const std::string str("HI THIS IS BRAIN");
  const std::string* stringPTR = &str;
  const std::string& stringREF = str;

	std::cout << "The memory address of the string variable " << &str << std::endl;
	std::cout << "The memory address held by stringPTR " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF " << &stringREF << std::endl;
	std::cout << "The value of the string variable " << str << std::endl;
	std::cout << "The value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF " << stringREF << std::endl;
  return EXIT_SUCCESS;
}
