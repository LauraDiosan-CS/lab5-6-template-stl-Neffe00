#pragma once
#include "RepoFile.h"
#include "Repo.h"
#include "Cookie.h"
#include <vector>

class Service {
private:

	Repo<Cookie>* repo;
public:
	Service();
	Service(Repo<Cookie>*& repo);
	~Service();

	void setRepo(vector <Cookie> v);

	void addCookie(int id, const char* name, const char* ingredients, double price);
	Cookie getCookie(int pos);

};