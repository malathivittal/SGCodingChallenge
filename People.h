#pragma once
class People
{
	int birthYear;
	int deathYear;
public:

	People();
	People(int birth, int death);
	void setBirthAndDeathYears(int birth, int death);
	int getBirthYear() const;
	int getDeathYear() const;
	~People();
};