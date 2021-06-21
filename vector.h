#pragma once

#include <ostream>
#include <istream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>




using std::ofstream;
using std::ifstream;
using std::cin;
using std::cout;
using std::string;
using std::istringstream;
using std::ostringstream;
using std::vector;
using std::sort;



class stack
{

	int value;
	stack* previous;
	


public :
	

	stack(int value, stack* previous = nullptr)
	{	

		this->value = value;
		this->previous = previous;

	}




	void pop();
	void push(int value);
	void search(int value);


	void print()
	{
		
		if (this->previous == nullptr)
			return;
		
		cout << this->previous->value;
	}

};


