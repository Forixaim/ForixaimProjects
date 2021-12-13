#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool bCompleteIntroduction = false;

void PrintIntroduction()
{
  printf("Hello student, welcome to the math quizzes!\n\n");
}

int AddVariables(int GuessA, int GuessB, int GuessC)
{
  return GuessA + GuessB + GuessC; 
}

int MultiplyVariables(int GuessA, int GuessB, int GuessC)
{
  return GuessA * GuessB * GuessC; 
}

bool PlayGame(int Difficulty)
{
  const int DifficultyScaling = pow(3,Difficulty) + 1;
  if (Difficulty <= 1)
  {
      PrintIntroduction();
  }
  const int CodeA = rand() % DifficultyScaling;
  const int CodeB = rand() % DifficultyScaling;
  const int CodeC = rand() % DifficultyScaling;
  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;
  int GuessA = 0, GuessB = 0, GuessC = 0;
  int GuessSum = 0, GuessProduct = 0;
  printf("These numbers add up to: %d", CodeSum);
  printf(" and multiply to: %d\n", CodeProduct);
  scanf("%d", &GuessA); 
  scanf("%d", &GuessB); 
  scanf("%d", &GuessC); 
  GuessSum = AddVariables(GuessA, GuessB, GuessC);
  GuessProduct = MultiplyVariables(GuessA, GuessB, GuessC);
  return (GuessSum == CodeSum && GuessProduct == CodeProduct);
}

int main()
{
  const int MaxDifficulty = 6;
  int Difficulty = 1;
  while (Difficulty <= MaxDifficulty)
  {
    bool bCompletedGame = PlayGame(Difficulty);
    if (bCompletedGame == true)
    {
      printf("Nice work! Let's get a little tougher.\n\n");
      ++Difficulty;
    }
    else
    {
      printf("No, no, this won't do. Try a different one.\n\n");
    }
  }
  printf("Quiz Completed.");
  return 0;
}
