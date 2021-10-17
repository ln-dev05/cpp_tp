## Quelle règle de base en programmation orientée objet est dans une certaine mesure transgressée ici ?

Cette méthode ne respecte pas le principe de l'encapsulation, qui nous dit qu'on ne doit pas directement accéder aux attributs d'une classe mais qu'il est nécessaire de passer par un méthode.

## 2.1 Construction et affectation par déplacement : vérification

Trace :

rrrMatrix(&&) -> Retour de l'opérateur *  
rrrMatrix(&&) -> d.Matrix(a*b)  
===Matrix(&&) -> c = a * b;  
rrrMatrix(&&) -> foo(c * c);  

## Fuite de mémoire

La parole est à valgrind :  
    "All heap blocks were freed -- no leaks are possible"
