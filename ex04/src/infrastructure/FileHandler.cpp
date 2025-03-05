/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:07:31 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/05 17:55:19 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/FileHandler.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

FileHandler::FileHandler() {}

FileHandler::FileHandler(const FileHandler& other) : filename(other.filename), s1(other.s1), s2(other.s2) {
  std::cout << "Copy constructor called" << std::endl;
}

FileHandler& FileHandler::operator=(const FileHandler& other) {
  if (this != &other) {
    this->filename = other.filename;
    this->s1 = other.s1;
    this->s2 = other.s2;
  }
  std::cout << "Copy assigment operator called" << std::endl;
  return *this;
}

FileHandler::~FileHandler() {}

void FileHandler::validateArgs(int argc, char* argv[]) {
  if (argc != TOTAL_ARGS) {
    throw std::runtime_error("Usage: " + std::string(argv[PROGRAM_NAME]) + " <filename> <s1> <s2>");
  }
  filename = argv[FILENAME];
  s1 = argv[S1];
  s2 = argv[S2];
}

std::string FileHandler::readFile(const std::string& filename) const {
  std::ifstream file(filename.c_str());
  if (!file.is_open()) {
    throw std::runtime_error("Error: Could not open file: " + filename);
  }
  std::stringstream buf;
  buf << file.rdbuf();
  return buf.str();
}

void FileHandler::writeFile(const std::string& filename , const std::string& content) const {
  std::ofstream file(filename.c_str());
  if (!file.is_open()) {
    throw std::runtime_error("Error: Could not write to file: " + filename);
  }
  file << content;
}
