/*****************************************************************************************************
*Milestone Project5 Final application release
*In this assignment I am able to use libraries I/O to open and closing files, read and write files
*I make sure to apply the security techniques to ensure that the code runs properly
*********************************************************************************************************/
/* Student: Diana Bailey
*  Instructor: Mr.Jeremy Wright
*  ITT 310 Programming for security professionals
*********************************************************************************************************/
/*including needed libraries*/
#include <stdio.h> //This is a header that defines functions and macros.
#include <stdlib.h> //This is a header with the exit function
#include <string.h> //define strings in C
#include <errno.h> //define Macros in C programming
#include <conio.h> // This is to open the I/O files
#include <ctype.h> //support all the functions of c language

//declaring global variables
int globalContinue = 1;
int GlobalVerified = 0;
int a; int b; int c;  int(add_values);

/********************************************************************************************************
* introPrinter() function
* Prints out student and instructor names as well as course information
********************************************************************************************************/
void introPrinter()
{
	//I used void here as a function, and the function does not return value.//
	//  In this case I wanted to print all the information, I did not use the "return;" statement to stop
	//the function execution.
	printf("Student: Diana Bailey\n"); //print my name//
	printf("Instructor: Mr. Jeremy Wright\n"); //print my instructor's name//
	printf("Project of ITT 310 Programming for security professional\n");//print the course's name//
	printf("Grand Canyon University\n");//print college's name//
	printf("\n");
}
/********************************************************************************************************
* Implementing a Note
*******************************************************************************************************/
void noteFromDianaBy()
{//function calling

	printf("\nFinally, I have created my own code thanks to my instructor who challenged me to do it!!!\n "); //function definition
}
/*******************************************************************************************************
* DBFile_write() function
* With this function we open a file, create a file if it does not exist and we can write our data, and
* new lines if we want with the writing mode that we are using here.
*******************************************************************************************************/
void DBFile_write()
{
	FILE* DBDoc;
	errno_t fileError;

	if ((fileError = fopen_s(&DBDoc, "DBDoc.txt", "w")) != 0)
	{
		printf("\nThere was an error while trying to open the file\n");
	}
	else
	{
		//opening or creating the file if it does not exist
		fputs("This intensive course has been a challenge, still so much to learn\n", DBDoc); //writing our content or adding a new content
	//here we are adding data
		fprintf(DBDoc, "%s", "\nThanks to my instructor for feedback and sharing his knowledge with us\n");
		printf("\n\n");
		fileError = fclose(DBDoc); //close the file
	}
}
/***********************************************************************************************************
* DBFile_Read() function
* With this function we open a file,read a file if it opens with no problem
***********************************************************************************************************/
void DBFile_Read()
{
	FILE* DBDoc; //declare a file
	errno_t fileError;

	if ((fileError = fopen_s(&DBDoc, "DBDoc.txt", "r")) != 0) //if there is an error opening the file let us know
	{
		printf("\nThere was an error while trying to open the file\n");
	}
	else
	{
		char z;
		printf("\n\n");

		while (1)
		{
			z = fgetc(DBDoc);
			if (z == EOF)
				break;
			else
				printf("%c", z);
		}
		printf("\n\n");
		fileError = fclose(DBDoc);
	}
}
/*********************************************************************************************************
* Implementing typedef struct to create a teacher's list for the school using structures
*********************************************************************************************************/
typedef struct Cside_tea
{
	char teachername[50];
	int classroom;
	char gradelevel[30];
	int classcode;
} Cside;
void Info_teachers()
{
	//Students will use this list to answer next their teacher's name and their Classcode
	//In special education students need help remembering some data, specially the little ones
	Cside Teacher1; Cside teacher2; Cside teacher3; Cside teacher4; Cside teacher5; //amount of teachers per grade

	strcpy_s(Teacher1.teachername, 20, "Loly Perez"); //information about teacher's name
	Teacher1.classroom = 101;                   // Classroom's number
	strcpy_s(Teacher1.gradelevel, 20, "First Grade"); //Grade that the teacher will teach for 2021
	Teacher1.classcode = 6502001;  // Classcode Jamboard
	printf("\nCside Teachers list information\n");
	printf("\nCside Elementary Teacher\n");
	printf("teacher's Name :%s\n", Teacher1.teachername);
	printf("classroom : %d\n", Teacher1.classroom);
	printf("gradelevel : %s\n", Teacher1.gradelevel);
	printf("classcode: %d\n", Teacher1.classcode);
	strcpy_s(teacher2.teachername, 20, "Tony Melendez");
	teacher2.classroom = 102;
	strcpy_s(teacher2.gradelevel, 20, "Second Grade");
	teacher2.classcode = 6502002;
	printf("\nCside Elementary Teacher\n");
	printf("teacher's Name: %s\n", teacher2.teachername);
	printf("classroom : %d\n", teacher2.classroom);
	printf("gradelevel : %s\n", teacher2.gradelevel);
	printf("classcode: %d\n", teacher2.classcode);
	strcpy_s(teacher3.teachername, 20, "Nana Rojas");
	teacher3.classroom = 103;
	strcpy_s(teacher3.gradelevel, 20, "Third Grade");
	teacher3.classcode = 6502003;
	printf("\nCside Elementary Teacher\n");
	printf("teacher's Name: %s\n", teacher3.teachername);
	printf("classroom : %d\n", teacher3.classroom);
	printf("gradelevel : %s\n", teacher3.gradelevel);
	printf("classcode: %d\n", teacher3.classcode);
	strcpy_s(teacher4.teachername, 20, "Diego Polo");
	teacher4.classroom = 104;
	strcpy_s(teacher4.gradelevel, 20, "Fourth Grade");
	teacher4.classcode = 6502004;
	printf("\nCside Elementary Teacher\n");
	printf("teacher's Name : %s\n", teacher4.teachername);
	printf("classroom : %d\n", teacher4.classroom);
	printf("gradelevel : %s\n", teacher4.gradelevel);
	printf("classcode: %d\n", teacher4.classcode);
	strcpy_s(teacher5.teachername, 20, "Luis Lopez");
	teacher5.classroom = 105;
	strcpy_s(teacher5.gradelevel, 20, "Fifth Grade");
	teacher5.classcode = 6502005;
	printf("\nCside Elementary Teacher\n");
	printf("teacher's Name : %s\n", teacher5.teachername);
	printf("classroom : %d\n", teacher5.classroom);
	printf("gradelevel : %s\n", teacher5.gradelevel);
	printf("classcode: %d\n", teacher5.classcode);
}
void Student_Input()
{// get teacher's name and classcode from student to start the Math program
	char Classcode[30];
	char Teacher_name[30];
	// create get functions//
	printf("\nPlease enter your teacher's name :");
	fgets(Teacher_name, 30, stdin);
	printf("%s", Teacher_name);
	printf("\n");
	printf("\nPlease enter your Classcode :");
	fgets(Classcode, 30, stdin);
	printf("%s", Classcode);
	printf("\n");
}
/***********************************************************************************************************
* Implementing a small program to add numbers user Input
***********************************************************************************************************/
void AddisFun()
{
	int slot_datavalue[10][10]; //Modular programming is when we divide or break a problem, a situation, a number into small parts//
	printf("\nPick a number between between 1 and 10 to start your addition chart\n");
	printf("\nInsert the number of rows/columns you want to add :\n");//Here the main program is divided in sub programs with an independent code that is combined in a single unit.//
	scanf_s("%d", &c);
	printf("Insert the numbers that you want to add in the row\n");

	if (c > 0)
	{
		for (a = 0; a < c; a++) {
			printf("\nRow %d Insert the slot value\n", a);
			for (b = 0; b < c; b++) {
				scanf_s("%d", &slot_datavalue[a][b]);
			}
		}
		printf("\nResult:\n");
		for (a = 0; a < c; a++) {
			add_values = 0;
			for (b = 0; b < c; b++) {
				add_values += slot_datavalue[b][a];
			}
			slot_datavalue[c][a] = add_values;
		}
		for (a = 0; a < c; a++) {
			add_values = 0;
			for (b = 0; b < c; b++) {
				add_values += slot_datavalue[a][b];
			}
			slot_datavalue[a][c] = add_values;
		}
		add_values = 0;
		for (a = 0; a < c; a++) {
			add_values += slot_datavalue[c][a];
		}
		slot_datavalue[c][c] = add_values;

		for (a = 0; a < c + 1; a++) {
			for (b = 0; b < c + 1; b++) {
				printf("%6d", slot_datavalue[a][b]);
			}
			printf("\n");
		}
	}
}
/***********************************************************************************************************
* exitFunction() method
* Method that is being utilized to close the program
***********************************************************************************************************/
void exitFunction()
{
	//declare local variables
	int yesNo;

	printf("\nWould you like to use another trainer?\n 1 for yes and 2 for no\n");
	scanf_s("%d", &yesNo);

	if (yesNo == 1)
	{
		globalContinue = 1; //For the user to use another math trainer
	}
	else
	{
		printf("\nExiting...\n");
		globalContinue = 3; //exiting while loop in main
		exit(0);
	}

}
/***********************************************************************************************************
* additionTrainer() function
* This function is one of the four math trainer functions. It is in simple stages currently and maybe be
* expanded upon to be more dynamic for the userings continued learning.
***********************************************************************************************************/
void additionTrainer()
{
	//declare local variables
	int correct = 0;
	int guess;

	printf("\nYou have to get four of these correct!\n");

	//while loop currectly gives four problems for the user to answer
	while (correct < 4)
	{
		printf("\n12 + 14 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (12 + 14)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct 
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n25 + 22 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (25 + 22)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n95 + 30 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (95 + 30)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n36 + 52 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (36 + 52)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}
	}
	exitFunction(); //calling exit function to close the project
}
/***********************************************************************************************************
* subtractionTrainer() function
* This function is one of the four math trainer functions. It is in simple stages currently and maybe be
* expanded upon to be more dynamic for the userings continued learning.
***********************************************************************************************************/
void subtractionTrainer()
{
	//declare local variables
	int correct = 0;
	int guess;

	printf("\nYou have to get four of these correct!\n");

	//while loop currectly gives four problems for the user to answer
	while (correct < 4)
	{
		printf("\n19 - 7 = ?\n"); //first problem
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (19 - 7)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n15 - 12 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (15 - 12)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n650- 325 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (650 - 325)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n98 - 36 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (98 - 36)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}
	}
	exitFunction(); //calling exit function to close the project

}
/***********************************************************************************************************
* multiplicationTrainer() function
* This function is one of the four math trainer functions. It is in simple stages currently and maybe be
* expanded upon to be more dynamic for the userings continued learning.
***********************************************************************************************************/
void multiplicationTrainer()
{
	//declare local variables
	int correct = 0;
	int guess;

	printf("\nYou have to get four of these correct!\n");
	//while loop currently gives four problems for the user to answer

	while (correct < 4)
	{
		printf("\n5 X 7 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (5 * 7)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n12 X 8 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (12 * 8)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n15 X 7 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (15 * 7)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n2 * 36 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (2 * 36)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}
	}
	exitFunction(); //calling exit function to close the project

}
/***********************************************************************************************************
* divisionTrainer() function
* This function is one of the four math trainer functions. It is in simple stages currently and maybe be
* expanded upon to be more dynamic for the userings continued learning.
***********************************************************************************************************/
void divisionTrainer()
{
	//declare local variables
	int correct = 0;
	int guess;

	printf("\nYou have to get four of these correct!\n");

	//while loop currectly gives four problems for the user to answer
	while (correct < 4)
	{
		printf("\n63 ÷ 7 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (63 / 7)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n24 ÷ 2 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (24 / 2)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n49 ÷ 7 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
		}
		else if (guess == (49 / 7)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}

		printf("\n36 ÷ 6 = ?\n"); //problem for user to solve
		if (scanf_s("%d", &guess) != 1)
		{
			printf("\nERROR: Not a numerial, exiting...");
			break;
		}
		else if (guess == (36 / 6)) //problem check
		{
			printf("correct\n");
			correct++; //interation of correct
			guess = 0;
		}
		else
		{
			printf("incorrect\n");
			guess = 0;
		}
	}

	exitFunction(); //calling exit function to close the project
}
/***********************************************************************************************************
* mathTrainer() function
* Gateway function that uses user inputs for traversing to additionTrainer(), subtractionTrainer(),
* multiplicationTrainer() and divisionTrainer()
***********************************************************************************************************/
void mathTrainer()
{
	//declare local variables
	int yesNo;
	int whatCase = 0;

	printf("\n");
	printf("\nWelcome to Math Trainer!\n");
	printf("\n");
	printf("\n");
	printf("Enter :\n1 for Addition trainer\n2 for Subtraction trainer\n3 for Multiplication trainer\n4 for Division trainer\n ");
	scanf_s("%d", &yesNo);

	if (yesNo == 1)
	{
		printf("Loading Addition trainer\n");
		whatCase = 1;
		yesNo = 0;
	}
	else if (yesNo == 2)
	{
		printf("Loading Subtraction trainer\n");
		whatCase = 2;
		yesNo = 0;
	}
	else if (yesNo == 3)
	{
		printf("Loading Multiplication trainer\n");
		whatCase = 3;
		yesNo = 0;
	}
	else if (yesNo == 4)
	{
		printf("Loading Division trainer\n");
		whatCase = 4;
		yesNo = 0;
	}
	else
	{
		printf("You have entered no\n"); // setting math type
		yesNo = 0;
	}

	switch (whatCase)
	{
	case 0:
		printf("\nYou didn't select any math training and exiting...");
		exitFunction();
	case 1:
		additionTrainer();
		break;
	case 2:
		subtractionTrainer();
		break;
	case 3:
		multiplicationTrainer();
		break;
	case 4:
		divisionTrainer();
		break;
	}

}
/***********************************************************************************************************
* checkToContinue() function
* This verifies that the user has successfully completed a *Trainer() function and allows for continuation
* of other Trainer() functions if the user wishes to.
***********************************************************************************************************/
void checkToContinue()
{
	if (globalContinue == 1)
	{
		mathTrainer();
		globalContinue = 1;
	}
	else
	{
		globalContinue = 3;
	}
}
/********************************************************************************************************
* main() function
********************************************************************************************************/
int main()
{
	introPrinter();
	noteFromDianaBy();
	printf("Reading from file\n");
	DBFile_Read();

	printf("\nPress any key to continue...\n");
	_getch();
	system("cls");

	DBFile_write();
	DBFile_Read();
	Info_teachers();
	Student_Input();
	AddisFun();

	while (globalContinue != 3)
	{
		checkToContinue();
	}
	return 0;
}