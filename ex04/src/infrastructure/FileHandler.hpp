/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:07:50 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/17 01:12:34 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HANDLER_HPP
#define FILE_HANDLER_HPP

#include <string>

enum Arguments {
  PROGRAM_NAME,
  FILENAME,
  S1,
  S2,
  TOTAL_ARGS
};

class FileHandler {
 public:
  std::string filename;
  std::string s1;
  std::string s2;

  FileHandler();
  FileHandler(const FileHandler& other);
  ~FileHandler();

  FileHandler& operator=(const FileHandler& other);

  void validateArgs(int argc, char* argv[]);
  std::string readFile(const std::string& filename) const;
  void writeFile(const std::string& filename, const std::string& content) const;
};

#endif // FILE_HANDLER_HPP
