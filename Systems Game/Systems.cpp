#include <iostream>
#include <cmath>
using namespace std;

int RandomNumberA;
int RandomNumberB;
int RandomNumberC;

int RandomNumberD;
int RandomNumberE;
int RandomNumberF;

bool bCompleteIntroduction = false;
bool bDebugMode = true;
bool bEndlessMode = true;
int EndlessDifficulty = 3;

void PrintIntroduction()
{
  cout << "Hello student, welcome to the math quizzes!\n" << "You will be solving for 3 variables that add up to a number and those 3 numbers can also be used to multiply to another number. There will be additional equations that will help.";
}

int AddVariables(int GuessA, int GuessB, int GuessC)
{
  return GuessA + GuessB + GuessC; 
}

int MultiplyVariables(int GuessA, int GuessB, int GuessC)
{
  return GuessA - GuessB + GuessC; 
}

int RandomEquationA(int X, int Y, int Z)
{
  int Answer = 0;
  string a = to_string(RandomNumberD);
  string b = to_string(RandomNumberE);
  string c = to_string(RandomNumberF);
  switch (RandomNumberA)
  {
    case 1:
    Answer = (RandomNumberD*X) - (RandomNumberE*Y) + (RandomNumberF*Z);
    cout << a << "x - " << b << "y + "<< c <<"z = " << Answer << "\n\n";
    break;
    case 2:
    Answer = (RandomNumberD*X) - (RandomNumberE*Y) - (RandomNumberF*Z);
    cout << a << "x - " << b << "y - " << c << "z = " << Answer << "\n\n";
    break;
    case 3:
    Answer = -(RandomNumberD*X) + (RandomNumberE*Y) - (RandomNumberF*Z);
    cout << a <<"x + " << b <<"y - " << c <<"z = " << Answer << "\n\n";
    break;
    case 4:
    Answer = (RandomNumberD*X) + (RandomNumberE*Y) + (RandomNumberF*Z);
    cout << a <<"x + " << b << "y + " << c << "z = " << Answer << "\n\n";
    break;
    default:
    Answer = (RandomNumberD*X) - (RandomNumberE*Y) + (RandomNumberF*Z);
    cout << a << "x - " << b << "y - " << c << "z = " << Answer << "\n\n";
    break;
  }
  return Answer;
}
int RandomEquationB(int X, int Y, int Z)
{
  int Answer = 0;
    string a = to_string(RandomNumberD);
  string b = to_string(RandomNumberE);
  string c = to_string(RandomNumberF);
  switch (RandomNumberB)
  {
   case 1:
    Answer = (RandomNumberD*X) - (RandomNumberE*Y) + (RandomNumberF*Z);
    cout << a << "x - " << b << "y + "<< c <<"z = " << Answer << "\n\n";
    break;
    case 2:
    Answer = (RandomNumberD*X) - (RandomNumberE*Y) - (RandomNumberF*Z);
    cout << a << "x - " << b << "y - " << c << "z = " << Answer << "\n\n";
    break;
    case 3:
    Answer = -(RandomNumberD*X) + (RandomNumberE*Y) - (RandomNumberF*Z);
    cout << a <<"x + " << b <<"y - " << c <<"z = " << Answer << "\n\n";
    break;
    case 4:
    Answer = (RandomNumberD*X) + (RandomNumberE*Y) + (RandomNumberF*Z);
    cout << a <<"x + " << b << "y + " << c << "z = " << Answer << "\n\n";
    break;
    default:
    Answer = (RandomNumberD*X) - (RandomNumberE*Y) + (RandomNumberF*Z);
    cout << a << "x - " << b << "y - " << c << "z = " << Answer << "\n\n";
    break;
  }
  return Answer;
}

