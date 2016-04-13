#include <iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include "People.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void addPeople(vector <People>&);
void most_NumberOfPeopleAlive(vector<People> people, int startYear, int endYear);

int main()
{
	int startYear, endYear, peopleCount;
	
	cout << "Enter the starting year:" << endl;
	cin >> startYear;
	cout << "Enter the ending year:" << endl;
	cin >> endYear;
	vector <People> peopleVector;
	addPeople(peopleVector);
	cout << "The years with the most number of people alive: "<< endl;
	most_NumberOfPeopleAlive(peopleVector, startYear, endYear);
	return 0;
}

// Filling People vector with birth and death year
void addPeople(vector <People>&newPeopleClass)
{
	int bYear, dYear, peopleCount;
	cout << "Enter the number of people:" << endl;
	cin >> peopleCount;
	for (int i = 0; i < peopleCount; i++)
	{
		cout << "Enter the birth year:" << endl;
		cin >> bYear;
		cout << "Enter the death year:" << endl;
		cin >> dYear;
		People newPeople(bYear, dYear);
		newPeopleClass.push_back(newPeople);
	}
};

//function to find the years with the most number of people alive
void most_NumberOfPeopleAlive(vector<People> people, int startYear, int endYear)
{
	//function to find the years with the most number of people alive
	int range = endYear - startYear;
	int *tempRangeArray;
	tempRangeArray = new int[range] { 0 };
	int max = 0;
	int i, j, k;
	// People alive years calculation
	for (People p : people)
	{
		for (i = p.getBirthYear(); i <= p.getDeathYear(); ++i)
		{
			int k = i - startYear;
			tempRangeArray[k]++;
		}
	}
	// Finding the years with the most number of people alive 
	for (j = 0; j < range; ++j)
	{
		if (tempRangeArray[j]> max)
			max = tempRangeArray[j];
	}
	// Displaying the years with the most number of people alive
	for (k = 0; k < range; ++k)
	{
		if (tempRangeArray[k] == max)
			cout << startYear + k << endl;
	}
	delete[] tempRangeArray;
}