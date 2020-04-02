#pragma once
#include "Vector.h"
#include "Cookie.h"
//Class Repo
class Repo 
{
private:
	Vector <Cookie> cookies;

public:
// Constructor
// In: -
// Out: an empty object of type Repo
	Repo();

// Desonstructor
// In: an object of type Repo
// Out: -
	~Repo();


// getter
// In: an object of type Repo
// Out: the size of the Repo
	int getSize();

// method - adds an object of type Cookie in Repo
// In: an object of type Cookie
// Out: -
	void addCookie(const Cookie c);

// method - delete an object of type Cookie in Repo
// In: the pos of an object (of type Cookie) that will be deleted
// Out: -
	void delCookie(int pos);

// method - update an object of type Cookie in Repo
// In: the pos(int) of an object, the object of type Cookie
// Out: -
	void updateCookie(int pos, const Cookie& c);

// method - return an object of type Cookie from Repo at position pos
// In: the pos(int) of an object, the object of type Cookie
// Out: the object of type Cookie
	Cookie getCookieByPos(int pos);
};