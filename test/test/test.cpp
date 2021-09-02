#include <iostream>

int main() {
	char c = 0x41424344; //char is one byte but 4 byte is being assigned   
	// This resulted in 'D'

	short s = 0x10001000; //4 bytes 4 bytes are assigned
	// Resulted in 4096 because that value that is stored in s is that in decimal

	int  i = 'A'; //A is interpreted as asci code  ( man ascii can hive you the entire ascii code conversion )
	//41  it means int i takes the value of 41 in hex 
	unsigned int u = -1;
	//twos compliment 
	printf("'%c',%d , %x, %x\n", c, s, i, u);

	// %c prints char %d prints int %x prints hexa


}





//Hex goes form 0-9 A-F
//0x indicated hexadecimal ( it is an indicator)  
// An example is 0xCD => 1100 1101  ( Hexa into binary)  
// Char 1 byte short 2 byte know the byte values  each
// & | and ~ are bit wise operators as they do compliments a stuff like that 

// In C there is no true false it only puts on 1 / 0 

//Boolean Expressions
// !(0) will result in 1
// 0 || 2 will result in 1 
// 3 && 0 %% 6 will result in 0 this one short circuits 
// !(12345) = 0
// !!(-1020) will reult in 1 the right most value gets evaluted first


//! Control Structures
//! if else
//! switch case
//! while for do-while
//! continue break

//! Variables
//! Must declare before you use it
//! Delcaration implicitly allocates space for the data
//!  >That is not ture in java
//! 



//Preprocessing
//! Comes before you compile the sources code
//! its the text manipulation stage
//! Preprocessor directives exist for
//!		Text Substitution
//!		Macros
//!		Conditional Compilations
//!	directives start with '#'
//! -E tells your compilier gcc to stop right after preprocessing and to show you the reult
//! It relplace the line wiht the files that is called
//! #define allows to you premap 


//! Functions 
//! Delcaration vs Definition
//! When you delcare a method in java you usually define when you declare
//! but for C you declare and it tells you what it takes and returns
//!The definition is the function
//! You can have many delcaration for the function but you can only have one definition
//! A function can be declared multiple times
//! Declarations reside in header (.h) files
//! Definitions reside in source(.c) files
//! (These things are really just suggestions and not requirements)
//! 
