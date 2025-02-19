#include <iostream>
#include <string>
#include <fstream>
#include "questions/questions.h"

using namespace std;

void createResponseFile(ofstream &outfile, const string &name);

int main() {
  string response;
  string name;

  cout << "Welcome to the Technology Experience Survey!\n";
  cout << "Please enter your name: ";
  getline(cin, name);

  ofstream outfile;
  createResponseFile(outfile, name);

  if (!outfile.is_open()) {
    cerr << "Error opening file for writing.\n";
    return 1;
  }

  outfile << "Interviewee: " << name << "\n\n";

  cout << "This survey will ask you about your experiences with technology.\n";
  cout << "It will cover topics like your favorite and least favorite "
          "technologies,\n";

  // Good Tech Section
  askGoodTechQuestions(outfile);

  // Bad Tech Section
  askBadTechQuestions(outfile);

  // Learning Style Section
  askLearningStyleQuestions(outfile);

  cout << "Thank you for participating in the survey!\n";
  outfile.close();
  return 0;
}

void createResponseFile(ofstream &outfile, const string &name) {
  string filename = "./responses/" + name + "-response.txt";
  outfile.open(filename);
}