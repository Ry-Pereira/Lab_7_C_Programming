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



void temperature_conversion(float temp_value,int temp_value_scale,int  temp_conversion_target) {
    //Declares temp result to store the converted temp result value
	float temp_result;

    //If the user temp scale is Fahrneheit and temp value is belowe the absolute zero point, the user will be notified that they need to input a valid Fahrenheit temperature
    if(temp_value_scale == 1 && temp_value < -459.67) {
        //Prints to the user the Fahrenheit temperature is below the absolute zero point, and to enter a valid temperature
        printf("The Fahrenheit temperature is below absolute zero point, please enter a valid temperature value");
    }
    //If the user temp scale is Celsius and temp value is belowe the absolute zero point, the user will be notified that they need to input a valid Celsius temperature
    else if(temp_value_scale == 2 && temp_value < -273.15){
        //Prints to the user the Celsius temperature is below the absolute zero point, and to enter a valid temperature
        printf("The Celsius temperature is below absolute zero point, please enter a valid temperature value");
    }
    //If the user temp scale is Kelvin and temp value is belowe the absolute zero point, the user will be notified that they need to input a valid Kelvin temperature
    else if(temp_value_scale == 3 && temp_value < 0){
        //Prints to the user the Kelvins temperature is below the absolute zero point, and to enter a valid temperature
        printf("The Kelvins temperature is below absolute zero point, please enter a valid temperature value");
    }
    //If it meets all the conditions of valid temperautre value based on the temperature value scale
    else{

    //If the user temp value scale is 1 and user temp convertion target is 2, than it will be converted from fahrenheit to celsius
	if(temp_value_scale == 1 && temp_conversion_target == 2 ) {
        //Stores the temperature result of converting the temperature value from farenheit to celsisus
		temp_result = fahrenheit_to_ceslsius(temp_value);
	}
    //If the user temp value scale is 1 and user temp convertion target is 2, than it will be converted from fahrenheit to celsius
	else if(temp_value_scale == 2 && temp_conversion_target == 1) {
        //Stores the temperature result of converting the temperature value from celsius to fahrenheit
		temp_result = celsius_to_fahrenheit(temp_value);

	}
    //If the user temp value scale is 1 and user temp convertion target is 2, than it will be converted from fahrenheit to celsius
	else if(temp_value_scale == 1 && temp_conversion_target == 3) {
        //Stores the temperature result of converting the temperature value from farenheit to kelvins
		temp_result = fahrenheit_to_kelvins(temp_value);
	}
    //If the user temp value scale is 1 and user temp convertion target is 2, than it will be converted from fahrenheit to celsius
	else if(temp_value_scale == 3 && temp_conversion_target == 1 ) {
        //Stores the temperature result of converting the temperature value from kelvins to fahrenheit
		temp_result = kelvins_to_fahrenheit(temp_value);
	}
    //If the user temp value scale is 1 and user temp convertion target is 2, than it will be converted from fahrenheit to celsius
	else if(temp_value_scale == 2 && temp_conversion_target == 3) {
        //Stores the temperature result of converting the temperature value from celsius to kelvins
		temp_result = celsius_to_kelvins(temp_value);
	}
    //If the user temp value scale is 1 and user temp convertion target is 2, than it will be converted from fahrenheit to celsius
	else if(user_temp_value_scale == 3 && temp_conversion_target == 2) {
        //Stores the temperature result of converting the temperature value from kelvins to celsisus
		temp_result = kelvins_to_celsius(temp_value);
	}
    //If either the user temp value scale or user temp convertion target is not valis or the same
	else {
        //Pritns to the user that the input is invalid, that they need to input a valid temperature scale and ocnvertion target that is not of the same termperature setting
		printf("Please enter a valid temperature scale and conversion target that is also the equivalent to each other.");
	}
}
}

//The main function is the entyr point into the whole program itself.
int main()
{
    //Declares the float user temp value to sotre the temperature value of the user
	float user_temp_value;

    //Declares the integer user temp value scale to store the temp value scale from the user
	int user_temp_value_scale;
    //Declares the integer user temp conversion target to store the temp conversion target from the user
	int user_temp_conversion_target;
    //Prints to the user to enter the temperature value
	printf("Enter Temperature Value: ");
    //Scans the user input and stores in the user temp value
	scanf("%f\n",&user_temp_value);
    //Prints to the user to choose the temperature scal of the value
	printf("Choose temperature scald of the value (Fahrenheit,Celsius,or Kelvin)");
    //Scans the user input and stores in the user temp value scale
	scanf("%d\n",&user_temp_value_scale);
    //Prints to the user to choose the temperature conversion target of the value
	printf("Choose temperature conversion target of the value (Fahrenheit,Celsius,or Kelvin)");
    //Scans the user input and stores in the user temp conversion target
	scanf("%d\n",&user_temp_conversion_target);

    //Executes the convert temp function with user temp calue, user temp value scale, and the user temp conversion target as arguments passed in
	convert_temp(user_temp_value,user_temp_value_scale,user_temp_conversion_target);

    //Returns 0 to indicate the program ran smoothly
	return 0;
}