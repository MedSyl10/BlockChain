#pragma once
#ifndef _BLOC_H

//
// bloc.h  version 1.0
//
// projet blockchain M2IF 2016
//

#define KEY_SIZE 4 // taille en byte des cle (publique, privee) a valider avec les groupes specifiant et developpant la signature
#define HASH_SIZE 64  // taille du hash, a valider avec les groupes specifiant et developpant le hacheur

class TXI // transaction input
{
	unsigned int nBloc;
	unsigned int nTx;   // hash of the previous transaction
	unsigned int nUtxo; // index of output
	unsigned char signature[64];
};

class UTXO // une sortie non dépensée
{
	float montant;
	unsigned char dest[KEY_SIZE];  //compte destinataire , public key
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
	char hash[64]; // hash des autres champs, hash of the entire bloc

	char previous_hash[HASH_SIZE]; // hash of the previous bloc
	unsigned int nonce;
	int num; // numero du bloc, commence a zero
	TX tx1; //  transaction du bloc
	TXM tx0; // transaction du mineur (coinbase)

};

#endif
