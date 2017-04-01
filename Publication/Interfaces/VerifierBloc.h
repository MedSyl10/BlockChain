#ifndef VerifierBloc_h
#define VerifierBloc_h

namespace VerifierBloc {
	/*
		Vérifier la validité des transactions, pour cela
			- on doit s'assurer que la somme des sorties est moins que la somme des entrées  pour chaque transaction.
			- vérifier que les sorties référencées par les entrées existent et n’ont pas encore été utilisées
			- vérifier la signature de chaque transaction 
	*/
	bool verificationTransaction(TX transaction);
	bool verificationTransaction(TXM transaction);

	/*
		oui si :
				- bloc non reçu auparavant 
				- contient au moins une transaction
				- première transaction est de type TXM (coinbase) - hash = 0
				- vérifier chaque transaction
				- vérifier si le bloc est dans la même branche
				- 
	*/
	bool valideBloc(Bloc bloc);


	bool verificationBloc(Bloc bloc);
}

#endif