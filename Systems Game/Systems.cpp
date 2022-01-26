// Libraries
#include <iostream>
#include <cmath>
using namespace std;

// Universal Variables
int DifficultyScaling = 0;
int RandomNumber[3];
int RandomMultiplier[3];
int EndlessDifficulty = 3;
int CheckNumber = 0;

// Solutions & Other Arrays

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
  // Variables and Arrays
  int Codes[3];
  int CodeSum[3];
  int Guess[3];
  int GuessSums[3];
  // Check if Endless Mode is Enabled
  if (bEndlessMode)
  {
    DifficultyScaling = EndlessDifficulty;
  }
  else
  {
    DifficultyScaling = pow(3,Difficulty) + 1;
  }
  // Randomizes the Array of 3 Random Numbers as well as codes.
  for (int i = 0; i < 3; i++)
  {
    RandomNumber[i] = rand() % ((DifficultyScaling + 2) * 2) - (DifficultyScaling + 2);
    Codes[i] = rand() % (DifficultyScaling * 2) - DifficultyScaling;
  }
  for (int i = 0; i < 3; i++)
  {
    CheckNumber = i+1;
    RandomizeMultipliers();
    CodeSum[i] = RandomEquationA(Codes[0], Codes[1],  Codes[2]);
    switch (CheckNumber)
    {
      case 1:
        for (int i = 0; i < 3; i++)
        {
          SolutionArray1[i] = RandomMultiplier[i];
        }
        break;
      case 2:
        for (int i = 0; i < 3; i++)
        {
          SolutionArray2[i] = RandomMultiplier[i];
        }
        break;
      default:
        for (int i = 0; i < 3; i++)
        {
          SolutionArray3[i] = RandomMultiplier[i];
        }
        break;
    }
  } 
  if (bDebugMode == true)
  {
    cout << "[DEBUG] Codes are: " << Codes[0] << " " << Codes[1] << " " << Codes[2] << "\n\n" ;
  }
  cin >> Guess[0] >> Guess[1] >> Guess[2];
  cout << endl;
  //Loop for checking answers.
  for (int i = 0; i < 3; i++)
  {
    CheckNumber = i+1;
    switch (CheckNumber)
    {
      case 1:
        GuessSums[i] = CheckAnswer1(Guess[0], Guess[1], Guess[2]);
      break;
      case 2:
        GuessSums[i] = CheckAnswer2(Guess[0], Guess[1], Guess[2]);
      break;
      default:
        GuessSums[i] = CheckAnswer3(Guess[0], Guess[1], Guess[2]);
      break;
    }
  }
  
  for (int i = 0; i < 3; i++)
  {
    cout << "Answer " << i+1 << ": " << GuessSums[i] << endl << endl;
  }
  return (GuessSums[0] == CodeSum[0] && GuessSums[1] == CodeSum[1] && GuessSums[2] == CodeSum[2]);
}

int main()
{
  int MaxDifficulty;
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
