/* player vs. computer rock paper scissors */
#include <stdio.h>

int main() {
	
	int i;
	for(i = 0; i < 50; i++)
		printf("\n");
	
	printf("===================\n");
	printf("Rock Paper Scissors\n");
	printf("Player vs. Computer\n");
	printf("===================\n");
	printf("1=rock 2=scissors 3=paper\n");
	
	// wins, losses, ties
	int wins, losses, ties;
	wins = losses = ties = 0;
	
	while(1) {
	
		// set random seed
		srand(time(NULL));
		int pMove = -1, cMove = rand() % 3 + 1;
		
		printf("\nEnter your move: ");
		scanf("%d", &pMove);
	
		if(pMove != 1 && pMove != 2 && pMove != 3) {
			printf("Invalid input.\n");
			break;
		}
		
		printf("COMPUTER %s <=> %s YOU\n",
			cMove == 1 ? "rock" : (cMove == 2 ? "scissors" : "paper"),
			pMove == 1 ? "rock" : (pMove == 2 ? "scissors" : "paper")
		);
		
		// 1 = rock, 2 = scissors, 3 = paper
		if(pMove == cMove) {
			printf("Tie!\n");
			ties++;
		} else if(
			(pMove == 1 && cMove == 2) ||
			(pMove == 2 && cMove == 3) ||
			(pMove == 3 && cMove == 1)
		) {
			printf("You win!\n");
			wins++;
		} else {
			printf("Computer wins!\n");
			losses++;
		}
		
	}

	printf("%d wins, %d losses, %d ties. You %s!\n",
		wins, losses, ties,
		wins > losses ? "win" : wins == losses ? "tie" : "lose" 
	);
	printf("Exiting...\n\n");
	return 0;

}
