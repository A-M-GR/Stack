
#include <ostream>
#include <istream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>


#include "vector.h"
using std::ofstream;
using std::ifstream;
using std::cin;
using std::cout;
using std::string;
using std::istringstream;
using std::ostringstream;
using std::vector;
using std::sort;









stack* head = new stack(-1);


void stack::pop()
{

	stack* temp = nullptr;
	if (head->previous == nullptr)
		return;
	
	temp = head->previous;
	head->previous = head->previous->previous;
	
	temp->previous = nullptr;
	delete temp;
	
	
}

void stack::push(int value)
{


	if (head->previous == nullptr)

	{
		stack* new_node = new stack(value);
		head->previous = new_node;
		return;
	}

	stack* new_node = new stack(value);

	new_node->previous = head->previous;
	head->previous = new_node;
}


void stack::search(int value)
{

	stack* temp;
	temp = head;
	temp->value = 20;

	while (temp->previous != nullptr)
	{
		if (temp->previous->value == value)
		{
			cout << "we find it";
			delete temp;
			return;
		}


		temp = temp->previous;
	}

	delete temp;
	
}





int main()

{
	head->push(5);
	head->push(30);

	head->push(600);
	head->print();
	head->pop();
	cout << "\n";
	
	head->search(5);



	return 0;

}


