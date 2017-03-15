#pragma once
#ifndef _BLOC_H

//
// bloc.h  version 1.0
//
// projet blockchain M2IF 2016
//

#define KEY_SIZE 4 // taille en byte des cle (publique, privee) a valider avec les groupes specifiant et developpant la signature
#define HASH_SIZE 64  // taille du hash, a valider avec les groupes specifiant et developpant le hacheur

class TXI
{
	unsigned int nBloc;
	unsigned int nTx;
	unsigned int nUtxo;
	unsigned char signature[64];
};

class UTXO
{
	float montant;
	unsigned char dest[KEY_SIZE];  //compte destinataire
	unsigned char hash[HASH_SIZE];    // hash(nBloc,nTx,nUTXO,montant,destinataire) pour securisation de l'UTXO
};

class TX { // transaction standard 
	TXI txi[4];
	UTXO utxo[2];
};

class TXM { // transaction du mineur
	UTXO utxo[1];
};

class Bloc
{
	char hash[64]; // hash des autres champs

	char previous_hash[HASH_SIZE];
	unsigned int nonce;
	int num; // numero du bloc, commence a zero
	TX tx1; //  transaction du bloc
	TXM tx0; // transaction du mineur (coinbase)

};

#endif
