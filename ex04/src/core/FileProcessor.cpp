/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileProcessor.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:08:18 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/05 17:59:31 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/FileProcessor.hpp"
#include "infrastructure/FileHandler.hpp"
#include <iostream>

FileProcessor::FileProcessor() {}

FileProcessor::FileProcessor(const FileProcessor& other) {
  (void)other;
  std::cout << "Copy constructor called" << std::endl;
}

FileProcessor& FileProcessor::operator=(const FileProcessor& other) {
  if (this != &other) {
    std::cout << "Copy assigment operator called" << std::endl;
  }
  return *this;
}

FileProcessor::~FileProcessor() {}

bool FileProcessor::run(int argc, char* argv[]) {
  try {
    FileHandler file;
    file.validateArgs(argc, argv);
    std::string content = file.readFile(file.filename);
    std::string newContent = replaceOccurrences(content, file.s1, file.s2);
    std::string newFilename = file.filename + ".replace";
    file.writeFile(newFilename, newContent);
    std::cout << "File successfully processed. Output: " << newFilename << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
    return false;
  }
  return true;
}

std::string FileProcessor::replaceOccurrences(const std::string& content, const std::string& s1, const std::string& s2) {
  std::string newContent = content;
  size_t i = 0;

  while ((i = newContent.find(s1, i)) != std::string::npos) {
    newContent.erase(i, s1.length());
    newContent.insert(i, s2);
    i += s2.length();
  }
  return newContent;
}
