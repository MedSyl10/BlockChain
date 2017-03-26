#ifndef VerifierBloc_h
#define VerifierBloc_h

namespace VerifierBloc {
	
	bool verificationTransaction(TX transaction);
	bool verificationTransaction(TXM transaction);
	bool verificationBloc(Bloc bloc);

}

#endif