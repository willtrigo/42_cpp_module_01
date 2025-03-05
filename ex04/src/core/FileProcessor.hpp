/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileProcessor.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:08:14 by dande-je          #+#    #+#             */
/*   Updated: 2025/03/05 17:45:42 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_PROCESSOR_HPP
#define FILE_PROCESSOR_HPP

#include <string>

class FileProcessor {
 public:
  FileProcessor();
  FileProcessor(const FileProcessor& other);
  FileProcessor& operator=(const FileProcessor& other);
  ~FileProcessor();

  bool run(int argc, char* argv[]);
  std::string replaceOccurrences(const std::string& content, const std::string& s1, const std::string& s2);
};

#endif // FILE_PROCESSOR_HPP
