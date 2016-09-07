// Extra Credit.cpp : Defines the entry point for the console application.
/*
Course Requirement Generator

Leon Christopher Scott

October 1, 2013

This program asks the Electrical Engineering student
for a course number, and tells them the corresponding 
course and the amount of credits (if it is a core requirement).  
The program also lists the term, Spring & Fall 2013, with
Room and Teacher for the classes
*/

#include "stdafx.h" // I just need it

#include <iostream> // input ouput header file

#include <string> // string header file, so i can user strings

using namespace std; // for naming variables and things




int CourseNumber(string name); // this is the initilialzation a function that asks the user for a course number

int Class(int number); // this is the initilialzation a function that tells the user what core class (if any) corresponds to the number from the function given in CourseNumber 




int _tmain(int argc, _TCHAR* argv []) // main function
{
	string name; // this will hold the user's name
	string yn; // this stands for (yes) or (no). This will be used to give the user a choice of continuing the program, or ending it

	cout << "Hi, and welcome to the Electrical and Computer Engineering Core Class Generator\n\nWhat is your name? "; // Introduction---- program asks for user's name
	cin >> name; // user enters their name



Beginning: // this is a respawn point for the end of the program to utilize
	
	CourseNumber(name); // go to function CourseNumber, while passing the string name supplied by the user


	// and..... we're are back....
	cout << endl << endl << "\n\nWould you like to find another course (yes) or (no)? "; // the program asks the user if they would like to do it all again

	cin >> yn; // the program accepts a yes, or, no answer from the user

		if (yn == "yes") // if the user types yes
		{
			goto Beginning; // go back up to the beginnning 
		}
		else // if the user enters any other string
		{
			cout << "\n\nOk, thanks for using my tool! Hope it was helpful :)"; // give a friendly fairwell speech to the user and move on 
		}

	// this next stuff prevents the program from immediatly shutting down

	char f; // create the character f;
	cin >> f; // wait for the user to asign (f) a value

	return 0; // end program
}




int CourseNumber(string name) // now we are running CourseNumber, accepting the string name from the main() function
{
	int number; // this variable will hold the course number supplied by the user

		cout << "\n\n\nWhat course number would you like to check " << name << "? \n\nEEGR: "; // the program asks the user for a number

		cin >> number; // the program accepts a number from the user

		cout << endl; // cosmetic new line

	Class(number); // go to the function Class while passing the value given int number given by the user

	
	// and... we're back....
	return 0; // return to main() where we last left off
}





