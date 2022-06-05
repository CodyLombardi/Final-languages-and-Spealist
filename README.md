# Final-languages-and-Spealist

Team Name: MindingCoder’s
Name: Ciara Jones/ Cody Lombardi
Date:06/01/2022

The problem we are solving in this program is determining the matches for each participant based on language fluency and specialization. While also displaying the matched probability. The solutions implemented in this program determine the country for which language option is chosen. In this case, the University of California Riverside annually selects 100 graduates to participate in the Doctors without Borders program. These physicians are matched based on specialized areas, language fluency, and preferences. Each pair of participants are given the opportunity to aid on-site physicians for 60 days. Currently, Doctors without Borders expand to over 10 countries.
 
We used # include iostream to output each option: What language are you fluent in, Language option as well as each language to choose from, What is your specialization along with specializations to choose from, and your chosen country. We used the #include string to identify each country that would match a specific language. Each of the following was used for calculation: #include <cstdlib>#include <ctime>#include <cmath>#include <time.h>. #include <stdio.h> was used to perform various function for input and output. To make sure that the outcome was random for the user we used a void generator for each choice. Integers used were choice and second choice to determine each option choice. The switch statement allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each case. We used char type to store characters and letters for the specialization. Lastly, we used srand(time(0)); // to Initialize the random number generator for the program to initialize the random seed. As well as the probability from the multiplication of the given languages and specializations which is five languages and five specializations. The calculations that were used to solve this program included multiplication and division to provide an accurate probability for the program to run correctly.
The program's objective is to match physicians around the world to come together and help each other in a specific region. When the user picks the language they are fluent in and specialization, the program will connect them with the correct country they will be directed to go to for their knowledge and skills. Discrete structures are implemented in our C++ program by using relations, rational numbers, and functions. The limitations in our program include, only matching a language with a country and picking one medical specialization. To improve these limitations we recommend building a code within this code that would help the user choose more than one specialization and be able to have more than one option in language fluency for those who are fluent in many languages. 

START

//Declare variables
int choice;
int secondChoice;

PRINT "What language are you fluent in?"

//Used to create space
PRINT " "

//Prnts out list of different language options
PRINT "Language Options:"
PRINT "========================"

PRINT "1. English"
PRINT "2. Spanish"
PRINT "3. Mandarin Chinese"
PRINT "4. French"
PRINT "5. Arabic"
//Used to create space
PRINT " "

//
READ "You have chosen: choice"

//Switch statement used for the different language options
SWITCH(choice-1)
CASE 0:
PRINT "You have chosen English."
BREAK → PRINT "What is your specialization?: "


CASE 1:
PRINT "You have chosen Spanish."
BREAK → PRINT "What is your specialization?: "

CASE 2:
PRINT "You have chosen Mandarin Chinese."
BREAK → PRINT "What is your specialization?: "

CASE 3:
PRINT "You have chosen French."
BREAK → PRINT "What is your specialization?: "

CASE 4:
PRINT "You have chosen Arabic."
PRINT "What is your specialization?: "


//Used to create space
PRINT " "

//Prints out list of specializations
PRINT "Specialization Options:"
PRINT "=========================="

PRINT "1. Dermatology"
PRINT "2. Allergy and Immunology"
PRINT "3. Cardiology"
PRINT "4. Anesthesiology"
PRINT "5. Endocrinology"


//Used to create space
PRINT " "

//User enters specialization
READ "You have chosen: secondChoice"

//Switch statement used for the different options for switch(secondChoice


char (spealization);
SWITCH(spealization)
CASE 1:
PRINT "You have chosen Dermatology."
BREAK → PRINT "Your chosen country is: countries"

CASE 2:
PRINT "You have chosen Allergy and Immunology."
BREAK → PRINT "Your chosen country is: countries"

CASE 3:
PRINT "You have chosen Cardiology."
BREAK → PRINT "Your chosen country is: countries"

CASE 4:
PRINT "You have chosen Anesthesiology."
BREAK → PRINT "Your chosen country is: countries"

CASE 5:
PRINT "You have chosen Endocrinology."
BREAK → PRINT "Your chosen country is: countries"
generator (choice);

PRINT "The sample space is amount of languages multiplied by"
PRINT "number of specializations = 5 * 5 = 25"
PRINT " "
PRINT "The probability of choosing one language"
PRINT "and one occupation is 1/25 which is about 0.04%"

STOP
