#include <iostream>
#include <map>
using namespace std;

int main()
{
	// auto use to take value of different data type
	auto IntVar = 5;
	auto charVar = 'a';
	auto stringVar = "Hello";
	auto floatVar = 10.20;


	// Less code when iterater is require
	std::map<std::string, std::string> mapObj;
	mapObj.insert(std::pair<std::string, std::string>("val1", "1"));
	mapObj.insert(std::pair<std::string, std::string>("val2", "2"));
	mapObj.insert(std::pair<std::string, std::string>("val3", "3"));

	std::map<std::string, std::string>::iterator it = mapObj.begin();
	while (it != mapObj.end())
	{
		//std::cout<< (it->first) << "::" << (it->second) << endl;
		it++;
	}

	// Iterate using auto
	auto itr = mapObj.begin();
	while (itr != mapObj.end())
	{
		//cout << itr->first << "::" << itr->second << std::endl;
		itr++;
	}


	return 0;
}