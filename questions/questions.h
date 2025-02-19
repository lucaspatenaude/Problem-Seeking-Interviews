#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <fstream>
#include <string>

void askGoodTechQuestions(std::ofstream &outfile);
void askBadTechQuestions(std::ofstream &outfile);
void askLearningStyleQuestions(std::ofstream &outfile);

#endif // QUESTIONS_H