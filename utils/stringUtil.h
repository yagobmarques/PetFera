#ifndef STRINGUTIL_H
#define STRINGUTIL_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

std::vector<std::string> splitString(std::string s, std::string separator);
bool isInt(const std::string& s);
bool isDouble(std::string s);
bool isEmpty(std:: string s);
#endif