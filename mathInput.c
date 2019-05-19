//*************************************************
//==Written By: Dylan Henry                      ==
//==Date Written: 5/16/19                        ==
//==Purpose: Solve some dumb math thing			 ==
//*************************************************
#include <stdio.h>
#include <stdlib.h>
#define PAUSE system,("pause")
#define TAXRATE .065
#define CLS system("cls")

main(){
	// Declare Variables Here
	float money = 0.0;
	float cost = 0.0;
	
	// Input from the user here
		printf("How much money is in your wallet");
		scanf("%f", &money);
		printf("\nYou currently have $.2f in your wallet.\n", money);
	
	// Do stuff like math here
		//PENS
		cost = 1.98 + 2;
		cost = cost + cost * TAXRATE;
		money -= cost; // or money = money - cost
		printf("Balance after you buy pens");
		printf("\nYou currently have $.2f in your wallet.\n", money);

		// Give money to the person on the street 
		money -= 2;
		printf("Balance after you give the person money");
		printf("\nYou currently have $%.2 in your wallet.\n", money);

		
		// Money grows three times
		money = money * 3;// or money *= 3;
		printf("Balance after money triples");
		printf("\nYou currently have $.2f in your wallet.\n", money);
		
		// Goes to wendys
		cost = 8.99;
		cost = cost + cost * TAXRATE;
		money -= cost;
		printf("Balance after wendy's.......\n");
		printf("\nYou currently have $%.2 in your wallet.\n", money);
		
		// Bet on horse
		money = money * 2; 
		printf("Balance after horse race");
		printf("\nYou currently have $%.2 in your wallet.\n", money);

		// Maybe display output stuff here
	
		PAUSE;
}// end of main
