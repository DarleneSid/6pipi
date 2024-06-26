/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:55:30 by dsydelny          #+#    #+#             */
/*   Updated: 2024/05/19 20:55:30 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "iostream"

int main() {
    Base* object = generate();
    std::cout << "Object generated: ";
    identify(object);
    std::cout << "Object generated using reference: ";
    identify(*object);
    delete object;
    return 0;
}
