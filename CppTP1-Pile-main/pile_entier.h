#pragma once
class pile_entier
{
	int *pile, taille, hauteur; 
								
public:
	pile_entier(int);
						
	
	~pile_entier(); 
	void empile(int); 
	int pleine();	
	int vide();		
	int depile();
					
};
