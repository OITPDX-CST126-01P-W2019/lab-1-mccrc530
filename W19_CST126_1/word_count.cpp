#include "pch.h"
#include "word_count.h"
#include <iostream>
#include <fstream>
#include <string>

void InitializeWordCount(struct word_count & target, std::ifstream & file, std::string fileName)
{
	int totalCount{}, forCount{}, whileCount{}, ifCount{}, elseCount{}, caseCount{};
	std::string text;

	while(file >> text)
	{
		totalCount++;
		if (text.compare("for") == 0)
			forCount++;
		else if (text.compare("while") == 0)
			whileCount++;
		else if (text.compare("if") == 0)
			ifCount++;
		else if (text.compare("else") == 0)
			elseCount++;
		else if (text.compare("case") == 0)
			caseCount++;
	}

	target.totalCount = totalCount;
	target.forCount = forCount;
	target.whileCount = whileCount;
	target.ifCount = ifCount;
	target.elseCount = elseCount;
	target.caseCount = caseCount;
	target.fileName = fileName;
}

void PrintWordCount(struct word_count const target)
{
	std::cout << "In " << target.fileName << " there are:" << std::endl;
	std::cout << target.forCount << "   for" << std::endl;
	std::cout << target.whileCount << "   while" << std::endl;
	std::cout << target.ifCount << "   if" << std::endl;
	std::cout << target.elseCount << "   else" << std::endl;
	std::cout << target.caseCount << "   case" << std::endl;
	std::cout << "out of " << target.totalCount << " words read." << std::endl;
}