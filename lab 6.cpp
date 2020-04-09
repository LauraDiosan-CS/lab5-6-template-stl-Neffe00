#include<iostream>
#include<fstream>

#include "Tests.h"
#include "Repo.h"

using namespace std;

int main()
{
	testCookie();
	testRepo();
	testService();

	Repo<Cookie>* repo;
	repo = new RepoFile < Cookie>("fisier.text");

	Service serv(repo);
	
	delete repo;

	return 0;
}