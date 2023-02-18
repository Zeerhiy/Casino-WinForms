#include "../headers/funcs.h"

//CONVERTING//
std::string& Convert_String_to_string(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

String^ Convert_string_to_String(std::string& os, String^ s) {
	s = gcnew System::String(os.c_str());

	return s;
}

std::string& Convert_String_to_string(String^ s) {
	std::string os;
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

String^ Convert_string_to_String(std::string& os) {
	System::String^ s = gcnew System::String(os.c_str());

	return s;
}

System::String^ Convert_char_to_String(char ch) {
	char* chr = new char();
	chr[0] = ch;
	System::String^ str;
	for (int i = 0; chr[i] != '\0'; i++)
		str += wchar_t(ch);
	return str;
}

char* Convert_String_to_char(System::String^ string) {
	using namespace System::Runtime::InteropServices;
	return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}

System::String^ Convert_char_to_String(char* ch) {
	char* chr = new char();
	chr = ch;
	System::String^ str;
	for (int i = 0; chr[i] != '\0'; i++)
		str += wchar_t(ch[i]);
	return str;
}

//GUEST CLASS//
void Guest::SetGuestName(std::string name)
{
	this->name = name;
}
void Guest::SetGuestAge(int age)
{
	this->age = age;
}
void Guest::SetGuestCash(int cash)
{
	this->cash = cash;
}
void Guest::SetGuestTokens(int tokens)
{
	this->tokens = tokens;
}
std::string Guest::GetGuestName()
{
	return this->name;
}
int Guest::GetGuestAge()
{
	return this->age;
}
int Guest::GetGuestCash()
{
	return this->cash;
}
int Guest::GetGuestTokens()
{
	return this->tokens;
}
