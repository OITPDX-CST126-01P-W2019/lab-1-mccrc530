#ifndef WORDCOUNT_H
#define WORDCOUNT_H
#include <string>

struct word_count
{
	int totalCount, forCount, whileCount, ifCount, elseCount, caseCount;
	std::string fileName;

};

void InitializeWordCount(struct word_count & target, std::ifstream & file, std::string fileName);
void PrintWordCount(struct word_count target);
#endif