/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:48:30 by dsydelny          #+#    #+#             */
/*   Updated: 2024/05/18 18:10:17 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <climits>
#include <sstream> 

class ScalarConverter {
    
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const & src);
        ScalarConverter & operator=(ScalarConverter const & rhs);
        ~ScalarConverter();
        
    public:
        static void convert(std::string input);
};

#endif
