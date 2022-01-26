// Libraries
#include <iostream>
#include <cmath>
using namespace std;

// Universal Variables
int DifficultyScaling;
int RandomNumber[3];
int RandomMultiplier[3];
int EndlessDifficulty = 3;

// Solutions
int SolutionArray1[3] = {0,0,0};
int SolutionArray2[3] = {0,0,0};
int SolutionArray3[3] = {0,0,0};

// Booleans
bool bCompleteIntroduction = false;
bool bDebugMode = true;
bool bEndlessMode = true;

void PrintIntroduction()
{
  cout << "Hello student, welcome to the math quizzes!\n" << "You will be solving for 3 variables that add up to a number and those 3 numbers can also be used to multiply to another number. There will be additional equations that will help.";
}

int RandomEquationA(int X, int Y, int Z) // Clean
{
  int Answer = 0;
  string a[3] = {to_string(RandomMultiplier[0]), to_string(RandomMultiplier[1]), to_string(RandomMultiplier[2])};
  switch (RandomNumber[0])
  {
    case 1:
    Answer = (RandomMultiplier[0]*X) - (RandomMultiplier[1]*Y) + (RandomMultiplier[2]*Z);
    cout << a[0] << "x - " << a[1] << "y + "<< a[2] <<"z = " << Answer << "\n\n";
    break;
    case 2:
    Answer = (RandomMultiplier[0]*X) - (RandomMultiplier[1]*Y) - (RandomMultiplier[2]*Z);
    cout << a[0] << "x - " << a[1] << "y - " << a[2] << "z = " << Answer << "\n\n";
    break;
    case 3:
    Answer = -(RandomMultiplier[0]*X) + (RandomMultiplier[1]*Y) - (RandomMultiplier[2]*Z);
    cout << a[0] <<"x + " << a[1] <<"y - " << a[2] <<"z = " << Answer << "\n\n";
    break;
    case 4:
    Answer = (RandomMultiplier[0]*X) + (RandomMultiplier[1]*Y) + (RandomMultiplier[2]*Z);
    cout << a[0] <<"x + " << a[1] << "y + " << a[2] << "z = " << Answer << "\n\n";
    break;
    default:
    Answer = (RandomMultiplier[0]*X) - (RandomMultiplier[1]*Y) + (RandomMultiplier[2]*Z);
    cout << a[0] << "x - " << a[1] << "y - " << a[2] << "z = " << Answer << "\n\n";
    break;
  }
  return Answer;
}
int RandomEquationB(int X, int Y, int Z) // Cleaned Up
{
  int Answer = 0;

    string a[3] = {to_string(RandomMultiplier[0]), to_string(RandomMultiplier[1]), to_string(RandomMultiplier[2])};
  switch (RandomNumber[1])
  {
   case 1:
    Answer = (RandomMultiplier[0]*X) - (RandomMultiplier[1]*Y) + (RandomMultiplier[2]*Z);
    cout << a[0] << "x - " << a[1] << "y + "<< a[2] <<"z = " << Answer << "\n\n";
    break;
    case 2:
    Answer = (RandomMultiplier[0]*X) - (RandomMultiplier[1]*Y) - (RandomMultiplier[2]*Z);
    cout << a[0] << "x - " << a[1] << "y - " << a[2] << "z = " << Answer << "\n\n";
    break;
    case 3:
    Answer = -(RandomMultiplier[0]*X) + (RandomMultiplier[1]*Y) - (RandomMultiplier[2]*Z);
    cout << a[0] <<"x + " << a[1] <<"y - " << a[2] <<"z = " << Answer << "\n\n";
    break;
    case 4:
    Answer = (RandomMultiplier[0]*X) + (RandomMultiplier[1]*Y) + (RandomMultiplier[2]*Z);
    cout << a[0] <<"x + " << a[1] << "y + " << a[2] << "z = " << Answer << "\n\n";
    break;
    default:
    Answer =(RandomMultiplier[0]*X) - (RandomMultiplier[1]*Y) + (RandomMultiplier[2]*Z);
    cout << a[0] << "x - " << a[1] << "y - " << a[2] << "z = " << Answer << "\n\n";
    break;
  }
  return Answer;
}

int RandomEquationC(int X, int Y, int Z) // Spotless!
{

  int Answer = 0;
  string a[3] = {to_string(RandomMultiplier[0]), to_string(RandomMultiplier[1]), to_string(RandomMultiplier[2])};
  switch (RandomNumber[2])
  {
   case 1:
    Answer = (RandomMultiplier[0]*X) - (RandomMultiplier[1]*Y) + (RandomMultiplier[2]*Z);
    cout << a[0] << "x - " << a[1] << "y + "<< a[2] <<"z = " << Answer << "\n\n";
    break;
    case 2:
    Answer = (RandomMultiplier[0]*X) - (RandomMultiplier[1]*Y) - (RandomMultiplier[2]*Z);
    cout << a[0] << "x - " << a[1] << " y - " << a[2] << "z = " << Answer << "\n\n";
    break;
    case 3:
    Answer = -(RandomMultiplier[0]*X) + (RandomMultiplier[1]*Y) - (RandomMultiplier[2]*Z);
    cout << a[0] <<"x + " << a[1] <<"y - " << a[2] <<"z = " << Answer << "\n\n";
    break;
    case 4:
    Answer = (RandomMultiplier[0]*X) + (RandomMultiplier[1]*Y) + (RandomMultiplier[2]*Z);
    cout << a[0] <<"x + " << a[1] << "y + " << a[2] << "z = " << Answer << "\n\n";
    break;
    default:
    Answer = (RandomMultiplier[0]*X) - (RandomMultiplier[1]*Y) + (RandomMultiplier[2]*Z);
    cout << a[0] << "x - " << a[1] << "y - " << a[2] << "z = " << Answer << "\n\n";
    break;
  }
  return Answer;
}

