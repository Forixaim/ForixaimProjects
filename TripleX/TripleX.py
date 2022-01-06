#Thanks to June Yang (3la5t1c81rdy) for the contribution


import random
import math

print("Hello student, welcome to the math quizzes!\n\n")


def AddVar(*all):
  return sum(all)


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
  print("Quiz Completed.")
  return None
if __name__ == "__main__":
  main()
