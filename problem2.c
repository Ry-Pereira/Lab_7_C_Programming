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



//ChatGPT was use fore debugging. ALso for helpin in converting between the temperature scales

//Function that converts float celsius to fahrenheit temperature
float celsius_to_fahrenheit(float celsius) {
    //Float fahrenheit value is set to the product of 9/5 multiplied by the celsiis plus 32.0
	float fahrenheit_value = (9.0/5.0)*celsius + 32.0;
    //Returns the fahrenheit value
	return fahrenheit_value;
}
//Function that converts float fahrenheit to celsius temperature
float fahrenheit_to_celsius(float fahrenheit) {
    //Float celsius value is set to the product of 5/9 multiplied by the fahrenheit minus 32.0
	float celsius_value = (5.0/9.0)*(fahrenheit-32.0);
    //Returns the celsius value
	return celsius_value;
}
//Function that converts float celsius to kelvin temperature
float celsius_to_kelvins(float celsius) {
    //Float kelvins value is set to the product the celsius plus 273.15
	float kelvins_value = celsius + 273.15;
    //Returns the kelvins value
	return kelvins_value;
}
//Function that converts float kelvin to celsius temperature
float kelvins_to_celsius(float kelvins) {
    //Float celsius value is set to the product the celsius minus 273.15
	float celsius_value = kelvins - 273.15;
    //Returns the celsius value
	return celsius_value;
}
//Function that converts float kelvins to fahrenheit temperature
float kelvins_to_fahrenheit(float kelvins) {
    //Stores the celsisu value to the result of the kelvins to celisus function with kelvins as the argument
	float celsius_value = kelvins_to_celsius(kelvins);
    //Stores the fahrenheit value to the result of the celsius to fahreneheit function, with celsius value as the argument
	float fahrenheit_value = celsius_to_fahrenheit(celsius_value);
    //Returns the fahrenheit value
	return fahrenheit_value;
}
//Function that converts float fahrenheit to kelvins temperature
float fahrenheit_to_kelvins(float fahrnheit) {
    //Stores the celsisu value to the result of the fahrenheit to celisus function with fahreneheit as the argument
	float celsius_value = fahrenheit_to_celsius(fahrnheit);
    //Stores the kelvins value to the result of the celsius to kelvins function, with celsius value as the argument
	float kelvins_value = celsius_to_kelvins(celsius_value);
    //Returns the kelvins value
	return kelvins_value;
}

//ChatGPT was used to help in categorinze the temperature in find the ranges of the tmeperature values

