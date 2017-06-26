// Class_Variables.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class MyClass {
	public:
		//Function to Set Set name
		void setName(string x) {
			name = x;
		}
		//Function to return the name
		string getName() {
			return name;
		}
	//Typically you want to make all variables in your class private
	private:
		string name;
};

int main()
{
	MyClass MyObject;
	MyObject.setName("Gurpal Singh");
	cout << MyObject.getName() << endl;
	
    return 0;
}