int RandomEquationC(int X, int Y, int Z)
{

  int Answer = 0;
    string a = to_string(RandomNumberD);
  string b = to_string(RandomNumberE);
  string c = to_string(RandomNumberF);
  switch (RandomNumberC)
  {
   case 1:
    Answer = (RandomNumberD*X) - (RandomNumberE*Y) + (RandomNumberF*Z);
    cout << a << "x - " << b << "y + "<< c <<"z = " << Answer << "\n\n";
    break;
    case 2:
    Answer = (RandomNumberD*X) - (RandomNumberE*Y) - (RandomNumberF*Z);
    cout << a << "x - " << b << " y - " << c << "z = " << Answer << "\n\n";
    break;
    case 3:
    Answer = -(RandomNumberD*X) + (RandomNumberE*Y) - (RandomNumberF*Z);
    cout << a <<"x + " << b <<"y - " << c <<"z = " << Answer << "\n\n";
    break;
    case 4:
    Answer = (RandomNumberD*X) + (RandomNumberE*Y) + (RandomNumberF*Z);
    cout << a <<"x + " << b << "y + " << c << "z = " << Answer << "\n\n";
    break;
    default:
    Answer = (RandomNumberD*X) - (RandomNumberE*Y) + (RandomNumberF*Z);
    cout << a << "x - " << b << "y - " << c << "z = " << Answer << "\n\n";
    break;
  }
  return Answer;
}

bool PlayGame(int Difficulty)
{
  RandomNumberA = rand() % 5;
  int DifficultyScaling;
  if (bEndlessMode)
  {
    DifficultyScaling = EndlessDifficulty;
  }
  else
  {
      DifficultyScaling = pow(3,Difficulty) + 1;
  }
  int CodeA = rand() % (DifficultyScaling * 2) - DifficultyScaling;
  
  int CodeC = rand() % (DifficultyScaling * 2) - DifficultyScaling;

  int CodeB = rand() % (DifficultyScaling * 2) - DifficultyScaling;
  RandomNumberD = rand() % ((DifficultyScaling + 2) * 2) - (DifficultyScaling + 2);
  RandomNumberE = rand() % ((DifficultyScaling + 2) * 2) - (DifficultyScaling + 2);
  RandomNumberF = rand() % ((DifficultyScaling + 2) * 2) - (DifficultyScaling + 2);
  const int CodeSumA = RandomEquationA(CodeA, CodeB, CodeC);
    RandomNumberD = rand() % ((DifficultyScaling + 2) * 2) - (DifficultyScaling + 2);
  RandomNumberE = rand() % ((DifficultyScaling + 2) * 2) - (DifficultyScaling + 2);
  RandomNumberF = rand() % ((DifficultyScaling + 2) * 2) - (DifficultyScaling + 2);
  const int CodeSumB = RandomEquationB(CodeA, CodeB, CodeC);
  int GuessA = 0, GuessB = 0, GuessC = 0;
  int GuessSumA = 0, GuessSumB = 0;
  
  int RandomGuessSum;
  int RandomSum;
    RandomNumberD = rand() % ((DifficultyScaling + 2) * 2) - (DifficultyScaling + 2);
  RandomNumberE = rand() % ((DifficultyScaling + 2) * 2) - (DifficultyScaling + 2);
  RandomNumberF = rand() % ((DifficultyScaling + 2) * 2) - (DifficultyScaling + 2);
  RandomSum = RandomEquationC(CodeA, CodeB, CodeC);
  if (bDebugMode == true)
  {
    cout << "[DEBUG] Codes are: " << CodeA << " " << CodeB << " " << CodeC << "\n\n" ;
  }
  cin >> GuessA >> GuessB >> GuessC;
  cout << endl;
  GuessSumA = RandomEquationA(GuessA, GuessB, GuessC);
  GuessSumB = RandomEquationB(GuessA, GuessB, GuessC);
  RandomGuessSum = RandomEquationC(GuessA, GuessB, GuessC);
  return (GuessSumA == CodeSumA && GuessSumB == CodeSumB);
}

int main()
{
  int MaxDifficulty = 10;
  if (bEndlessMode)
  {
    MaxDifficulty = 2147483647;
  }
  else
  {
    MaxDifficulty = 10;
  }
  int Difficulty = 0;
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
