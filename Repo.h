#pragma once
#include "Cookie.h"
#include<vector>

//Class Repo
class Repo 
{
private:
	vector <Cookie> cookies;

public:
// Constructor
// In: -
// Out: an empty object of type Repo
	virtual Repo();

// Desonstructor
// In: an object of type Repo
// Out: -
	virtual ~Repo();


// getter
// In: an object of type Repo
// Out: the size of the Repo
	virtual int getSize();

// method - adds an object of type Cookie in Repo
// In: an object of type Cookie
// Out: -
	virtual void addCookie(const Cookie c);

// method - return an object of type Cookie from Repo at position pos
// In: the pos(int) of an object, the object of type Cookie
// Out: the object of type Cookie
	virtual Cookie getCookie(int pos);

	virtual vector<Cookie> getCookies() {
		return this->cookies;
	}


// method - update an object of type Cookie in Repo
// In: the pos(int) of an object, the object of type Cookie
// Out: -
	virtual void updateCookie(Cookie& oldCookie, Cookie& newCookie);


// method - delete an object of type Cookie in Repo
// In: the pos of an object (of type Cookie) that will be deleted
// Out: -
	virtual void deleteCookie(Cookie& c);
};