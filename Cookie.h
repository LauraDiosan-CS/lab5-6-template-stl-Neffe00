#pragma once

#include<ostream>
using namespace std;

class Cookie
{
private:
	int id;
	char* name;
	char* ingredients;
	double price;

public:


// Constructor
// In: -
// Out: an empty object of type Cookie
	Cookie();

// Constructor with parameters
// In: id-int(id-ul), n-string(numele), i-string(ingredientele), p-double(pretul)
// Out: an object of type Cookie that contains the given info
	Cookie(int id, const char*n, const char*i, double p);

// Desonstructor
// In: an object of type Cookie
// Out: -
	~Cookie();

// getter
// In: an object of type Cookie
// Out: id of the Cookie
	int getId();

// getter
// In: an object of type Cookie
// Out: name of the Cookie
	char* getName();

// getter
// In: an object of type Cookie
// Out: ingredients of the Cookie
	char* getIngredients();

// getter
// In: an object of type Cookie
// Out: price of the Cookie
	double getPrice();


// setter
// In: an object of type Cookie and a id (int)
// Out: the same object with a new id
	void setId(int newId);

// setter
// In: an object of type Cookie and a name (string)
// Out: the same object with a new name
	void setName(const char* newName);

// setter
// In: an object of type Cookie and a ingredients (string)
// Out: the same object with a new ingredients
	void setIngredients(const char* newIngredients);

// setter
// In: an object of type Cookie and a price (double)
// Out: the same object with a new price
	void setPrice(double newPrice);

// assignment operator
// In: two objects of type Cookie (the current one, this, and c)
// Out: the new state of the current object (this)
	Cookie& operator=(const Cookie& c);

// comparator
// In: two objects of type Cookie (this and c)
// Out: true or false
	bool operator==(const Cookie& c);
	friend ostream& operator<<(ostream& os, const Cookie& s);
};
