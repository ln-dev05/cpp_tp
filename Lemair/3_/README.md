## 2.1 Construction et affectation par déplacement : vérification

Trace :

rrrMatrix(&&) -> Retour de l'opérateur *
rrrMatrix(&&) -> d.Matrix(a*b)
===Matrix(&&) -> c = a * b;
rrrMatrix(&&) -> foo(c * c);

## Fuite de mémoire

La parole est à valgrind :  
    "All heap blocks were freed -- no leaks are possible"