# TP2 

Ismaël Delorme - Lemair Paul

## 3

1. Non, cette fonction n'a pas pour but de modifier son argument, on retourne plutôt un nouveau rationel qui est le carré du rationel. 
2. Les arguments doivent être de type ```const Rational &``` afin de s'assurer que l'on ne modifie pas les deux nombres, et qu'on ne les recopies pas lors de l'appel à la fonction. De par le fait que ```rmax()``` prend en paramêtres deux rationels constant, il n'est pas possible de modifier le résultat de max. Lorsqu'on essaye de lui affecter un rationel temporaire, cela ne peut pas marcher. On ne peut donc pas écrire ```max(a, b) = Rational(0, 1);```
   

5. Lors de l'initialisation, le constructeur est appellé pour chaque case du Tableau. On à donc un tableau initialisé avec des rationel vallant 0/1.
6. 