//Created by FurrehIzzy
//Purpose: Calculate Fahrenheit and Celsius temperatures
//File Name: F-C conversion.cpp
//Pseudocode: Input temperature
//            mark as Fahrenheit or Celsius
//            calculate other temperature
//            print to screen
//Maintenance log:
//	07/25/2015 - Made the program

#include <stdio.h>
#include <conio.h>
#include <string>
#include <cctype>
#include <windows.h>

int main() {
	//Semi-global Variables//
	int programQueryLoop = 0;
	float originalTemperature;
	float modifiedTemperature;
	char Type[50];
	char CAns = 'n';
	
	//Startup//
	while(programQueryLoop < 1) {
		int queryVerification = 0;
		int stringVerification = 0;
		printf("Yo, what's the temperature: ");
		scanf("%f", &originalTemperature);
		_flushall();
		printf("\n \nFahrenheit or Celsius: ");
	
		//String verification loop -- requires F or C//
		while(stringVerification < 1) {
			scanf("%s", &Type);
			_flushall();
		
			//Celsius calculation//
			if(tolower(Type[0])=='f') {
				modifiedTemperature = (originalTemperature-32)/1.8;
				printf("\nFahrenheit: %f \n", originalTemperature);
				printf("Celsius: %f ", modifiedTemperature);
				stringVerification++; }
			else if(tolower(Type[0])=='c') {
				modifiedTemperature = originalTemperature*1.8+32;
				printf("\nFahrenheit: %f \n", modifiedTemperature);
				printf("Celsius: %f ", originalTemperature);
				stringVerification++; }
			else { printf("\nFahrenheit or Celsius: "); }; 
		};
		//Query verification loop -- requires Y or N//
		while(queryVerification < 1) {
			printf("\n\nAgain? [Y]es | [N]o\n>");
			CAns = toupper(getche());
			if(CAns == 'Y') {
				queryVerification=1;
				programQueryLoop=0;
				system("CLS");
			}
			else if(CAns == 'N') {
				queryVerification=1;
				programQueryLoop=1;
			}
			else {
				queryVerification=0;
			};
		};
	};
	return 0;
};
