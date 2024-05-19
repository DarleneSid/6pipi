/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:48:27 by dsydelny          #+#    #+#             */
/*   Updated: 2024/05/19 20:28:09 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter const & src) {
	*this = src;
}
ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs) {
	if (this != &rhs) {}
	return (*this);
}
ScalarConverter::~ScalarConverter() {}

std::string isPrintableChar(std::string input) {
	int i = 0;
	try
	{
		i = std::stoi(input);
		if (i > static_cast<int>(CHAR_MAX) || i < static_cast<int>(CHAR_MIN))
			return ("NOT PRINTABLE");
	}
	catch(const std::exception& e){
		return ("NOT PRINTABLE");
	}
	char chr = static_cast<char>(i);
	if (std::isprint(chr))
		return (std::string("'") + chr + std::string("'"));
	else
		return ("NOT PRINTABLE");
}

std::string isInt(std::string input) {
	try {
		int num = std::stoi(input);
		return std::to_string(num);
	} 
	catch (...) {
		return "NOT PRINTABLE";
	}
}

std::string isFloat(std::string input) {
	try {
		float flo = std::stof(input);
		return (std::to_string(flo).substr(0, std::to_string(flo).find('.') + 2) + "f");
	} catch (...) {
		return "nanf";
	}
}

std::string isDouble(std::string input) {
	try {
		double dbl = std::stod(input);
		return (std::to_string(dbl).substr(0, std::to_string(dbl).find('.') + 2));
	} catch (...) {
		return "nan";
	}
}

void ScalarConverter::convert(std::string input) {
	std::string str = input;
	if (!isprint(input[0]))
		return (std::cout << "NOT VALID INPUT" << std::endl, void());
	if(input.size() == 1){
		if(!isdigit(input[0])){
			int i = static_cast<int> (input[0]);
			input = std::to_string(i);
		}
	}
	try 
	{
		size_t pos;
		std::stof(input, &pos);
		if ((pos != input.length() && pos != input.length() - 1)
			|| (pos == input.length() - 1
			&& input[pos] != 'f'
			&& input[pos] != 'F')) {
				return (std::cout << "NOT VALID INPUT" << std::endl, void());
		}
	}
	catch(const std::exception& e)
	{
		return (std::cout << "NOT VALID INPUT" << std::endl, void());
	}

	if (input.compare("nan") == 0 || input.compare("nanf") == 0
		|| input.compare("inf") == 0 || input.compare("inff") == 0
		|| input.compare("+inf") == 0 || input.compare("+inff") == 0
		|| input.compare("-inf") == 0 || input.compare("-inff") == 0) {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			if (input.compare("nan") == 0 || input.compare("nanf") == 0)
				std::cout << "float: nanf" << std::endl;
			if(input.compare("inf") == 0 || input.compare("inff") == 0
				|| input.compare("+inf") == 0 || input.compare("+inff") == 0
				|| input.compare("-inf") == 0 || input.compare("-inff") == 0)
				std::cout << "float: "<< input << std::endl;
			std::cout << "double: " << input << std::endl;

			return;
	}

	std::cout << "input: " << str << std::endl;
	std::cout << "char: " << isPrintableChar(input) << std::endl;
	std::cout << "int: " << isInt(input) << std::endl;
	std::cout << "float: " << isFloat(input)<< std::endl;
	std::cout << "double: " << isDouble(input)<< std::endl;
}
