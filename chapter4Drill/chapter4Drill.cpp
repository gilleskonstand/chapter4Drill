// chapter4Drill.cpp : Defines the entry point for the console application.
//
/*
1. Write a program that consists of a while-loop that (each time around the loop)
   reads in two ints and then prints them. Exit the program when a terminating '|' is entered.
2. Change the program to write out the smaller value is: followed by the smaller
   of the numbers and the larger value is: followed by the larger value.
3. Augment the program so that it writes the line the numbers are equal (only) if they are equal.
4. Change the program so that it uses doubles instead of ints.
5. Change the program so that it writes out the numbers are almost equal
   after writing out which is the larger and the smaller if the two numbers differ by less than 1.0/100.
6. Now change the body of the loop so that it reads just one
   double each time around. Define two variables to keep track of which
   is the smallest and which is the largest value you have seen so far.
   Each time through the loop write out the value entered. If it’s the smallest so far,
   write the smallest so far after the number. If it is the largest so far, write the largest so far after the number.
7. Add a unit to each double entered; that is, enter values such as 10cm,
   2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft.
   Assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in. Read the unit indicator into a string.
   You may consider 12 m (with a space between the number and the unit) equivalent to 12m (without a space).
8. Reject values without units or with “illegal” representations of units, such as y, yard, meter, km, and gallons.
9. Keep track of the sum of values entered (as well as the smallest and the largest) and
   the number of values entered. When the loop ends, print the smallest, the largest,
   the number of values, and the sum of values. Note that to keep the sum,
   you have to decide on a unit to use for that sum; use meters.
10. Keep all the values entered (converted into meters) in a vector. At the end, write out those values.
11. Before writing out the values from the vector, sort them (that’ll make them come out in increasing order).
*/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>  
#include <math.h>
#include <omp.h>  //get stuff to run in paralell... not now but later ( race conditions and all )
#include <algorithm> // what is the standerd library for soort algorithm

using namespace std;
double smallest = 0;
double largest = 0;
double input = 0;
double counter = 1;
double total = 0;
string input_unit = "B";

double diff_smalest = 0;
double diff_largest = 0;


void Check_witch_is_bigger(double input_double, double input_smallest , double  input_largets);
void conver_to_mm(double input_double,string input_type);

class WorkWithStrings {
public:
	void PrintToScreen(string in_string) {
		cout << " " << in_string << endl;
	 }
	void PrintToScreen(double in_string) {
		cout << " " << in_string << endl;
	}
	void PrintToScreen(int in_string) {
		cout << " " << in_string << endl;
	}
	void PrintToScreen(char in_string) {
		cout << " " << in_string << endl;
	}
};

//int main(int argc, char **argv)
int main()
{
	while (!cin.eof()){
		MyWorkString.PrintToScreen("exit if you give this 909090  ");
		MyWorkString.PrintToScreen("firstinverable :");
		cin >> input >> input_unit;
		//if input is valid integer then..
		if (!cin.good()) {
				MyWorkString.PrintToScreen("Invalid Input. Entry must be an integer.");
				cin.clear();
				input = 0.0;
				cin.ignore(std::numeric_limits<streamsize> ::max(), '\n');
			}
		else
		{
			if (input == 909090) {
				MyWorkString.PrintToScreen("cin is a break on the while loop :");
				break;
			}
			//testing if user typed any other variation of letter & integers, etc., then displaying error message
			else
			{ 
				
				//how to we check of firts or secod is bigger ... another if statment ....
				Check_witch_is_bigger(input,smallest,largest);
				
			}
		}
	};

    return 0;
}


void Check_witch_is_bigger(double input_double, double input_smallest, double input_largets)
{
	if (counter == 1) { 
		smallest = input; 
		largest = input; 
		counter = counter + 1;
	 } ;

	diff_smalest = input - smallest;
	diff_largest = input - largest;

	// need to fin a better way to di salest and largest in one go !
	// Should only be one line of code 

	if (diff_largest >= 0)
	{
		MyWorkString.PrintToScreen("largest so far: ");
		MyWorkString.PrintToScreen( input );
		//cout << " largest so far: " << input << endl;
		largest = input;
	}
	else {
		cout << " stil the largest : " << largest << endl;
	}

	if (diff_smalest <= 0)
	{
		cout << " Smalest so far: " << input << endl;
		smallest = input;
	}
	else {
		cout << " stil the smalest : " << smallest << endl;
	}

}

void conver_to_mm(double input_double, string input_type) 
{/*
	switch (input_type)
	{
	default:
		break;
	}
	*/
	cout << "Finction conver_to_mm" << endl;
	
};

