//Program Name: Problem 1: Football Score Possibilities
//Brief Description: This program produces all possible combinations of scoring plays given by a NFL score from the user. The program keeps going until the player puts in a input of 0 or 1.
//Input: The input is a valid intger value from the user.
//Ouput: The ouput will be all possible combinations of scorinh plays as long as the NFL score input is not 0 or 1. If the input is 0 or 1, the progrma will ends as result.
//All collaborators: None
//Other Sources:Github Copilot and ChatGPT BroCode from Youtube, Stack Overflow, and GeekforGeeks
//Author: Ryan Antony Pereira
//Creation Date: 3/20/2025
//Last Modified Date: 3/23/2025

//GitHub Copilot was used to help code in the sense, when I was writing my code, it woudl help finsish or complete it. A lot of the comments were initally done by Github Copilot. I went back and rewrote all comments for every single line in the program.
//ChaTtGPT was used in code error resolve, if I had any error in the coding process, I upload my code to see what was wrong and would correct it myself.

//Included the header file library that enables input and output functionality
#include <stdio.h>

//Defineng a structure called score_combination to hold all the information of the score combination of the scoring plays
struct score_combination {
    //Declares the size of the score_combination to that stores the number of scoring plays in the score combination
	int size;
    //Declares the list of the score_combination to store all individual socrig palys.
	int list[100];
    //Declares the total scores of the entire score combiantion
	int total_score;
    //Declares the touchdown amount of the score combination to keep track of the amount of touchdown points are in the score combination
	int touchdown_point_amount;
    //Declares the field goal amount of the score combination to keep track of the amount of field goal points are in the score combination
	int field_goal_point_amount;
    //Declares the safety amount of the score combination to keep track of the amount of safety points are in the score combination
	int safety_point_amount;
    //Declares the touchdown plus two conversion amount of the score combination to keep track of the amount of touchdwon plus two two conversion points are in the score combination
	int touchdown_plus_two_conversion_point_amount;
    //Declares the touchdown plus point field goal amount of the score combination to keep track of the amount of touchdown plus point field goal points are in the score combination
	int touchdown_plus_point_field_goal_point_amount;
};

//Defineng a structure called nfl point system  to hold all the information of the the point system of the NFL scoring plays
struct nfl_point_system {
    //Declares the size of the nfl point systems that stores all point information
	int size;
    //Declared the touchdown point
	int touchdown_point;
    //Declared the field goal point
	int field_goal_point;
    //Declared the safety point
	int safety_point;
    //Declared the touchdown plus two conversion point
	int touchdown_plus_two_conversion_point;
    //Declared the touchdown plus point field goal point
	int touchdown_plus_point_field_goal_point;
    //Declared the point list to store all the point in th NFL point system.
	int point_list[20];

};


//The main function is the entyr point into the whole program itself.
int main() {

    //Declares and initalizes a nfl_point_system structure called nfl point system to store all the nfl point system information
	struct nfl_point_system nfl_point_system;
    //Initializes the size of the nfl point system to 5 as there only 5 distinct point values in the NFL point system structure
	nfl_point_system.size = 5;
    //Initializes the touchdown point to 6
	nfl_point_system.touchdown_point = 6;
    //Initializes the field goal point to 3
	nfl_point_system.field_goal_point = 3;
    //Initializes the safety point to 2
	nfl_point_system.safety_point = 2;
    //Initializes the touchdown plus two conversion point to 8
	nfl_point_system.touchdown_plus_two_conversion_point = 8;
    //Initializes the touchdown plus point field goal point to 7
	nfl_point_system.touchdown_plus_point_field_goal_point = 7;
    //Initializes the point list at index 0 to the touchdown point
	nfl_point_system.point_list[0] = nfl_point_system.touchdown_point;
    //Initializes the point list at index 1 to the field goal point
	nfl_point_system.point_list[1] = nfl_point_system.field_goal_point;
    //Initializes the point list at index 2 to the safety point
	nfl_point_system.point_list[2] = nfl_point_system.safety_point;
    //Initializes the point list at index 3 to the touchdown plus point field goal point
	nfl_point_system.point_list[3] = nfl_point_system.touchdown_plus_point_field_goal_point;
    //Initializes the point list at index 4 to the touchdown plus two conversion point
	nfl_point_system.point_list[4] = nfl_point_system.touchdown_plus_two_conversion_point;

    //Declares and inializes a score combination strucutre named current score combo to hold all information regarding to the current score cobination based on the NFl score playings
	struct score_combination current_score_combo;
    //Initializes the size of the current score combination to 0
	current_score_combo.size = 0;
    //Initializes the total of the current score combination to 0
	current_score_combo.total_score = 0;
    //Initializes the touchdown point amount of the current score combination to 0
	current_score_combo.touchdown_point_amount = 0;
    //Initializes the field goal point amount of the current score combination to 0
	current_score_combo.field_goal_point_amount = 0;
    //Initializes the safety point amount of the current score combination to 0
	current_score_combo.safety_point_amount = 0;
    //Initializes the touchdown plus point field goal point amount of the current score combination to 0
	current_score_combo.touchdown_plus_point_field_goal_point_amount = 0;
    //Initializes the touchdown plus two conversion point amount of the current score combination to 0
	current_score_combo.touchdown_plus_two_conversion_point_amount = 0;
    //Declares a integer user nfl score to store the NFL score from the user
	int user_nfl_score;
    //Prints the the user that inputting 0 or 1 will stop the program
    printf("Enter 0 or 1 to STOP\n");
    //Prints the user to the enter the NFL score
	printf("Enter your NFL score: ");
    //Scans the user input and stores in the user nfl score
	scanf("%d",&user_nfl_score);
    //While loop to to continue as long as the user nfl score is not equal to 1 or 0
	while(user_nfl_score != 0 && user_nfl_score != 1) {

        //Exeucutes the find combination function that takes in a user nfl score,nfl point sytem, and current score combo argumenyt, and last point set to 0
		find_combination(user_nfl_score,nfl_point_system,current_score_combo,0);
        //Prints the the user that inputting 0 or 1 will stop the program
		printf("Enter 0 or 1 to STOP\n");
        //Prints the user to the enter the NFL score
		printf("Enter your NFL score: ");
        //Scans the user input and stores in the user nfl score
		scanf("%d",&user_nfl_score);
	}
    //Returns 0 to indicate the program ran smoothly
	return 0;
}