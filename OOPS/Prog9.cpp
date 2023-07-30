#include<iostream>
using namespace std;

class Student {
private:
  string usn;

public:
  Student(string u) : usn(u) {}

  string getUSN(){
    return usn;
  }
};

class Test {
private:
  int scores;

public:
  Test(int s) : scores(s) {}

  int getScores(){
    return scores;
  }
};

class Sports {
private:
  int score;

public:
  Sports(int s) : score(s) {}

  int getScore(){
    return score;
  }
};

class Result : public Student, public Test, public Sports {
public:
  Result(string u, int t, int s) : Student(u), Test(t), Sports(s) {}

  void displayResult() {
    cout << "USN: " << getUSN() << endl;
    cout << "Test Scores: " << getScores() << endl;
    cout << "Sports Score: " << getScore() << endl;
int total = getScores() + getScore();
    cout << "Total Score: " << total << endl;
  }
};

int main() {
  string usn;
  int testScores, sportsScore;

  cout << "Enter USN: ";
  cin >> usn;
  cout << "Enter Test Scores: ";
  cin >> testScores;
  cout << "Enter Sports Score: ";
  cin >> sportsScore;

  Result result(usn, testScores, sportsScore);
  result.displayResult();

  return 0;
}