//Categorizes the temperature vale with temp resutl and temp conversion target as arguments 
//Function to categorize temperature value, with temp value and temp conversion target as arguments
void categorize_temperature(float temp_value, int temp_conversion_target) {
    //If the temp conversion target is 1, then it will categorize the Fahreheit converted temperature
    printf("Weather Advisory");
	if(temp_conversion_target == 1) {
        //If the Temp  value is less than 14, it is freezing, with a weather advisory message for the user
		if(temp_value < 14) {
            //Prints to the user the temperaturre is freezing
			printf("Temperature Category: Freezing\n");
            //Prints to the user to wear a coat and some gloves
			printf("Wear a coat and some gloves\n");
		}
        //If the Temp  value is greater than or equal to 14 and is lesser than or equal to 50, it is cold with aweather advisory message to user.
		else if(temp_value >= 14 && temp_value <= 50) {
            //Prints to the user the temperaturre is cold
			printf("Temperature Category: Cold\n");
            //Prints to the user to wear a jacket or a hoodie
			printf("Wear a  jacket or a hoodie\n");
		}
        //If the Temp  value is greater than or equal to 50 and is lesser than or equal to 86, it is ccomfortable with aweather advisory message to user.
		else if(temp_value >= 50 && temp_value <= 86) {
			//Prints to to the user the temperature is comfortable
			printf("Temperature Category: Comfortable\n");
            //Prints to the user to wear comfortably
			printf("Wear comfortably, obviously\n");
		}
        //If the Temp  value is greater than or equal to 86 and is lesser than or equal to 104, it is hot with aweather advisory message to user.
		else if(temp_value >= 86 && temp_value <= 104) {
            //Prints to to the user the temperature is Hot
			printf("Temperature Category: Hot\n");
            //Prints to the user to wear loose wear
			printf("Wear loose wear\n");
		}
        //If the Temp  value is greater than  104, it is hot with aweather advisory message to user.
		else{
            //Prints to to the user the temperature is Extremely Hot
			printf("Temperature Category: Extremely Hot\n");
            //Prints to the user to wear loose wear and drink lots of water
			printf("Wear looser wear, drink lots of waters\n");
		}

	}
    //If the temp conversion target is 2, then it will categorize the Celsius converted temperature
	else if(temp_conversion_target == 2) {
        //If the Temp  value is less than -10, it is freezing, with a weather advisory message for the user
		if(temp_value < -10) {
            //Prints to the user the temperaturre is freezing
			printf("Temperature Category: Freezing\n");
            //Prints to the user to wear a coat and some gloves
			printf("Wear a coat and some gloves\n");
		}
        //If the Temp  value is greater than or equal to -10 and is lesser than or equal to 18, it is cold with aweather advisory message to user.
		else if(temp_value >= -10 && temp_value <= 18) {
            //Prints to to the user the temperature is cold
			printf("Temperature Category: Cold\n");
            //Prints to the user to wear a jacket or a hoodie
			printf("Wear a jacket or a hoodie\n");
		}
        //If the Temp  value is greater than or equal to 18 and is lesser than or equal to 30, it is comfortable with aweather advisory message to user.
		else if(temp_value >= 18 && temp_value <= 30) {
            //Prints to to the user the temperature is comfortable
			printf("Temperature Category: Comfortable\n");
            //Prints to the user to wear comfortably
			printf("Wear comfortably, obviiosly\n");
		}
        //If the Temp  value is greater than or equal to 30 and is lesser than or equal to 42, it is hot with aweather advisory message to user.
		else if(temp_value >= 30 && temp_value <= 42) {
			//Prints to to the user the temperature is Hot
			printf("Temperature Category: Hot\n");
            //Prints to the user to wear loose wear
			printf("Wear loose wear\n");
		}
        //If the Temp  value is greater than  42, it is hot with aweather advisory message to user.
		else {
			//Prints to to the user the temperature is Extremely Hot
			printf("Temperature Category: Extremely Hot\n");
            //Prints to the user to wear loose wear and drink lots of water
			printf("Wear looser wear, drink lots of waters\n");
		}

	}
    //If the temp conversion target is 3, then it will categorize the Kelvins converted temperature
	else if(temp_conversion_target == 3) {
        //If the Temp  value is less than 263, it is freezing, with a weather advisory message for the user
		if(temp_value < 263) {
			//Prints to the user the temperaturre is freezing
			printf("Temperature Category: Freezing\n");
            //Prints to the user to wear a coat and some gloves
			printf("Wear a coat and some gloves\n");
		}
        //If the Temp  value is greater than or equal to 263 and is lesser than or equal to 291, it is cold with aweather advisory message to user.
		else if(temp_value >= 263 && temp_value <= 291) {
			//Prints to to the user the temperature is cold
			printf("Temperature Category: Cold\n");
            //Prints to the user to wear a jacket or a hoodie
			printf("Wear a jacket or a hoodie\n");
		}
        //If the Temp  value is greater than or equal to 291 and is lesser than or equal to 300, it is comfortable with a weather advisory message to user.
		else if(temp_value >= 291 && temp_value <= 300) {
			//Prints to to the user the temperature is comfortable
			printf("Temperature Category: Comfortable\n");
            //Prints to the user to wear comfortably
			printf("Wear comfortably, obviiosly\n");
		}
        //If the Temp  value is greater than or equal to 300 and is lesser than or equal to 320, it is hot with aweather advisory message to user.
		else if(temp_value >= 300 && temp_value <= 320) {
			//Prints to to the user the temperature is Hot
			printf("Temperature Category: Hot\n");
            //Prints to the user to wear loose wear
			printf("Wear loose wear\n");
		}
        //If the Temp  value is greater than  320, it is hot with aweather advisory message to user.
		else{
			//Prints to to the user the temperature is Extremely Hot
			printf("Temperature Category: Extremely Hot\n");
            //Prints to the user to wear loose wear and drink lots of water
			printf("Wear looser wear, drink lots of waters\n");
		}

	}
}



    //Function to convert temperatures between temperatures scales to the target specified by the user
	void temperature_conversion(float temp_value,int temp_value_scale,int  temp_conversion_target) {
		//Declares temp result to store the converted temp result value
		float temp_result;

		//If the user temp scale is Fahrneheit and temp value is belowe the absolute zero point, the user will be notified that they need to input a valid Fahrenheit temperature
		if(temp_value_scale == 1 && temp_value < -459.67) {
			//Prints to the user the Fahrenheit temperature is below the absolute zero point, and to enter a valid temperature
			printf("The Fahrenheit temperature is below absolute zero point, please enter a valid temperature value\n");
		}
		//If the user temp scale is Celsius and temp value is belowe the absolute zero point, the user will be notified that they need to input a valid Celsius temperature
		else if(temp_value_scale == 2 && temp_value < -273.15) {
			//Prints to the user the Celsius temperature is below the absolute zero point, and to enter a valid temperature
			printf("The Celsius temperature is below absolute zero point, please enter a valid temperature value\n");
		}
		//If the user temp scale is Kelvin and temp value is belowe the absolute zero point, the user will be notified that they need to input a valid Kelvin temperature
		else if(temp_value_scale == 3 && temp_value < 0) {
			//Prints to the user the Kelvins temperature is below the absolute zero point, and to enter a valid temperature
			printf("The Kelvins temperature is below absolute zero point, please enter a valid temperature value\n");
		}
		//If it meets all the conditions of valid temperautre value based on the temperature value scale
		else {

			//If the user temp value scale is 1 and user temp convertion target is 2, than it will be converted from fahrenheit to celsius
			if(temp_value_scale == 1 && temp_conversion_target == 2 ) {
				//Stores the temperature result of converting the temperature value from farenheit to celsisus
				temp_result = fahrenheit_to_celsius(temp_value);
                //Prints the converted temperature value
				printf("Converted Temperature: %.2f \n",temp_result);
                //Categorizes the temperature vale with temp resutl and temp conversion target as arguments
				categorize_temperature(temp_result,temp_conversion_target);
			}
			//If the user temp value scale is 1 and user temp convertion target is 2, than it will be converted from fahrenheit to celsius
			else if(temp_value_scale == 2 && temp_conversion_target == 1) {
				//Stores the temperature result of converting the temperature value from celsius to fahrenheit
				temp_result = celsius_to_fahrenheit(temp_value);
                //Prints the converted temperature value
				printf("Converted Temperature: %.2f \n",temp_result);
                //Categorizes the temperature vale with temp resutl and temp conversion target as arguments
				categorize_temperature(temp_result,temp_conversion_target);

			}
			//If the user temp value scale is 1 and user temp convertion target is 2, than it will be converted from fahrenheit to celsius
			else if(temp_value_scale == 1 && temp_conversion_target == 3) {
				//Stores the temperature result of converting the temperature value from farenheit to kelvins
				temp_result = fahrenheit_to_kelvins(temp_value);
                //Prints the converted temperature value
				printf("Converted Temperature: %.2f \n",temp_result);
                //Categorizes the temperature vale with temp resutl and temp conversion target as arguments
				categorize_temperature(temp_result,temp_conversion_target);
			}
			//If the user temp value scale is 1 and user temp convertion target is 2, than it will be converted from fahrenheit to celsius
			else if(temp_value_scale == 3 && temp_conversion_target == 1 ) {
				//Stores the temperature result of converting the temperature value from kelvins to fahrenheit
				temp_result = kelvins_to_fahrenheit(temp_value);
                //Prints the converted temperature value
				printf("Converted Temperature: %.2f \n",temp_result);
                //Categorizes the temperature vale with temp resutl and temp conversion target as arguments
				categorize_temperature(temp_result,temp_conversion_target);
			}
			//If the user temp value scale is 1 and user temp convertion target is 2, than it will be converted from fahrenheit to celsius
			else if(temp_value_scale == 2 && temp_conversion_target == 3) {
				//Stores the temperature result of converting the temperature value from celsius to kelvins
				temp_result = celsius_to_kelvins(temp_value);
                //Prints the converted temperature value
				printf("Converted Temperature: %.2f \n",temp_result);
                //Categorizes the temperature vale with temp resutl and temp conversion target as arguments
				categorize_temperature(temp_result,temp_conversion_target);
			}
			//If the user temp value scale is 1 and user temp convertion target is 2, than it will be converted from fahrenheit to celsius
			else if(temp_value_scale == 3 && temp_conversion_target == 2) {
				//Stores the temperature result of converting the temperature value from kelvins to celsisus
				temp_result = kelvins_to_celsius(temp_value);
                //Prints the converted temperature value
				printf("Converted Temperature: %.2f \n",temp_result);
                //Categorizes the temperature vale with temp resutl and temp conversion target as arguments
				categorize_temperature(temp_result,temp_conversion_target);
			}
			//If either the user temp value scale or user temp convertion target is not valis or the same
			else {
				//Pritns to the user that the input is invalid, that they need to input a valid temperature scale and ocnvertion target that is not of the same termperature setting
				printf("Please enter a valid temperature scale and conversion target that is also the equivalent to each other.\n");
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
		printf("Enter Temperature Value:");
		//Scans the user input and stores in the user temp value
		scanf("%f",&user_temp_value);
		//Prints to the user to choose the temperature scal of the value
		printf("Choose temperature scale of the value (1:Fahrenheit,2:Celsius,or 3:Kelvin)");
		//Scans the user input and stores in the user temp value scale
		scanf("%d",&user_temp_value_scale);
		//Prints to the user to choose the temperature conversion target of the value
		printf("Choose temperature conversion target of the value (1:Fahrenheit,2:Celsius,or 3:Kelvin");
		//Scans the user input and stores in the user temp conversion target
		scanf("%d",&user_temp_conversion_target);
        //Prints to the user with a new line
		printf("\n");

		//Executes the convert temp function with user temp calue, user temp value scale, and the user temp conversion target as arguments passed in
		temperature_conversion(user_temp_value,user_temp_value_scale,user_temp_conversion_target);

		//Returns 0 to indicate the program ran smoothly
		return 0;
	}