#include "Service.h"

Service::Service()
{
}

Service::~Service()
{
}


void Service::addCookie(int id, const char* name, const char* ingredients, double price)
{
	this->repo->addCookie(Cookie(id, name, ingredients, price));
}


Cookie Service::getCookie(int pos)
{
	return this->repo->getCookie(pos);
}