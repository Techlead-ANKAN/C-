// C++ Strings 

// These are a seqeunce of characters that are stored inside double quotes.

#include <iostream>
using namespace std;

int main() 
{
	string txt = "Ankan Maity";
	cout<<txt<<"\n";
	
	// Accessing Strings
	cout<<"Character at index 7: "<<txt[7]<<"\n\n"; 
	
	string sample = "Hello";
	
	// String Methods in C++ :
	
	// 1) .append()	-->	Adds string or character at the end of the string.
	sample.append(" World");
	cout<<"1) sample = "<<sample<<"\n";
	
	// 2) .at(index) --> Returns the character at the specified index.
	cout<<"2) Character at index 3: "<<sample.at(3)<<"\n";
	
	// 3) .clear() --> Removes all character from the string
	string str3 = "Ankan";
	str3.clear();
	cout<<"3) Str3 = "<<str3<<"\n";
	
	// 4) <string1>.compare(<string2>) -->	Compares the two strings
	cout<<"4) Comparision result: "<<sample.compare(str3)<<"\n";
	
	// 5) .length --> Returns the length of the string.
	cout<<"5) Length of sample: "<<sample.length()<<"\n";
	
	// 6) <string>.substr(<start>, <no.of characters to copy>)	-->	It is used to extract a part of the string.
	cout<<"6) Substring of Hello World: "<<sample.substr(2, 4)<<"\n";
	
	// 7) <string>.replace(<start>, <no.of characters to replace from start>, "<new_string>") --> Replaces the a certain no.of characters from the start with a new string.
	string str7 = "123456789";
	str7.replace(2, 4, "ABCD");
	cout<<"7) After replacing str = :"<<str7<<"\n";
	
	// 8) <string>.find("srch_string')	-->	 Checks whether the given strings is present insdie another string or not and returns the starting index.
	cout<<"8) Searching World in sample: "<<sample.find("World")<<"\n";
	
	// 9) <string>.erase(<start>, <no.of characters to erase>)	-->	It is used to erase a part of the string.
	cout<<"6) Erasing of Hello World: "<<sample.erase(2, 4)<<"\n";
	
	// 10) <string>.insert(<start>, <no.of characters to insert>)	-->	It is used to insert characters to a string.
	sample.insert(2, "llo ");
	cout<<"6) Inserting characters to HeWorld: "<<sample<<"\n";
	
	// 11) <string>.empty()	-->	 Checks if the string is ermpty.
	cout<<"11) Checking empty or not: "<<sample.empty()<<"\n";
	
	// 12) 
}	

