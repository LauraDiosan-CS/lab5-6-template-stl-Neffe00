#include "Test.h"
#include "UI.h"

#include <iostream>
using namespace std;

int main() {

	//Repo<Prajitura> repoPrajitura;
	RepoSTL<Prajitura> repo("prajituri.txt");
	
	Service service(repo);
	UI ui(service);
	ui.runUI();

	return 0;
}