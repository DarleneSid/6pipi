/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsydelny <dsydelny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 21:31:03 by dsydelny          #+#    #+#             */
/*   Updated: 2024/05/14 21:31:05 by dsydelny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
    std::string name;
    int         age;
};

uintptr_t    serialize( Data *data ) {
    return ( reinterpret_cast< uintptr_t >( data ) );
}

Data*   deserialize( uintptr_t data ) {
    return ( reinterpret_cast< Data* >( data ) );
}

int main( void )
{
    Data *data = new Data;

    data->name = "achraf";
    data->age = 30;

    std::cout << "Name: " << deserialize( serialize( data ) )->name << std::endl;
    std::cout << "Age: " << deserialize( serialize( data ) )->age << std::endl;

    delete data;

    return EXIT_SUCCESS;
}
