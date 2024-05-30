/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 23:51:22 by qdo               #+#    #+#             */
/*   Updated: 2024/05/30 19:48:21 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string ft_file_content(std::ifstream &infile)
{
	std::string ret = "";
	std::string temp;

	while (1)
	{
		if (std::getline(infile, temp))
			ret += temp;
		else
			break ;
		if (!infile.eof())
			ret += "\n";
	}
	return (ret);
}

int	main(int ac, char **av)
{
	if (ac != 4 || av[1][0] == 0 || av[2][0] == 0)
		return (std::cerr << "args invalid"<< std::endl, 1);
	
	//open -> it's a stream.
	std::ifstream	infile(av[1]);
	if (infile.is_open() == 0)
		return (std::cerr << "can't open infile" << std::endl, 1);
	
	std::string outfile_name = (std::string)av[1] + ".replace";
	//open-wrtie -> 2 mode: std::ios::trunc || append. without std::ios-> by default: trunc
	std::ofstream outfile(outfile_name.c_str(), std::ios::trunc);
	if (outfile.is_open() == 0)
		return (infile.close(), std::cerr << "can't open " << outfile_name << std::endl, 1);
	
	std::string				to_re = av[2];
	int						len1 = to_re.length();
	std::string				re_with = av[3];
	int						len2 = re_with.length();
	
	//because it could be that we replace the \n in the string => we can't simply read only line by line.
	//my way to handle -- read all
	std::string				file_content = ft_file_content(infile);
	
	size_t pos = file_content.find(to_re, 0);
	while (pos != std::string::npos)
	{
		file_content.erase(pos, len1);
		file_content.insert(pos, re_with);
		pos = file_content.find(to_re, pos + len2);
	}
	
	outfile << file_content;
	infile.close();
	outfile.close();
	
	return (0);
}
