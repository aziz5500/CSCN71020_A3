#include <stdio.h>
int main(void) 
{
	return 0;
}

char* RockPaperScissorsGame(char* player1, char* player2)
{
	
	if (player1 == "Rock" && player2 == "Paper" || player1 == "Scissors" && player2 == "Rock" || player1 == "Paper" && player2 == "Scissors")
		return "Player2"; //returning the value to Player2
	else if (player1 == "Paper" && player2 == "Rock" || player1 == "Rock" && player2 == "Scissors" || player1 == "Scissors" && player2 == "Paper")
		return "Player1"; //returning the value to Player1
	else if (player1 == "Rock" && player2 == "Rock" || player1 == "Scissors" && player2 == "Scissors" || player1 == "Paper" && player2 == "Paper")
		return "Draw";  //returning the value to Draw
	else
		return "Invalid";
}
