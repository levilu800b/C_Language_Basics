/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:10:13 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 18:06:44 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called!" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignation operator called!" << std::endl;
    if (this != &copy)
        _type = copy._type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called!" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}
