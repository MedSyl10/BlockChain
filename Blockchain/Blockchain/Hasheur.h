#pragma once


#include "Sha256.h"
#include "Bloc.h"

#include <sstream>

namespace Hasheur {

	/**
	* Prend en entr�e une chaine de caract�res
	* Retourne le hash de la chaine de caract�res en entr�e en utilisant l'algorithme SHA-256 (256 bits en sortie)
	*/
	std::string hash(std::string chaine);

	/**
	* Prend en entr�e une chaine de caract�res et un hash (chaine de caract�res)
	* V�rifie que le hash de la chaine correspond bien au hash en entr�e
	*/
	bool checkHash(std::string chaine, std::string verify);


	/**
	* Prend en entr�e un bloc
	* Retourne une chaine de caract�res contenant les donn�es du bloc dans un format quelconque
	*/
	std::string blocToString(Bloc bloc);

	/*
	* Prend en entr�e une transaction
	* Retourne une chaine de caract�res contenant les donn�es de la transaction dans un format quelconque
	*/
	std::string TXIToString(TXI transaction);
	std::string UTXOToString(UTXO transaction);

	std::string charToString(unsigned char* tab, unsigned int size);
	std::string charToString(char tab[], unsigned int size);


}

