#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include "questions/questions.h"

using namespace std;

// -------------------- DEPENDENCIES --------------------

void createResponseFile(ofstream &outfile, const string &name); // Create a response file with interviewee's name
string mainBuffer = "\n\n"; // Buffer to separate sections in the response file and terminal prompts

// -------------------- MAIN PROGRAM --------------------

int main() {
  string response;
  string name;

  cout << endl << "Welcome to the Technology Experience Survey!" << mainBuffer;
  
  // Create a response file for the interviewee
  cout << "As a single input, please enter your first name and last name: ";
  getline(cin, name); cout << endl;
  ofstream outfile;
  createResponseFile(outfile, name);

  // Check if the file was opened successfully; Abort if a response file could not be created
  if (!outfile.is_open()) {
    cerr << "Error opening file for writing." << endl;
    return 1;
  }

  outfile << "# 📝 " << name << "'s Technology Responses" << mainBuffer; // Append the interviewee's name to the response file

  cout << "This survey will ask you about your experiences with technology." << endl;
  cout << "It will cover topics like your favorite and least favorite technologies, as well as some questions about your learning style" << mainBuffer;

  // Survey Questions
  outfile << "---" << mainBuffer;
  askGoodTechQuestions(outfile);
  outfile << "---" << mainBuffer;
  askBadTechQuestions(outfile);
  outfile << "---" << mainBuffer;
  askLearningStyleQuestions(outfile);

  cout << "Thank you for participating in the survey!" << mainBuffer;
  outfile.close();
  return 0;
}

// -------------------- HELPER FUNCTIONS --------------------

void createResponseFile(ofstream &outfile, const string &name) {
  string filename = name;
  transform(filename.begin(), filename.end(), filename.begin(), ::tolower); // Convert all letters to lowercase 
  replace(filename.begin(), filename.end(), ' ', '-'); // Replace all spaces with dashes
  filename = "./responses/" + filename + "-response.md";
  outfile.open(filename);
}