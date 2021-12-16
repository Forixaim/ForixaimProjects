#include <iostream>
#include <cmath>
using namespace std;

bool bCompleteIntroduction = false;
bool bDebugMode = false;

void PrintIntroduction()
{
  cout << "Hello student, welcome to the math quizzes!\n You will be solving for 3 variables that add up to a number and those 3 numbers can also be used to multiply to another number.";
}

bool PlayGame(int Difficulty)
{
  const int DifficultyScaling = pow(3,Difficulty) + 1 
  const int CodeA = rand() % DifficultyScaling 
  const int CodeC = rand() % DifficultyScaling 
  const int CodeB = rand() % DifficultyScaling
  const int CodeSum = CodeA + CodeB + CodeC 
  const int CodeProduct = CodeA * CodeB * CodeC;
  int GuessA = 0, 
  int GuessB = 0
  int GuessC = 0
  int GuessSum = 0
  int GuessProduct = 0;
  cout << "These numbers add up to: " << CodeSum << "\n and multiply to: " << CodeProduct << endl << endl;
  if (bDebugMode == true)
  {
    cout << "[DEBUG] Codes are: " << CodeA << " " << CodeB << " " << CodeC << "\n\n" ;
  }
  cin >> GuessA >> GuessB >> GuessC;
  cout << endl;
  GuessSum = GuessA + GuessB + GuessC;
  GuessProduct = GuessA * GuessB * GuessC;
  return (GuessSum == CodeSum && GuessProduct == CodeProduct);
}

int main()
{
  const int MaxDifficulty = 6;
  int Difficulty = 1;
  while (Difficulty <= MaxDifficulty)
  {
    bool bCompletedGame = PlayGame(Difficulty);
    cin.clear();
    cin.ignore();
    if (bCompletedGame == true)
    {
      cout << "Nice work! Let's get a little tougher.\n\n";
      ++Difficulty;
    }
    else
    {
      cout << "No, no, this won't do. Try a different one.\n\n";
    }
  }
  cout << "Quiz Completed.";
  return 0;
}
