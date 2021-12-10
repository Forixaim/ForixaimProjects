import java.util.*;

class Main {
  public static boolean PlayGame(int Difficulty)
  {
    Random RNG = new Random();
    int DifficultyScaling = 3 * Difficulty + 1;
    int CodeA = RNG.nextInt() % DifficultyScaling;
    if (CodeA < 0)
    {
      CodeA = CodeA + (CodeA*-2);
    }
    int CodeB = RNG.nextInt() % DifficultyScaling;
    if (CodeB < 0)
    {
      CodeB = CodeB + (CodeB*-2);
    }
    int CodeC = RNG.nextInt() % DifficultyScaling;
    if (CodeC < 0)
    {
      CodeC = CodeC + (CodeC*-2);
    }
    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB *CodeC;
    Scanner input = new Scanner(System.in);
    System.out.println("What are numbers that add up to:" + CodeSum + " and multiply up to: " + CodeProduct);
    int GuessA = input.nextInt();
    int GuessB = input.nextInt();
    int GuessC = input.nextInt();
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    if (GuessProduct == CodeProduct && GuessSum == CodeSum)
    {
      return true;
    }
    else
    {
      return false;
    }
    
  }
  public static void main(String[] args) {

    int Difficulty = 1;
    int MaxDifficulty = 6;
        System.out.println("Hello student");

    while (Difficulty <= MaxDifficulty)
    {
      boolean bGameComplete = PlayGame(Difficulty);
      if (bGameComplete == true)
      {
        System.out.println("Nice Let's get Harder");
        ++Difficulty;
      }
      else
      {
        System.out.println("Oh no this won't do.");
      }
    }
    System.out.println("Great Job");
  }
}
