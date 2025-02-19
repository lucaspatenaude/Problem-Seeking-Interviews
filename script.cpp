#include <iostream>
#include <string>

using namespace std;

void askGoodTechQuestions();
void askBadTechQuestions();
void askLearningStyleQuestions();
void askProblemStatementQuestions();

int main() {
  string response;

  cout << "Welcome to the Technology Experience Survey!\n";

  // Good Tech Section
  cout << "Would you like to start by discussing a technology you like? "
          "(yes/no): ";
  cin >> response;
  if (response == "yes") {
    askGoodTechQuestions();
  }

  // Bad Tech Section
  cout << "Now, would you like to discuss a technology you dislike? (yes/no): ";
  cin >> response;
  if (response == "yes") {
    askBadTechQuestions();
  }

  // Learning Style Section
  cout << "Would you like to share how you prefer learning new technology? "
          "(yes/no): ";
  cin >> response;
  if (response == "yes") {
    askLearningStyleQuestions();
  }

  // Problem Statement Section
  cout << "Finally, would you like to define a problem statement for a "
          "technology issue? (yes/no): ";
  cin >> response;
  if (response == "yes") {
    askProblemStatementQuestions();
  }

  cout << "Thank you for participating in the survey!\n";
  return 0;
}

void askGoodTechQuestions() {
  string techName;
  cout << "What is a piece of technology you like using? ";
  cin.ignore();
  getline(cin, techName);

  cout << "Did you like using it right away, or did it grow on you over time? ";
  getline(cin, techName);

  cout << "Was it easy to learn and start using? (yes/no): ";
  string response;
  cin >> response;
  if (response == "yes") {
    cout << "What specific features made it beginner-friendly? ";
  } else {
    cout << "What made it difficult or unintuitive? ";
  }
  cin.ignore();
  getline(cin, techName);
}

void askBadTechQuestions() {
  string techName;
  cout << "What is a piece of technology you dislike? ";
  cin.ignore();
  getline(cin, techName);

  cout << "Did you dislike it immediately, or did frustration grow over time? ";
  getline(cin, techName);

  cout << "Was it easy to learn? (yes/no): ";
  string response;
  cin >> response;
  if (response == "yes") {
    cout << "What about it made it easy to use? ";
  } else {
    cout << "What made it confusing or frustrating? ";
  }
  cin.ignore();
  getline(cin, techName);
}

void askLearningStyleQuestions() {
  string response;
  cout << "How do you feel about learning new technology? ";
  cin.ignore();
  getline(cin, response);

  cout << "What is the best technology you've ever used and why? ";
  getline(cin, response);

  cout << "What is the worst technology you've ever used and why? ";
  getline(cin, response);
}

void askProblemStatementQuestions() {
  string response;
  cout << "What specific function do you want this technology to perform "
          "better? ";
  cin.ignore();
  getline(cin, response);

  cout << "What is currently not working efficiently? ";
  getline(cin, response);

  cout << "If you could design an ideal solution, what would it look like? ";
  getline(cin, response);
}