int Class(int number) // now we are running Class, accpeting the integer number passed from the CourseNumber functinon
{
	
	/*
	These if-statements align the possible (number) values 
	with the corresponding core class & credit hours to be 
	printed to the console
	*/
		if (number == 105) // conditional. IF the number is equal to a value
		{
			cout << "\nIntroduction to Electrical and Computer Engineering\t3 Credits"; // print course name followed by the Credits for that course
			cout << "\n\nFall 2013\tLawdawn E. Partlow\tRoom: ENGS114";
			cout << "\n\nSpring 2013\tInstructor: Paterne S. Sissinto\t\tRoom: ENGS 114";
			goto End; // jump to the end of this function
		}

		if (number == 202)
		{
			cout << "\nElectric Circuits\t4 Credits";
			cout << "\n\nFall 2013\tInstructor: Yacob Astatke\t\tRoom: ENGM 242";
			cout << "\n\nSpring 2013\tInstructor: Yacob Astatke\t\t Room: ENGM 242";
			goto End;
		}
		if (number == 203)
		{
			cout << "\nIntroduction to Electrical Laboratory\t1 Credits";
			cout << "\n\nFall 2013\tInstructor: Gregory M. Wilkins\t\tRoom: ENGM 242";
			cout << "\n\nSpring 2013\tInstructor: Gregory M. Wilkins\t\tRoom: ENGM 242";
			goto End;
		}
		if (number == 211)
		{
			cout << "\nIntroduction to Digitcal Logic\t3 Credits";
			cout << "\n\nFall 2013\tInstructor:Jumoke O. Ladeji-Osias\tRoom: ENGS 201";
			cout << "\n\nSpring 2013\tInstructor: Nataki K. Roberts\t\tRoom: ENGS 201";
			goto End;
		}
		if (number == 215)
		{
			cout << "\nElectronic Materials and Devices\t4 Credits";
			cout << "\n\nFall 2013\tInstructor: Michel A. Reece\t\tRoom: ENGS 201";
			cout << "\n\nSpring 2013\tInstructor: Corey S. Dickens\t\tRoom: ENGS 202";
			goto End;
		}
		if (number == 221)
		{
			cout << "\nSignals and Systems\t4 Credits";
			cout << "\n\nFall 2013\tInstructor: Farzad Moazzami\t\tRoom: ENGS 208";
			cout << "\n\nSpring 2013\tInstructor: Farzad Moazzami\t\tRoom: ENGS 208";
			goto End;
		}

		if (number == 305)
		{
			cout << "\nElectromagnetic Theory and Applications\t\t4 Credits";
			cout << "\n\nFall 2013\tInstructor: Craig J. Scott\t\tRoom: ENGS 112";
			cout << "\n\nSpring 2013\tInstructor: Farzad Moazzami\t\tRoom: ENGS 208";
			goto End;
		}
		if (number == 317)
		{
			cout << "\nElectronic Circuits\t4 Credits";
			cout << "\n\nFall 2013\tInstructor: Corey S. Dickens\t\tRoom: ENGS 203";
			cout << "\n\nSpring 2013\tInstructor: Jeyasingh Nithianandam\t\tRoom: ENGS 204";
			goto End;
		}
		if (number == 322)
		{
			cout << "\nDiscrete Systems\t3 Credits";
			cout << "\n\nFall 2013\tInstructor:  James E. Whitney\t\tRoom: ENGS 201";
			cout << "\n\nSpring 2013\tInstructor: Arlene A. Cole-Rhodes\t\tRoom: ENGS 242";
			goto End;
		}
		if (number == 390)
		{
			cout << "\nPrinciples of Design\t2 Credits";
			cout << "\n\nFall 2013\tInstructor:  Ladawn E. Partlow\t\tRoom: ENGS 208";
			cout << "\n\nSpring 2013\tInstructor: Ladawn E. Partlow\t\tRoom: ENGS 236";
			goto End;
		}
		if (number == 400)
		{
			cout << "\nIntroduction to Professional Practice\t1 Credits";
			cout << "\n\nFall 2013\tInstructor:  Ladawn E. Partlow\t\tRoom: ENGS 201";
			cout << "\n\nSpring 2013\tInstructor: Ladawn E. Partlow\t\tRoom: ENGM 122";
			goto End;
		}
		if (number == 490)
		{
			cout << "\nSenior Design Project I\t1 Credits";
			cout << "\n\nFall 2013\tInstructor: Craig J. Scott\t\tRoom: ENGS 241";
			cout << "\n\nSpring 2013\tInstructor: Ladawn E. Partlow\t\tRoom: ENGM 122";
			goto End;
		}
		if (number == 491)
		{
			cout << "\nSenior Design Project II\t2 Credits";
			cout << "\n\nFall 2013\tInstructor: Farzad Moazzami\t\tRoom: ENGS 334";
			cout << "\n\nSpring 2013\tInstructor: Afework Demisse\t\tRoom: ENGS 351";
			goto End;
		}

				/* these if statements are for special cases 
				like if the user enters something between 500 & 600
				or if the user enters something other than everything already specified
				*/
				if (number < 600 && (number > 500)) 
				{
					cout << "\nThis might be an elective credit";
					goto End;
				}

				else // if the number doesn't fall into any of these previous requirements, print the following
				{
					cout << "\nThis is not a core requirement";
					goto End;
				}

	
			End: // end of the function
			return 0; // return to the function Class() where we last left off

}
