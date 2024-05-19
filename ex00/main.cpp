/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:48:23 by dsydelny          #+#    #+#             */
/*   Updated: 2024/05/18 18:04:43 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char const **av) {
    if (ac != 2)
        return (std::cout << "NOT VALID INPUT" << std::endl, EXIT_FAILURE);
    ScalarConverter::convert(av[1]);
    return 0;
}
