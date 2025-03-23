//Program Name: Problem 2: Temperature Conversion Utility
//Brief Description: This program perfroms temperature conversions betweem Fahrenheit,Celsius, and Kelvin. It also categorizes the termperature into predefein ranges based on the value and provides a weather advisory
//Input: Prompts the user for a temperature value, a temperature scale of the input value of Farenheit,Celsius, or Kelving and a convertion target such as Fahrenheit,Celsisu or Kelvin.
//Ouput: The ouput will be convert the termperature of the  user's input scale and target scale, display the converted temperature, categorize it and provide a simple weather advisory based on the category
//All collaborators: None
//Other Sources:Github Copilot and ChatGPT BroCode from Youtube, Stack Overflow, and GeekforGeeks
//Author: Ryan Antony Pereira
//Creation Date: 3/20/2025
//Last Modified Date: 3/23/2025

//GitHub Copilot was used to help code in the sense, when I was writing my code, it woudl help finsish or complete it. A lot of the comments were initally done by Github Copilot. I went back and rewrote all comments for every single line in the program.
//ChaTtGPT was used in code error resolve, if I had any error in the coding process, I upload my code to see what was wrong and would correct it myself.


//Included the header file library, that enables input and output functionality
#include <stdio.h>


//The main function is the entyr point into the whole program itself.
int main()
{
	float user_temp_value;
	char[20] user_temp_value_scale;
	char[20] user_temp_conversion_target;

	printf("Enter Temperature Value: ");
	scanf("%f\n",&user_temp_value);
	printf("Choose temperature scald of the value (Fahrenheit,Celsius,or Kelvin)");
	scanf("%s\n",&user_temp_value_scale);
	printf("Choose temperature conversion target of the value (Fahrenheit,Celsius,or Kelvin)");
	scanf("%s\n",&user_temp_conversion_target);

	convert_temp(user_temp_value,user_temp_value_scale,user_temp_conversion_target);

    //Returns 0 to indicate the program ran smoothly
	return 0;
}