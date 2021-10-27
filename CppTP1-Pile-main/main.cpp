#include <iostream>
#include <stdio.h>
#include "pile_entier.h"

using namespace std;

int main(int argc, char ** argv)
{
	int valeurpile;
	cout << "entrez la valeur de la pile" << endl;
	cin >> valeurpile;
	cout << "" << endl;

	pile_entier * pile = new pile_entier(valeurpile);

	cout << (pile->vide() == 1 ? "Pile vide" : "Pile pas vide") << endl;
	cout << (pile->pleine() == 1 ? "Pile pleine" : "Pile pas pleine") << endl;

	// Rempli la pile
	for (int i = 0; pile->pleine() == 0; i++)
	{
		cout << "Empile " << i << endl;
		pile->empile(i);
	}

	cout << "" << endl;
	cout << (pile->vide() == 1 ? "Pile vide" : "Pile pas vide") << endl;
	cout << (pile->pleine() == 1 ? "Pile pleine" : "Pile pas pleine") << endl;
	cout << "" << endl;

	// Vide la pile
	while (pile->vide() != 1)
	{
		int val = pile->depile();
		cout << "Depile " << val << endl;
	}

	return 0;
}