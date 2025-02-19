#include "questions.h"
#include <iostream>

using namespace std;

string response;
string questionsBuffer = "\n\n";
bool loopFlag;

void askGoodTechQuestions(ofstream &outfile) {
  cout << "To begin the survey, I'd like to start by asking some questions about technology you like." << questionsBuffer; 
  outfile << "## 👍 Technology You Like Questions" << questionsBuffer;

  // Question #1
  cout << "1. On a day-to-day basis is there a piece of technology you really like using?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 1. On a day-to-day basis is there a piece of technology you really like using?" << questionsBuffer << response << questionsBuffer;

  // Question #2
  cout << "2. What about it do you like? Is it becuase of it's form factor or is it because of it functionality?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 2. What about it do you like? Is it becuase of it's form factor or is it because of it functionality?" << questionsBuffer << response << questionsBuffer;

  // Question #3
  cout << "3. Did you like using it right away, or did it grow on you over time?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 3. Did you like using it right away, or did it grow on you over time?" << questionsBuffer << response << questionsBuffer; 

  // Question #4 - Branching Question
  cout << "4. Was it easy to learn and start using? (yes/no): ";
  getline(cin, response); cout << endl;
  
  // Question #5 - Branches of Question #4
  loopFlag = true;
  while (loopFlag == true) 
  {
    if (response == "yes") {
      outfile << "### 4. Was it easy to learn and start using? (yes/no)" << questionsBuffer << response << questionsBuffer;
      cout << "5. What specific features made it beginner-friendly? " << questionsBuffer;
      getline(cin, response); cout << endl;
      outfile << "### 5. What specific features made it beginner-friendly?" << questionsBuffer << response << questionsBuffer;
      loopFlag = false;
    } 
    else if (response == "no") {
      outfile << "### 4. Was it easy to learn and start using? (yes/no)" << questionsBuffer << response << questionsBuffer;
      cout << "5. What made it difficult or unintuitive?" << questionsBuffer;
      getline(cin, response); cout << endl;
      outfile << "### 5. What made it difficult or unintuitive?" << questionsBuffer << response << questionsBuffer;
      loopFlag = false;
    }
    else {
      cout << "Please enter 'yes' or 'no': ";
      getline(cin, response); cout << endl;
    }
  }

  // Question #6
  cout << "6. Does this technology help you in your day-to-day life? If so, elaborate?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 6. Does this technology help you in your day-to-day life? If so, elaborate?" << questionsBuffer << response << questionsBuffer;

  // Question #7
  cout << "7. Is there anything you would personally change about the product?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 7. Is there anything you would personally change about the product?" << questionsBuffer << response << questionsBuffer;

  cout << "Thanks for the information! That will conclude the good technology section of the survey. Let's move on to the next set of questions." << questionsBuffer;
  cout << "----------------------------------------------------------------------------------------------------------" << questionsBuffer;
}

void askBadTechQuestions(ofstream &outfile) {
  cout << "Shifting gears now, let's move on to taling about technology you dislike." << questionsBuffer;
  outfile << "## 👎 Technology You Disike Questions" << questionsBuffer;

  // Question #8
  cout << "8. What is a piece of technology you dislike, and what do you use it for?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 8. What is a piece of technology you dislike, and what do you use it for?" << questionsBuffer << response << questionsBuffer;

  // Question #9
  cout << "9. Did you dislike it immediately, or did your frustration build over time? What caused that shift?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 9. Did you dislike it immediately, or did your frustration build over time? What caused that shift?" << questionsBuffer << response << questionsBuffer;

  // Question #10 - Branching Question
  cout << "10. Was it easy to learn? (yes/no)" << questionsBuffer;
  getline(cin, response); cout << endl;

  // Question #11 - Branches of Question #10
  loopFlag = true;
  while (loopFlag == true)
  {
    if (response == "yes") {
      outfile << "### 10. Was it easy to learn? (yes/no)" << questionsBuffer << response << questionsBuffer;
      cout << "11. If it was easy to use, why did you dislike it?" << questionsBuffer;
      getline(cin, response); cout << endl;
      outfile << "### 11. If it was easy to use, why did you dislike it?" << questionsBuffer << response << questionsBuffer;
      loopFlag = false;
    } 
    else if (response == "no") {
      outfile << "### 10. Was it easy to learn? (yes/no)" << questionsBuffer << response << questionsBuffer;
      cout << "11. What made it confusing or frustrating?" << questionsBuffer;
      getline(cin, response); cout << endl;
      outfile << "### 11. What made it confusing or frustrating?" << questionsBuffer << response << questionsBuffer;
      loopFlag = false;
    }
    else {
      cout << "Please enter 'yes' or 'no': ";
      getline(cin, response); cout << endl;
    }
  }

  // Question #12
  cout << "12. What specific aspects of this technology make it frustrating? (E.g., design, usability, cost, time-consuming tasks)" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 12. What specific aspects of this technology make it frustrating? (E.g., design, usability, cost, time-consuming tasks)" << questionsBuffer << response << questionsBuffer;

  // Question #13
  cout << "13. Does this technology fail to meet your functional goals? What do you wish it did better?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 13. Does this technology fail to meet your functional goals? What do you wish it did better?" << questionsBuffer << response << questionsBuffer;

  // Question #14
  cout << "14. If you could redesign or replace this technology, what changes would you make?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 14. If you could redesign or replace this technology, what changes would you make?" << questionsBuffer << response << questionsBuffer;

  cout << "Thank you for the responses! That should do it for the bad tech section. Just a few more questions left." << questionsBuffer;
  cout << "----------------------------------------------------------------------------------------------------------" << questionsBuffer;
}

void askLearningStyleQuestions(ofstream &outfile) {
  cout << "Lastly, I'd like to know abour your learning style and how you learn new technology" << questionsBuffer;
  outfile << "## 🧠 Learning Style Questions" << questionsBuffer;

  // Question #15
  cout << "15. How do you feel about learning new technology?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 15. How do you feel about learning new technology?" << questionsBuffer << response << questionsBuffer;

  // Question #16
  cout << "16. What motivates you to learn a new tool or technology? (E.g., necessity, curiosity, efficiency)" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 16. What motivates you to learn a new tool or technology? (E.g., necessity, curiosity, efficiency)" << questionsBuffer << response << questionsBuffer;

  // Question #17
  cout << "17. What is a piece of technology you picked up quickly? What made it intuitive?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 17. What is a piece of technology you picked up quickly? What made it intuitive?" << questionsBuffer << response << questionsBuffer;

  // Question #18
  cout << "18. What is a piece of technology you struggled to learn? What made it difficult?" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 18. What is a piece of technology you struggled to learn? What made it difficult?" << questionsBuffer << response << questionsBuffer;

  // Question #19
  cout << "19. How do you prefer to learn new technology? (E.g., tutorials, documentation, trial and error)" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 19. How do you prefer to learn new technology? (E.g., tutorials, documentation, trial and error)" << questionsBuffer << response << questionsBuffer;

  // Question #20
  cout << "20. What would make learning new technology easier for you? (E.g., better tutorials, customization, fewer steps)" << questionsBuffer;
  getline(cin, response); cout << endl;
  outfile << "### 20. What would make learning new technology easier for you? (E.g., better tutorials, customization, fewer steps)" << questionsBuffer << response << questionsBuffer;
}