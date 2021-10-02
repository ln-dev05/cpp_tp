# TP2 

Ismaël Delorme - Lemair Paul

## 3

1. Non, cette fonction n'a pas pour but de modifier son argument, on retourne plutôt un nouveau rationnel qui est le carré du rationnel.

2. Les arguments doivent être de type `const Rational &` afin de s'assurer que l'on ne modifie pas les deux nombres, et qu'on ne les recopies pas lors de l'appel à la fonction. De par le fait que `rmax()` prend en paramètres deux rationnels constant, il n'est pas possible de modifier le résultat de max. Lorsqu'on essaye de lui affecter un rationnel temporaire, cela ne peut pas marcher. On ne peut donc pas écrire `max(a, b) = Rational(0, 1);`

3. --- 

4. ---

5. Lors de l'initialisation, le constructeur par défaut est appelé pour chaque case du Tableau. On à donc un tableau initialisé avec des rationnel valant `0/1`.

A cause de -fno-elide-constructors le compilateur ne va pas optimiser la création d'instance.
Ce qui engendre l'utilisation d'un `Rational` temporaire. Comme on peut le constater sur la trace d'exécution suivante :

Extrait de main.cpp :
> Rational r = 3;

Trace d'exécution:
> 0x7ffea0f7f780+++Rational(3,1)  
0x7ffea0f7f770rrrRational(3,1)  
---Rational(3,1)  
---Rational(3,1)

Sur cette trace, on peut voir que dans un premier temps, on utilise le constructeur à deux paramètres faisant usage de la valeur par défaut. Puis il utilise le constructeur par recopie, afin de recopier la valeur de l'objet temporaire.

6. En utilisant le constructeur à deux éléments dont un par défaut, on utilise le cast implicite de C++ pour transformer l'entier en Rationnel temporaire.