#include <iostream>
#include <string>
#include <fstream>
#include "questions/questions.h"

using namespace std;

// -------------------- DEPENDENCIES --------------------

void createResponseFile(ofstream &outfile, const string &name); // Create a response file with interviewee's name

// -------------------- MAIN PROGRAM --------------------

int main() {
  string response;
  string name;

  cout << "Welcome to the Technology Experience Survey!\n";
  
  // Create a response file for the interviewee
  cout << "Please enter your name: ";
  getline(cin, name);
  ofstream outfile;
  createResponseFile(outfile, name);

  // Check if the file was opened successfully; Abort if a response file could not be created
  if (!outfile.is_open()) {
    cerr << "Error opening file for writing.\n";
    return 1;
  }

  outfile << "Interviewee: " << name << "\n\n"; // Append the interviewee's name to the response file

  cout << "This survey will ask you about your experiences with technology.\n";
  cout << "It will cover topics like your favorite and least favorite "
          "technologies,\n";

  // Survey Questions
  askGoodTechQuestions(outfile);
  askBadTechQuestions(outfile);
  askLearningStyleQuestions(outfile);

  cout << "Thank you for participating in the survey!\n";
  outfile.close();
  return 0;
}

// -------------------- HELPER FUNCTIONS --------------------

void createResponseFile(ofstream &outfile, const string &name) {
  string filename = "./responses/" + name + "-response.txt";
  outfile.open(filename);
}