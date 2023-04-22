/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:18:32 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/04/22 13:40:08 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char **argv)
{
    if (!argv[1])
    {
        std::cout << "INSERT TEXT" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        std::string str(argv[i]);
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
        if (i == argc -1)
            std::cout << str;
        else
            std::cout << str << " ";
    }
}