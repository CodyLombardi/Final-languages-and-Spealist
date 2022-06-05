

//Needed to use string function
#include <string>

#include <iostream>
//Needed to use random number generator
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <time.h>
#include <stdio.h>

using namespace std;

void generator(int choice);
//Always needed to start every program
int main()
{
int choice;
int secondChoice;

cout << "What language are you fluent in?"<<endl;

cout<< " "<<endl;

cout << "Language Options:"<<endl;
cout<< "========================"<<endl;

cout << "1. English"<<endl;
cout<< "2. Spanish"<<endl;
cout<< "3. Mandarin Chinese"<<endl;
cout << "4. French"<<endl;
cout<< "5. Arabic"<<endl;

cout <<" "<<endl;

cin >> choice;

switch(choice-1)
{
case 0:
cout << "You have chosen English."<<endl;
break;

case 1:
cout << "You have chosen Spanish."<<endl;
break;

case 2:
cout << "You have chosen Mandarin Chinese."<<endl;
break;

case 3:
cout << "You have chosen French."<<endl;
break;

case 4:
cout << "You have chosen Arabic."<< endl;
}

cout <<" "<<endl;

cout << "What is your specialization?: "<<endl;


cout << "Specialization Options:"<<endl;
cout <<"=========================="<<endl;

cout << "1. Dermatology"<<endl;
cout<< "2. Allergy and Immunology"<<endl;
cout<< "3. Cardiology"<<endl;
cout << "4. Anesthesiology"<<endl;
cout<< "5. Endocrinology"<<endl;


cout <<" "<<endl;

cin >> secondChoice;


char (spealization);
switch(secondChoice)
{
case 1:
cout << "You have chosen Dermatology."<<endl;
break;

case 2:
cout << "You have chosen Allergy and Immunology."<<endl;
break;

case 3:
cout << "You have chosen Cardiology."<<endl;
break;

case 4:
cout << "You have chosen Anesthesiology."<<endl;
break;

case 5:
cout << "You have chosen Endocrinology."<<endl;
break;
}
generator (choice);
return 0;
}


void generator(int choice)
{
std::string countries[10][5] =
{{"United Kingdom", "Canada", "Ireland", "Australia", "Jamaica"},
{"Argentina","Bolivia","Chile","Colombia","Costa Rica"},
{"China","taiwan","Singapore","Macau","Hong Kong"},
{"India","Bangladesh","Bengal","Tripura","Assam"},
{"Egypt","Sudan","Algeria","Iraq","Morocco"},
};

srand(time(0));
{
int index = (rand() % 5);
cout <<" "<<endl;
cout <<"Your chosen country is: "<<countries[choice-1][index]<<endl<<endl;
cout << "The sample space is amount of languages multiplied by\n";
cout <<"number of specializations = 5 * 5 = 25"<<endl;
cout <<" "<<endl;
cout << "The probability of choosing one language \n";
cout<< "and one occupation is 1/100 which is about 1.43%"<<endl;
}
}