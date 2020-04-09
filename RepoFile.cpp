#include "Repo.h"

#include<fstream>

using namespace std;

Repo::Repo()
{
	this->fileNameIn = NULL;
	this->fileNameOut = NULL;
}

Repo::Repo(const char* fileNameIn, const char* fileNameOut)
{
	this->fileNameIn = new char[strlen(fileNameIn) + 1];
	strcpy_s(this->fileNameIn, strlen(fileNameIn) + 1, fileNameIn);

	this->fileNameOut = new char[strlen(fileNameOut) + 1];
	strcpy_s(this->fileNameOut, strlen(fileNameOut) + 1, fileNameOut);

	this->loadFromFile();
}
Repo::~Repo()
{
	this->expenses.clear();
}

void Repo::setFileNameIn(const char* fileNameIn)
{
	if (this->fileNameIn != NULL)
		delete[] this->fileNameIn;

	this->fileNameIn = new char[strlen(fileNameIn) + 1];
	strcpy_s(this->fileNameIn, strlen(fileNameIn) + 1, fileNameIn);
}
void Repo::setFileNameOut(const char* fileNameOut)
{
	if (this->fileNameOut != NULL)
	{
		delete[]this->fileNameOut;
	}
	this->fileNameOut = new char[strlen(fileNameOut) + 1];
	strcpy_s(this->fileNameOut, strlen(fileNameOut) + 1, fileNameOut);
}

void Repo::loadFromFile()
{
	if (this->fileNameIn != NULL)
	{
		this->cookies.clear();

		ifstream f(this->fileNameIn);

		int id;
		char* name = new char[100];
		char* ingredients = new char[100];
		double price;

		while (!f.eof())
		{
			f >> id >> day >> sum >> type;
			if (strlen(type) > 0)
			{
				this->addExpense(Cookie(id, name, ingredient, price));
			}
		}
		delete[] type;
		f.close();
	}
}

void Repo::saveToFile()
{
	if (this->fileNameOut != NULL)
	{
		ofstream f(this->fileNameOut);
		for (int i = 0; i < this->expenses.size(); i++)
		{
			f << this->cookies[i] << endl;
		}
		f.close();
	}
}

int Repo::getSize()
{
	return this->cookies.size();
}

void Repo::addCookie(Cookie e)
{
	this->loadFromFile();

	this->cookies.push_back(e);

	this->saveToFile();
}
vector <Cookie> Repo::getAll()
{
	return this->cookies;
}
Expense Repo::getCookie(int pos)
{
	return this->expenses[pos];
}
void Repo::updateCookie(Expense& oldCookie, Expense& newCookie)
{
	this->loadFromFile();

	for (int i = 0; i < this->cookies.size(); i++)
		if (this->cookies[i] == oldCookie)
			this->cookies[i] = newCookie;

	this->saveToFile();
}
void Repo::deleteCookie(Cookie& e)
{
	this->loadFromFile();

	for (int i = 0; i < this->cookies.size(); i++)
		if (this->cookies[i] == e)
		{
			this->cookies[i] = this->cookies[this->cookies.size() - 1];
			this->cookies.pop_back();
		}
	
	this->saveToFile();
}