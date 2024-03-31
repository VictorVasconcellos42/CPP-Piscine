/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 23:33:49 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/30 23:33:56 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
    public: 
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& src);
        BitcoinExchange &operator = (const BitcoinExchange &src);
        void getExchange(std::ifstream &f);
        void dataInsert(const char * path);
        char *pathFile;
        int checkValue(double value);
        int checkLine(std::string line);
        int checkKey(std::string key);

    private:
        std::map<std::string, double> exchangeDataBase;
};
