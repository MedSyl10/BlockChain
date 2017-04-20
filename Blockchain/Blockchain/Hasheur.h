#pragma once


#include "Sha256.h"
#include "Bloc.h"

#include <sstream>

namespace Hasheur {

	/**
	* Prend en entrée une chaine de caractères
	* Retourne le hash de la chaine de caractères en entrée en utilisant l'algorithme SHA-256 (256 bits en sortie)
	*/
	std::string hash(std::string chaine);

	/**
	* Prend en entrée une chaine de caractères et un hash (chaine de caractères)
	* Vérifie que le hash de la chaine correspond bien au hash en entrée
	*/
	bool checkHash(std::string chaine, std::string verify);


	/**
	* Prend en entrée un bloc
	* Retourne une chaine de caractères contenant les données du bloc dans un format quelconque
	*/
	std::string blocToString(Bloc bloc);

	/*
	* Prend en entrée une transaction
	* Retourne une chaine de caractères contenant les données de la transaction dans un format quelconque
	*/
	std::string TXIToString(TXI transaction);
	std::string UTXOToString(UTXO transaction);

	std::string charToString(unsigned char* tab, unsigned int size);
	std::string charToString(char tab[], unsigned int size);


}

