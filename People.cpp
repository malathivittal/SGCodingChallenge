#include "People.h"

People::People()
{
	birthYear = 0;
	deathYear = 0;
}

People::People(int birth, int death)
{
	setBirthAndDeathYears(birth, death);
}
void People::setBirthAndDeathYears(int birth, int death)
{
	birthYear = birth;
	deathYear = death;
}
int People::getBirthYear() const
{
	return birthYear;
}
int People:: getDeathYear() const
{
	return deathYear;
}
People::~People()
{
}