int CheckAnswer1(int X, int Y, int Z) // Cleaner
{
  int Answer = 0;
  switch (RandomNumber[0])
  {
    case 1:
    Answer = (SolutionArray1[0]*X) - (SolutionArray1[1]*Y) + (SolutionArray1[2]*Z);
    break;
    case 2:
    Answer = (SolutionArray1[0]*X) - (SolutionArray1[1]*Y) - (SolutionArray1[2]*Z);
    break;
    case 3:
    Answer = -(SolutionArray1[0]*X) + (SolutionArray1[1]*Y) - (SolutionArray1[2]*Z);
    break;
    case 4:
    Answer = (SolutionArray1[0]*X) + (SolutionArray1[1]*Y) + (SolutionArray1[2]*Z);
    break;
    default:
    Answer = (SolutionArray1[0]*X) - (SolutionArray1[1]*Y) + (SolutionArray1[2]*Z);
    break;
  }
  return Answer;
}

int CheckAnswer2(int X, int Y, int Z) // Cleaner
{
  int Answer = 0;
  switch (RandomNumber[0])
  {
    case 1:
    Answer = (SolutionArray2[0]*X) - (SolutionArray2[1]*Y) + (SolutionArray2[2]*Z);
    break;
    case 2:
    Answer = (SolutionArray2[0]*X) - (SolutionArray2[1]*Y) - (SolutionArray2[2]*Z);
    break;
    case 3:
    Answer = -(SolutionArray2[0]*X) + (SolutionArray2[1]*Y) - (SolutionArray2[2]*Z);
    break;
    case 4:
    Answer = (SolutionArray2[0]*X) + (SolutionArray2[1]*Y) + (SolutionArray2[2]*Z);
    break;
    default:
    Answer = (SolutionArray2[0]*X) - (SolutionArray2[1]*Y) + (SolutionArray2[2]*Z);
    break;
  }
  return Answer;
}

int CheckAnswer3(int X, int Y, int Z) // Cleaner
{
  int Answer = 0;
  switch (RandomNumber[0])
  {
    case 1:
    Answer = (SolutionArray3[0]*X) - (SolutionArray3[1]*Y) + (SolutionArray3[2]*Z);
    break;
    case 2:
    Answer = (SolutionArray3[0]*X) - (SolutionArray3[1]*Y) - (SolutionArray3[2]*Z);
    break;
    case 3:
    Answer = -(SolutionArray3[0]*X) + (SolutionArray3[1]*Y) - (SolutionArray3[2]*Z);
    break;
    case 4:
    Answer = (SolutionArray3[0]*X) + (SolutionArray3[1]*Y) + (SolutionArray3[2]*Z);
    break;
    default:
    Answer = (SolutionArray3[0]*X) - (SolutionArray3[1]*Y) + (SolutionArray3[2]*Z);
    break;
  }
  return Answer;
}

void RandomizeMultipliers()
{
  for (int i = 0; i < 3; i++)
  {
    RandomMultiplier[i] = rand() % ((DifficultyScaling + 2) * 2) - (DifficultyScaling + 2);
  }
}

bool PlayGame(int Difficulty)
{
  for (int i = 0; i < 3; i++)
  {
    RandomNumber[i] = rand() % ((DifficultyScaling + 2) * 2) - (DifficultyScaling + 2);
  }
  if (bEndlessMode)
  {
    DifficultyScaling = EndlessDifficulty;
  }
  else
  {
    DifficultyScaling = pow(3,Difficulty) + 1;
  }
  int Codes[3] = {rand() % (DifficultyScaling * 2) - DifficultyScaling, rand() % (DifficultyScaling * 2) - DifficultyScaling, rand() % (DifficultyScaling * 2) - DifficultyScaling};
  RandomizeMultipliers();
  for (int i = 0; i < 3; i++)
  {
    SolutionArray1[i] = RandomMultiplier[i];
  }
  const int CodeSumA = RandomEquationA(Codes[0], Codes[1], Codes[2]);
  RandomizeMultipliers();
    for (int i = 0; i < 3; i++)
  {
    SolutionArray2[i] = RandomMultiplier[i];
  }
  const int CodeSumB = RandomEquationB(Codes[0], Codes[1], Codes[2]);
  int GuessA = 0, GuessB = 0, GuessC = 0;
  int RandomSum;
  RandomizeMultipliers();

  for (int i = 0; i < 3; i++)
  {
    SolutionArray3[i] = RandomMultiplier[i];
  }
  RandomSum = RandomEquationC(Codes[0], Codes[1], Codes[2]);

  if (bDebugMode == true)
  {
    cout << "[DEBUG] Codes are: " << Codes[0] << " " << Codes[1] << " " << Codes[2] << "\n\n" ;
  }
  cin >> GuessA >> GuessB >> GuessC;
  cout << endl;
  int GuessSums[3] = {CheckAnswer1(GuessA, GuessB, GuessC), CheckAnswer2(GuessA, GuessB, GuessC), CheckAnswer3(GuessA, GuessB, GuessC)};
  for (int i = 0; i < 3; i++)
  {
    cout << "Answer " << i+1 << ": " << GuessSums[i] << endl << endl;
  }
  return (GuessSums[0] == CodeSumA && GuessSums[1] == CodeSumB && GuessSums[2] == RandomSum);
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
      if (bEndlessMode)
      {
        cout << "Keep going! \n\n";
      }
      else
      {
      cout << "Nice work! Let's get a little tougher.\n\n";
      ++Difficulty;
      }
    }
    else
    {
      cout << "No, no, this won't do. Try a different one.\n\n";
    }
  }
  cout << "Quiz Completed.";
  return 0;
}
