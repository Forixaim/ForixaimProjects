#include <iostream>
#include <cmath>

import random
import math

"""
using namespace std;
bool bCompleteIntroduction = false;
void PrintIntroduction()
{
  cout << "Hello student, welcome to the math quizzes!\n\n";
}
"""
print("Hello student, welcome to the math quizzes!\n\n")

"""
int AddVariables(int GuessA, int GuessB, int GuessC)
{
  return GuessA + GuessB + GuessC; 
}
"""
def AddVar(*all):
  return sum(all)

"""
int MultiplyVariables(int GuessA, int GuessB, int GuessC)
{
  return GuessA * GuessB * GuessC; 
}
"""
def MultVar(*all):
  lnall=[]
  for i in all:
    lnall.append(math.log(i))
    #lol
  return math.exp(sum(lnall))
#lol (ln(Mult(list))=Sum(ln(list))) but this is inaccurate so...
def MultVar(*all):
  prod=1
  for i in all:
    prod*=i
  return prod
"""
bool PlayGame(int Difficulty)
{
  const int DifficultyScaling = pow(3,Difficulty) + 1;
  const int CodeA = rand() % DifficultyScaling;
  const int CodeB = rand() % DifficultyScaling;
  const int CodeC = rand() % DifficultyScaling;
  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;
  int GuessA = 0, GuessB = 0, GuessC = 0;
  int GuessSum = 0, GuessProduct = 0;
  cout << "These numbers add up to: " << CodeSum << "\n and multiply to: " << CodeProduct << endl << endl;
  cin >> GuessA >> GuessB >> GuessC;
  cout << "\n";
  GuessSum = AddVariables(GuessA, GuessB, GuessC);
  GuessProduct = MultiplyVariables(GuessA, GuessB, GuessC);
  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    return true;
  }
  else
  {
    return false;
  }
}
"""
def PlayGame(Difficulty):
  DiffScale=pow(3,Difficulty)+1
  TrueA, TrueB, TrueC=round(random.random()*DiffScale),round(random.random()*DiffScale),round(random.random()*DiffScale)
  TrueSum=AddVar(TrueA,TrueB,TrueC)
  TrueProd=MultVar(TrueA,TrueB,TrueC)
  #unlike cpp, random here gives random float from 0 to 1
  print(f"Three numbers add up to: {TrueSum} \nand multiply to: {TrueProd}")
  GuessA, GuessB, GuessC = int(input("A= ")), int(input("B= ")), int(input("C= "))
  print("\n")
  GuessSum=AddVar(GuessA,GuessB,GuessC)
  GuessProd=MultVar(GuessA,GuessB,GuessC)
  if GuessSum==TrueSum and GuessProd==TrueProd:
    return True
  else:
    return False
  return

"""
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
"""
def main():
  MaxDifficulty = 6
  Difficulty = 1
  while Difficulty <= MaxDifficulty:
    completed = PlayGame(Difficulty)
    if completed and Difficulty < MaxDifficulty:
      print("Nice work! Let's make this a little tougher.\n\n")
      Difficulty+=1
    elif completed:
      print("Good job!\n\n")
    else:
      print("No, no, this won't do. Try a different one.\n\n")
  print("QUiz Completed.")
  return None
if __name__ == "__main__":
  main()
