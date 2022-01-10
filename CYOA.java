package main;
import java.util.Scanner;


public class Main {
	public static void main(String[] args)
	{
		int decisions = 0;
		int reputation = 3;
		boolean decisionComplete = false;
		Scanner userInput = new Scanner(System.in);
		while (true)
		{
			System.out.println("You were walking down on a long path on Christmas Day, you spot a child working on a snowman.");
			System.out.println("What would you do?");
			System.out.print("1: Walk past it. \n2: Help the child. \n3: Advise the child. \n");
			while (decisionComplete == false)
			{
				decisions = userInput.nextInt();
				switch (decisions)
				{
				case 1:
					System.out.println("You have walked past the child not knowing anything.");
					decisionComplete = true;
					break;
				case 2:
					System.out.println("You have attempted to help the child only to make the snowman worse.");
					decisionComplete = true;
					--reputation;
					break;
				case 3:
					System.out.println("You have advised the child on how to build the snowman, the child seems happy.");
					decisionComplete = true;
					++reputation;
					break;
				default:
					System.out.println("This isn't a valid answer, type again.");
					break;
				}
				decisions = 0;
			}
			decisionComplete = false;
			if (reputation >= 4)
			{
				System.out.println("The child was realtively happy as you continued your stroll down. \nYou happily encountered an old couple who were walking alongside you. \nDue to your good deeds they decided to strike up a conversation.");
				System.out.println("What would you do?");
				System.out.print("1: Say hello and leave. \n2: Stop by and strike a conversation. \n");
				while (decisionComplete == false)
				{
					decisions = userInput.nextInt();
					switch (decisions)
					{
					case 1:
						System.out.println("You said hello as well as you were additionally very busy so they obliged and and kindly left.");
						decisionComplete = true;
						break;
					case 2:
						System.out.println("You stopped by and struck a conversation, the conversation got extremely lively as you went through of all the experiences as a child, how your motives is to make the world a better place.");
						decisionComplete = true;
						++reputation;
						break;
					default:
						System.out.println("This isn't a valid answer, type again.");
						break;
					}
					decisions = 0;
				}
				decisionComplete = false;
			}
			System.out.println("You managed to walk home and decided to ask a question.");
			System.out.print("1: What's in store for Christmas? \n2: How are the two dogs? \n3: What are we having for dinner? \n");
			while (decisionComplete == false)
			{
				decisions = userInput.nextInt();
				switch (decisions)
				{
				case 1:
					System.out.println("You asked whats in store for Christmas, everyone in your household laughed and said, well it's a surprise!");
					decisionComplete = true;
					--reputation;
					break;
				case 2:
					System.out.println("You asked how are the dogs and they responded, they are doing great and very lively.");
					decisionComplete = true;
					++reputation;
					break;
				case 3:
					System.out.println("You asked what's for dinner and they responded with a massive feast with an all you can eat.");
					decisionComplete = true;
					break;
				default:
					System.out.println("This isn't a valid answer, type again.");
					break;
				}
				decisions = 0;
			}
			decisionComplete = false;
			System.out.println("A day has passed and it's time for your christmas gift to open.");
			switch (reputation)
			{
			case 1:
				System.out.println("You got some pringles pizza.");
				break;
			case 2:
				System.out.println("You got a rather small plushie.");
				break;
			case 3:
				System.out.println("You got an anime figurine of your favorite character.");
				break;
			case 4:
				System.out.println("You got a LEGO Millenium Falcon set.");
				break;
			case 5:
				System.out.println("You got a Nintendo Switch OLED.");
				break;
			case 6:
				System.out.println("You got an extremely strong PC completed with an AMD Ryzen 9 5950X and GeForce RTX 3090.");
				break;
			}
			System.out.println("\nPlay Again?");
			System.out.println("Type 1 for yes, any other character for no.");
			switch (decisions)
			{
			case 1:
				System.out.println("Let's do it again.");
			default:
				System.out.println("Have a good one!");
				System.exit(reputation);
			}
		}
		
	}
}