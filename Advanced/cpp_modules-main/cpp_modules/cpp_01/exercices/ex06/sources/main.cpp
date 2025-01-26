/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:49:12 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:38:49 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    if (ac != 2)
    {
        std::cout << "Need arguments > ./harlfilter [DEBUG/INFO/WARNING/ERROR]" << std::endl;
        return 0;
    }

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int choice;
    for (int i = 0; i < 4; i++)
        if (av[1] == levels[i])
            choice = i;

    switch (choice + 1)
    {
    case 1:
        harl.complain("DEBUG");
        break;
    case 2:
        harl.complain("INFO");
        break;
    case 3:
        harl.complain("WARNING");
        break;
    case 4:
        harl.complain("ERROR");
        break;
    default:
        std::cout << "harl is quiet at the moment x_x\n";
    }
}
