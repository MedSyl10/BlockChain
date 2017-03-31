#ifndef VerifierBloc_h
#define VerifierBloc_h

namespace VerifierBloc {
	/*
	 on doit s'assurer que la somme des sorties est moins que la somme des entrées 
	 pour chaque transaction.
	 la signature de la transaction doit etre correct (bien signée)
	*/
	bool verificationTransaction(TX transaction);
	bool verificationTransaction(TXM transaction);
	bool verificationBloc(Bloc bloc);

}

#endif