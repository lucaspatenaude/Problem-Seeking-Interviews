#include "questions.h"
#include <iostream>

using namespace std;

string response;
string questionsBuffer = "\n\n";
bool loopFlag;

void askGoodTechQuestions(ofstream &outfile) {
  cout << "Let's start with some questions about technology you like." << questionsBuffer; 
  outfile << "## Technology You Like Questions" << questionsBuffer;

  // Question #1
  cout << "1. What is a piece of technology you like using?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 1. What is a piece of technology you like using?" << questionsBuffer << response << questionsBuffer;

  // Question #2
  cout << "2. Did you like using it right away, or did it grow on you over time?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 2. Did you like using it right away, or did it grow on you over time?\n\n" << response << questionsBuffer;

  // Question #3 - Branching Question
  cout << "3. Was it easy to learn and start using? (yes/no): ";
  getline(cin, response); cout << endl;
  outfile << "### 3. Was it easy to learn and start using? (yes/no): " << response << questionsBuffer;
  
  // Question #4 - Branches of Question #3
  loopFlag = true;
  while (loopFlag == true) 
  {
    if (response == "yes") {
      cout << "4. What specific features made it beginner-friendly? " << questionsBuffer;
      getline(cin, response); cout << endl;
      outfile << "### 4. What specific features made it beginner-friendly?" << questionsBuffer << response << questionsBuffer;
      loopFlag = false;
    } 
    else if (response == "no") {
      cout << "4. What made it difficult or unintuitive?" << questionsBuffer;
      getline(cin, response); cout << endl;
      outfile << "### 4. What made it difficult or unintuitive?" << questionsBuffer << response << questionsBuffer;
      loopFlag = false;
    }
    else {
      cout << "Please enter 'yes' or 'no': ";
      getline(cin, response); cout << endl;
    }
  }
}

void askBadTechQuestions(ofstream &outfile) {
  cout << "Now let's talk about technology you dislike." << questionsBuffer;
  outfile << "## Technology You Disike Questions" << questionsBuffer;

  // Question #5
  cout << "5. What is a piece of technology you dislike?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 5. What is a piece of technology you dislike?" << questionsBuffer << response << questionsBuffer;

  // Question #6
  cout << "6. Did you dislike it immediately, or did frustration grow over time? " << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 6. Did you dislike it immediately, or did frustration grow over time?" << questionsBuffer << response << questionsBuffer;

  // Question #7 - Branching Question
  cout << "7. Was it easy to learn? (yes/no): ";
  getline(cin, response); cout << endl;
  outfile << "### 7. Was it easy to learn? (yes/no): " << response << questionsBuffer;
  
  // Question #8 - Branches of Question #3
  loopFlag = true;
  while (loopFlag == true)
  {
    if (response == "yes") {
      cout << "8. What about it made it easy to use?" << questionsBuffer;
      getline(cin, response); cout << endl;
      outfile << "### 8. What about it made it easy to use?\n\n" << response << "\n\n";
      loopFlag = false;
    } 
    else if (response == "no") {
      cout << "8. What made it confusing or frustrating?" << questionsBuffer;
      getline(cin, response); cout << endl;
      outfile << "### 8. What made it confusing or frustrating?" << questionsBuffer << response << questionsBuffer;
      loopFlag = false;
    }
    else {
      cout << "Please enter 'yes' or 'no': ";
      getline(cin, response); cout << endl;
    }
  }
}

void askLearningStyleQuestions(ofstream &outfile) {
  cout << "Now let's talk about how you learn new technology.\n";
  outfile << "## Learning Style Questions\n\n";

  // Question #9
  cout << "9. How do you feel about learning new technology? ";
  getline(cin, response); cout << endl;
  outfile << "### 9. How do you feel about learning new technology?\n\n" << response << "\n\n";

  // Question #10
  cout << "10. What is the best technology you've ever used and why? ";
  getline(cin, response); cout << endl;
  outfile << "### 10. What is the best technology you've ever used and why?\n\n" << response << "\n\n";

  // Question #11
  cout << "11. What is the worst technology you've ever used and why? ";
  getline(cin, response); cout << endl;
  outfile << "### 11. What is the worst technology you've ever used and why?\n\n" << response << "\n\n";
}