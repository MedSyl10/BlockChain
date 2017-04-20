#pragma once

#include "Bloc.h"
namespace VerifyBloc {

	/*
	Vérifier la validité des transactions, pour cela
	- on doit s'assurer que la somme des sorties est moins que la somme des entrées  pour chaque transaction.
	- vérifier que les sorties référencées par les entrées existent et n’ont pas encore été utilisées
	- vérifier la signature de chaque transaction
	* renvoie true si la transaction en entrée est valide
	*/
	bool checkTransaction(TX transaction);

	/*
	True si :
	- bloc non reçu auparavant
	- contient au moins une transaction
	- première transaction est de type TXM (coinbase) - hash = 0
	- vérifier chaque transaction
	- vérifier si le bloc est dans la même branche

	*/
	bool checkBloc(Bloc * bloc);


}


/*class CheckBloc
{
public:
CheckBloc();
~CheckBloc();
};
*/

