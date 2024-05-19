/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:54:20 by dsydelny          #+#    #+#             */
/*   Updated: 2024/05/19 20:54:20 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main() {

    Data data;
    uintptr_t raw;

        std::cout << "Original value: " << &data << std::endl;
        raw = Serializer::serialize(&data);
        std::cout << "Deserialize value: " << Serializer::deserialize(raw) << std::endl;

        return 0;
}
