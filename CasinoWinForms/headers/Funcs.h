#ifndef FUNCS
#define FUNCS

#include <string>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

//CONVERTING//
std::string& Convert_String_to_string(String^ s, std::string& os); 
String^ Convert_string_to_String(std::string& os, String^ s); 
std::string& Convert_String_to_string(String^ s);
String^ Convert_string_to_String(std::string& os);
System::String^ Convert_char_to_String(char* ch); 
char* Convert_String_to_char(System::String^ string); 

//GUEST CLASS/
class Guest {
private:
	std::string name = "";
	int age = 0;
	int cash = 0;
	int tokens = 0;
public:
	Guest() {};
	void SetGuestName(std::string name);
	void SetGuestAge(int age);
	void SetGuestCash(int cash);
	void SetGuestTokens(int tokens);
	std::string GetGuestName();
	int GetGuestAge();
	int GetGuestCash();
	int GetGuestTokens();
};

#endif
