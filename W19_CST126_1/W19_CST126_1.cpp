// W19_CST126_1.cpp : Cyclomatic Complexity
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include "word_count.h"

int main()
{
	std::cout << "Please enter the input file name including extension: " << std::endl;

	std::string fileName;
	std::cin >> fileName;
	std::ifstream file(fileName);

	if(!file.fail())
	{
		word_count data;
		InitializeWordCount(data, file, fileName);
		PrintWordCount(data);
		file.close();
	}
}
