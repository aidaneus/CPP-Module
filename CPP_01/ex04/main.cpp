#include <iostream>
#include <fstream>
#include <iosfwd>
#include <cstring>

int	main(int argc, char **argv) {

	if (argc != 4 || std::strlen(argv[2]) == 0)
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
	std::string		content;
	std::string		out_name = argv[1];
	out_name.append(".replace");
	
	std::ifstream	ifs;

	ifs.open(argv[1]);
	if (ifs.fail()) {
		std::cout << "Error: Cannot open '" << argv[1] << "'" << std::endl;
		return 1;
	}

	std::ofstream	ofs;

	ofs.open(out_name);
	if (ofs.fail()) {
		std::cout << "Error: Cannot create '" << out_name << "'" << std::endl;
		ifs.close();
		return 1;
	}

	do {
		
		std::getline(ifs, content);

		while (true) {

			std::size_t	idx = content.find(argv[2]);
			
			if (idx == std::string::npos) {
				ofs << content;
				break ;
			}
			ofs << content.substr(0, idx) << argv[3];
			content = content.substr(idx + std::strlen(argv[2]));
		}

		if (ifs.eof())
			break ;
		
		ofs << std::endl;

	} while (true);

	ifs.close();
	ofs.close();

	return 0;	
}