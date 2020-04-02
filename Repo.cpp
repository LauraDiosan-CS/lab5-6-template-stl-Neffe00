#include "Repo.h"

Repo::Repo() {
}
Repo::~Repo() {
}


int Repo::getSize()
{
	return this->cookies.getSize();
}

void Repo::addCookie(const Cookie c)
{
	this->cookies.addElem(c);
}
void Repo::delCookie(int pos)
{
	this->cookies.deleteElem(pos);
}
void Repo::updateCookie(int pos, const Cookie& c)
{
	this->cookies.deleteElem(pos);
}
Cookie Repo::getCookieByPos(int pos)
{
	return this->cookies.getElemPos(pos);
}
