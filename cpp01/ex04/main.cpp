/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:58:43 by bbaudry           #+#    #+#             */
/*   Updated: 2022/02/02 00:34:27 by bbaudry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char *av[]) {

	if (ac == 4) {
		std::ifstream ifs(av[1]);
		if (ifs.good()) {
			std::string line;
			char *test;
			test = av[1] + ".replace";
			std::ofstream ofs(av[1] + test);
			int x = 0;
			int y = 0;

			while (std::getline(ifs, line)) {
				x = 0;
				while (line[x]) {
					if (line[x] == av[2][0]) {
						y = 0;
						while (line[x + y] && line[x + y] == av[2][y]) {
							y++;
						}
						if (!av[2][y]) {
							ofs << av[3];
							x = x + y - 1;
						}
						else
							ofs << line[x];
					}
					else
						ofs << line[x];
					x++;
				}
				ofs << std::endl;
			}
			ifs.close();
			ofs.close();
			return (0);
		}
		ifs.close();
	}
	std::cout << "Error" << std::endl;
	return (1);
}
