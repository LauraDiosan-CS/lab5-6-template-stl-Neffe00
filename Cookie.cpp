#include "Cookie.h"
#include<string.h>

Cookie::Cookie()
{
	this->id = 0;
	this->name = NULL;
	this->ingredients = NULL;
	this->price = 0;
}
Cookie::Cookie(int id, const char* n, const char* i, double p)
{
	this->id = id;

	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, 1 + strlen(n), n);

	this->ingredients = new char[strlen(i) + 1];
	strcpy_s(this->ingredients, 1 + strlen(i), i);

	this->price = p;
}

Cookie::~Cookie()
{
	if (this->name != NULL)
	{
		delete[] this->name;
		this->name = NULL;
	}

	if (this->ingredients != NULL)
	{
		delete[] this->ingredients;
		this->ingredients = NULL;
	}
}

int Cookie::getId()
{
	return this->id;
}
char* Cookie::getName()
{
	return this->name;
}
char* Cookie::getIngredients()
{
	return this->ingredients;
}
double Cookie::getPrice()
{
	return this->price;
}

void Cookie::setId(int newId)
{
	this->id = newId;
}
void Cookie::setName(const char* newName)
{
	if (this->name)
	{
		delete[] this->name;
	}
	this->name = new char[strlen(newName) + 1];
	strcpy_s(this->name, strlen(newName) + 1, newName);
}
void Cookie::setIngredients(const char* newIngredients)
{
	if (this->ingredients)
	{
		delete[] this->ingredients;
	}
	this->ingredients = new char[strlen(newIngredients) + 1];
	strcpy_s(this->ingredients, strlen(newIngredients) + 1, newIngredients);
}
void Cookie::setPrice(double newPrice)
{
	this->price = newPrice;
}

Cookie& Cookie::operator=(const Cookie& c)
{
	this->setId(c.id);
	this->setName(c.name);
	this->setIngredients(c.ingredients);
	this -> setPrice(c.price);

	return*this;
}
bool Cookie::operator==(const Cookie& c)
{
	return(this->id == c.id);
}
ostream& operator<<(ostream& os, const Cookie& c)
{
	os << c.id << " " << c.name << " " << c.ingredients << " " << c.price << endl;
	return os;
}