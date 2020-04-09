#include "Repo.h"
#include<fstream>

Repo::Repo() 
{
}

Repo::~Repo() 
{
	this->cookies.clear();
}


int Repo::getSize()
{
	return this->cookies.size();
}

void Repo::addCookie(const Cookie c)
{
	this->cookies.push_back(c);
}

vector <Cookie> Repo::getCookies()
{
	return this->cookies;
}

Cookie Repo::getCookie(int pos)
{
	return this->cookies[pos];
}

void Repo::updateCookie(Cookie& oldCookie, Cookie& newCookie)
{
	for (int i = 0; i < this->cookies.size(); i++)
	{
		if (this->cookies[i] == oldCookie)
			this->cookies[i] =  newCookie;
	}
}

void Repo::deleteCookie(Cookie& c)
{
	for (int i = 0; i < this->cookies.size(); i++)
	{
		if (this->cookies[i] == c)
		{
			this->cookies[i] = this->cookies[this->cookies.size() - 1];
			this->cookies.pop_back();
		}
	}
}