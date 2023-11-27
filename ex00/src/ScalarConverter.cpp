/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter..cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:50:07 by maujogue          #+#    #+#             */
/*   Updated: 2023/11/27 14:50:07 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::convert(const std::string str){
	if (str.size() > 1)
		std::cout << "String must be only 1 character." << std::endl;
	else if (!std::isprint(str[0]))
		std::cout << "String must be only 1 character." << std::endl;
}

