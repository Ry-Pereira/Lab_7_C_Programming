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
	int touchdown_amount;
    //Declares the field goal amount of the score combination to keep track of the amount of field goal points are in the score combination
	int field_goal_amount;
    //Declares the safety amount of the score combination to keep track of the amount of safety points are in the score combination
	int safety_amount;
    //Declares the touchdown plus two conversion amount of the score combination to keep track of the amount of touchdwon plus two two conversion points are in the score combination
	int touchdown_plus_two_conversion_amount;
    //Declares the touchdown plus point field goal amount of the score combination to keep track of the amount of touchdown plus point field goal points are in the score combination
	int touchdown_plus_point_field_goal_amount;
};