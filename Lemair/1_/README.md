# 1. Echauffement

1. La sortie standard affiche "r vaut 3.0"

2. Explication des lignes 6, 7 et 8 de listing 1 :

La ligne 6 déclare r comme un alias faisant référence à x.
La ligne 7 change la valeur de r, et de ce fait, la valeur de x en la valeur de y, i.e. 3.0.
La ligne 8 change la valeur de la variable y, ce qui n'affecte pas la valeur de r ni de x. 

# 2. Programmation : Articles de magasin
### 2.2.1

L'intrus dans la liste est celui passé par valeur. En effet, il ne modifie la valeur du prix passé à la fonction.
+ a) Le compilateur nous dit que l'appel à la fonction est ambigu car il ne fais pas la différence entre l'appel de la fonction par valeur et par référence.

# 3. Références et retour de fonction

La ligne `swapPrices( readItem(), readItem() )` provoque une erreur lors de la compilation car `swapPrices` demande des références vers `Item` or le retour de la fonction `readItem` est un objet temporaire, et faire référence à un objet temporaire est relativement inutile.