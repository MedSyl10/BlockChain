// Blockchain.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Hasheur.h"
#include "Bloc.h"
#include <iostream>

int main()
{

	//Hasheur hasheur;
	std::string input = "grape";
	std::string output = Hasheur::hash(input);

	std::string verify = "0f78fcc486f5315418fbf095e71c0675ee07d318e5ac4d150050cd8e57966496";

	std::cout << output << std::endl;

	Hasheur::checkHash(input, verify) ? std::cout << "Hash is valid" << std::endl
		: std::cout << "Hash is not valid" << std::endl;


	char tab[64] = { 's','o','s','h','h','a','s','h','h','0','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','8','9','0','1','2','h','a','s','h','h','a','s','h','h','0','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','f','9','0','1','s' };
	TXI txi[4];
	txi[0] = *new TXI(3, 5, 7, tab);
	txi[1] = *new TXI(4, 6, 8, tab);
	txi[2] = *new TXI(5, 7, 9, tab);
	txi[3] = *new TXI(6, 8, 0, tab);

	char tab3[64] = { 's','o','s','h','h','a','s','h','h','0','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','8','9','0','1','2','h','a','s','h','h','a','s','h','h','0','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','f','9','0','1','s' };
	char tab2[64] = { 'a', 'b', 'c', 'd' };
	UTXO utxo[2];
	utxo[0] = *new UTXO(100, tab2, tab3);
	utxo[1] = *new UTXO(230, tab2, tab3);

	TX tx = *new TX(txi, utxo);
	UTXO utxo2[1];
	utxo2[0] = *new UTXO(1000, tab2, tab3);
	TXM txm = *new TXM(utxo2);

	char tab4[64] = { 's','o','s','h','h','a','s','h','h','0','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','8','9','0','1','2','h','a','s','h','h','a','s','h','h','0','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','f','9','0','1','s' };
	char tab5[64] = { 'z','o','s','h','h','a','s','h','h','0','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','8','9','0','1','2','h','a','s','h','h','a','s','h','h','0','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','f','9','0','1','z' };

	unsigned int nonce = 2;

	Bloc bloc = *new Bloc(1, nonce, &tx, &txm, tab5, tab4);

	std::string value_to_hash = Hasheur::blocToString(bloc);

	std::cout << value_to_hash << std::endl;

	std::cout << "value of hash: " << Hasheur::hash(value_to_hash) << std::endl;

	std::string verification = "c451caf43068ec6b8500c0e8227a4efc14956a70f801a5a58ba226fcd740dabc";

	Hasheur::checkHash(value_to_hash, verification) ? std::cout << "Hash is valid" << std::endl
		: std::cout << "Hash is not valid" << std::endl;

	system("pause");

	return 0;
}

