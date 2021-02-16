Read Csv and process Line by Line

std::ifstream infile("E:/Video/Player/20200715_184539-fbf.csv");

	if (infile.is_open()) {
		
		std::vector<std::string> result;
		std::string row;
		std::string cell;
		
		//processo tutto il file
		while (!infile.eof()) {
			/*std::getline(infile, row);
			std::cout << row << std::endl;
			*/

			std::vector<std::string>   result;
			std::string                line;
			std::getline(infile, line);

			std::stringstream          lineStream(line);
			std::string                cell;

			while (std::getline(lineStream, cell, ','))
			{
				result.push_back(cell);
			}


			if (!lineStream && cell.empty())
			{
				// If there was a trailing comma then add an empty element.
				result.push_back("");
			}
		}
	}