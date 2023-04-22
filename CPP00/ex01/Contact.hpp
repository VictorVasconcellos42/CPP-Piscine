/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:06:03 by vde-vasc          #+#    #+#             */
/*   Updated: 2023/04/22 17:30:16 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
    public:
        Contact();
        ~Contact();

        std::string getNickName() const;
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
        
        void setNickName(const std::string);
        void setFirstName(const std::string);
        void setLastName(const std::string);
        void setDarkestSecret(const std::string);
        void setPhoneNumber(const std::string);

    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestSecret;
        std::string phoneNumber;
};

#endif