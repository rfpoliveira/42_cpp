/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedrosa <rpedrosa@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:42:36 by rpedrosa          #+#    #+#             */
/*   Updated: 2025/11/12 16:08:35 by rpedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <map>
#include <ctime>
#include <stdlib.h>
#include<iomanip>
#include <string>

std::map<int, double> init_data_map();
void output(char *input, std::map<int, double> data);