#include "questions.h"
#include <iostream>

using namespace std;

void askGoodTechQuestions(ofstream &outfile) {
  cout << "Let's start with some questions about technology you like.\n"; 
  outfile << "# Technology You Like Questions\n\n";

  // Question #1
  string techName;
  cout << "What is a piece of technology you like using? ";
  cin.ignore();
  getline(cin, techName);
  outfile << "## What is a piece of technology you like using?\n\n" << techName << "\n\n";

  // Question #2
  cout << "Did you like using it right away, or did it grow on you over time? ";
  getline(cin, techName);
  outfile << "## Did you like using it right away, or did it grow on you over time?\n\n" << techName << "\n\n";

  // Question #3 - Branching Question
  cout << "Was it easy to learn and start using? (yes/no): ";
  string response;
  cin >> response;
  outfile << "## Was it easy to learn and start using? (yes/no):\n\n" << response << "\n\n";
  
  // Question #4 - Branches of Question #3
  if (response == "yes") {
    cout << "What specific features made it beginner-friendly? ";
  } else {
    cout << "What made it difficult or unintuitive? ";
  }
  cin.ignore();
  getline(cin, techName);
  outfile << (response == "yes" ? "## What specific features made it beginner-friendly?\n\n" : "## What made it difficult or unintuitive?\n\n") << techName << "\n\n";
}

void askBadTechQuestions(ofstream &outfile) {
  cout << "Now let's talk about technology you dislike.\n";
  outfile << "# Technology You Disike Questions\n\n";

  // Question #1
  string techName;
  cout << "What is a piece of technology you dislike? ";
  cin.ignore();
  getline(cin, techName);
  outfile << "## What is a piece of technology you dislike?\n\n" << techName << "\n\n";

  // Question #2
  cout << "Did you dislike it immediately, or did frustration grow over time? ";
  getline(cin, techName);
  outfile << "## Did you dislike it immediately, or did frustration grow over time?\n\n " << techName << "\n\n";

  // Question #3 - Branching Question
  cout << "Was it easy to learn? (yes/no): ";
  string response;
  cin >> response;
  outfile << "## Was it easy to learn? (yes/no):\n\n" << response << "\n\n";
  
  // Question #4 - Branches of Question #3
  if (response == "yes") {
    cout << "What about it made it easy to use? ";
  } else {
    cout << "What made it confusing or frustrating? ";
  }
  cin.ignore();
  getline(cin, techName);
  outfile << (response == "yes" ? "## What about it made it easy to use?\n\n" : "## What made it confusing or frustrating?\n\n") << techName << "\n\n";
}

void askLearningStyleQuestions(ofstream &outfile) {
  cout << "Now let's talk about how you learn new technology.\n";
  outfile << "# Learning Style Questions\n\n";

  // Question #1
  string response;
  cout << "How do you feel about learning new technology? ";
  cin.ignore();
  getline(cin, response);
  outfile << "## How do you feel about learning new technology?\n\n" << response << "\n\n";

  // Question #2
  cout << "What is the best technology you've ever used and why? ";
  getline(cin, response);
  outfile << "## What is the best technology you've ever used and why?\n\n" << response << "\n\n";

  // Question #3
  cout << "What is the worst technology you've ever used and why? ";
  getline(cin, response);
  outfile << "## What is the worst technology you've ever used and why?\n\n" << response << "\n\n";
}