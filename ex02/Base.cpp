/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:55:11 by dsydelny          #+#    #+#             */
/*   Updated: 2024/05/19 20:58:27 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base *generate() {
    srand(time(nullptr));
    int choice = rand() % 3;
    switch (choice) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != nullptr) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p) != nullptr) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p) != nullptr) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "UNKNOWN TYPE" << std::endl;
    }
}

void identify(Base& p) {
    try {
        if (dynamic_cast<A*>(&p) != nullptr) {
            std::cout << "A" << std::endl;
        } else if (dynamic_cast<B*>(&p) != nullptr) {
            std::cout << "B" << std::endl;
        } else if (dynamic_cast<C*>(&p) != nullptr) {
            std::cout << "C" << std::endl;
        }
    } catch (std::bad_cast& e) {
        std::cerr << "Failed to identify type: " << e.what() << std::endl;
    }
}
