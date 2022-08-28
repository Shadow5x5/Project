#pragma once
#include <string>
class Animal
{
private:
	std::string Title;
	float Weight;
	float Length;
	float Width;
	float Health;
	int Age;
	bool Gender;
	
public:

	std::string getTitle() {
		return Title;
	}
	void setTitle(std::string text) {
		this->Title = text;
	}
};

