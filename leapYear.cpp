//============================================================================
// Name        : leapYear.cpp
// Author      : sc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#ifndef MARMOSET_TESTING
int main();
#endif

bool is_leap_year(int year);

#ifndef MARMOSET_TESTING
int main() {
     int input_year=0;

     std::cout<<"Please enter a year."<<std::endl;
     std::cin>>input_year;

     if(is_leap_year(input_year))
    	 std::cout<<input_year<<" is a leap year!"<<std::endl;
     else
    	 std::cout<<input_year<<" is not a leap year!"<<std::endl;

     return 0;
}
#endif

bool is_leap_year(int year){
   if (year >= 1582){
	   if(year%400 == 0){
		   return true;
	   }
	   else{
		   if(year%4 ==0 ){
			   if(year%100 == 0){
			     return false;
			   }
               else{
               return true;
			   }
		   }
		   else{
			   return false;
		   }
	   }
   }
   else{
	   return false;
   }
}
