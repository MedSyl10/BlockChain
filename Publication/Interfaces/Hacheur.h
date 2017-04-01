#ifndef Hacheur_h
#define Hacheur_h

/**
* Prend en entrée une chaine de caractères
* Retourne le hash de la chaine de caractères en entrée en utilisant l'algorithme SHA-256 (64 bits en sortie) 
*/
std::string hash(std::string chaine);

/**
* Prend en entrée une chaine de caractères et un hash (chaine de caractères)
* Vérifie que le hash de la chaine correspond bien au hash en entrée
*/
std::bool validateHash(std::string chaine, std::string hash);

#endif
