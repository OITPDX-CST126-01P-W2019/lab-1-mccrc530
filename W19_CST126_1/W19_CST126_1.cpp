// W19_CST126_1.cpp : Cyclomatic Complexity
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

}

// Here are the steps I took when I did the lab.  They are just suggestions.  Please do work incrementally.
//  Made sure I could open the file.
//		Checked for a successful open
//      Had default cout of cout << "Do the work here" << endl;
//      and then closed.
//  Added declaration for a function to process the file
//  added function body which had cout << "Do the work here" << endl;
//  Made constants for my search keywords 
//  added read loop which just did a cout of what it read.  (which I got rid of eventually)
//  counted my variables of the four types within my function.
//	   Did a simple printout in the function.
//  Took a break.  I have a program that is at a good stopping point because I compiled and saved at each step.
//  added a count for all the tokens read.  
//    Hint: if you slightly more than 83 words on the test file, check to make sure you didn't add any extra spaces or 
//       extra new lines.   If you have a lot more then 83 words, check to be sure that your count is at the right loop level.
//  Added a struct with just the filename.   This included adding a new .h and a new .cpp 
//   refactored the program so that my open function passed in a string with the filename
//  Changed the Process File Routine to take my new structure.  Printed out the file name only.
//    moved my total count variable into the structure.  
//    move my keyword count variable (I'm using an array) to the structure.
//       this included creating an initialization method within my structure.
//    moved the printing out of my processing routine and into a print method within the structure.
//