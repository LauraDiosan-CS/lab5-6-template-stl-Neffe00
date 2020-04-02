#include "Tests.h"
#include "Cookie.h"
#include "Repo.h"

#include <assert.h>

#include<iostream>
using namespace std;

void testCookie()
{
	Cookie c1(1, "numePrajitura1", "ingrediente1", 20.5);

	assert(c1.getId() == 1);
	assert(strcmp(c1.getName(), "numePrajitura1") == 0);
	assert(strcmp(c1.getIngredients(), "ingrediente1") == 0);
	assert(c1.getPrice() == 20.5);

	Cookie c2;
	c2.setId(2);
	c2.setName("numePrajitura2");
	c2.setIngredients("ingrediente2");
	c2.setPrice(40.5);

	assert(c2.getId() == 2);
	assert(strcmp(c2.getName(), "numePrajitura2") == 0);
	assert(strcmp(c2.getIngredients(), "ingrediente2") == 0);
	assert(c2.getPrice() == 40.5);

	//cout << c1 << c2;

	assert(!(c1 == c2));
	c1 = c2;
	assert(c1 == c2);

	cout << "Cookie tests are ok" << endl;;
}

void testRepo()
{
	Repo repo;
	Cookie c1(1, "numePrajitura1", "ingrediente1", 20.5);
	Cookie c2(2, "numePrajitura2", "ingrediente2", 40.5);
	Cookie c3(3, "numePrajitura3", "ingrediente3", 44.5);
	repo.addCookie(c1);
	repo.addCookie(c2);
	assert(repo.getSize() == 2);
	repo.delCookie(0);
	repo.delCookie(1);
	assert(repo.getSize() == 0);

	cout << "Repo tests are ok" << endl;;

}