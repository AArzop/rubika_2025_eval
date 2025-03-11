# Evaluation

## Informations importantes

### Notation

Pour les exercices ne nécessitant aucun code, la notation fera en fonction des réponses données.
Pour ceux nécessitant de coder, la notation s'appuiera sur plusieurs  éléments:
- Le programme répond il aux attentes. Les fonctions font elles ce qu'elles sont censés faire même dans les cas extrêmes d'utilisation? Sauf indication contraire, le code sera gardé tel quel sans modification externe. Une série de tests sera lancée et cette partie de la notation sera indexée sur le nombre de tests réussis/ratés. **Gardez à l'esprit qu'un code qui ne compile pas ne peut être testé**.
- Les détails d'implémentation seront aussi évalués, la qualité du code, la lisibilié, les éventuelles leaks...

Enfin, la qualité du rendu aura un impact sur la notation (de façon mineure)

### Qualité du rendu

Une archive sera à rendre pour valider cette évaluation. La qualité du rendu constitue donc toutes les règles à suivre afin que cette archive soit de la meilleure qualité possible. Autrement dit:
- Respect du nom
- Respect de la date de rendu
- Absence de fichiers inutiles et qui donc prenne de la place sur disque
    * Le dossier `.git` ainsi que le `.gitignore`
    * Les fichiers temporaires de compilation (.obj, .exe, .pdb...)
    * Les dossiers/fichiers relatifs à un IDE (`.vs` pour Visual Studio, `.idea` pour Rider)

### Comment faire son rendu?

L'archive mentionnée dans la partie ci-dessus devra être soit :
- Envoyée avant la date butoire à : 
```
m.lacombe@rubika-edu.com
```

- Postée sur le [drive](https://drive.google.com/drive/folders/10DsHYXm6qF8bRlkpApOAjkvLRlvM5T1z?usp=drive_link)  

Le nom de l'archive devra respecté le format
```
NOM_PRENOM.zip
```

## Questions théoriques
*Temps maximal conseillé* : 10 min  
*Dossier* : **Questions**

Vous trouverez dans ce dossier un fichier texte contenant une liste de questions. Répondez à ces questions directement dans le fichier.

Ne vous étendez pas trop sur vos répnses, des réponses précises et succinctes seront grandement appréciées.

## Dirty Space Invader
*Temps maximal conseillé* : 90 min  
*Dossier* : **DirtySpaceInvaders**

Cet exercice consiste à réparer le projet fournit de tous ses crashes, bugs ou autres. 

Au cas où, voici ce qu'est [Space Invaders](https://www.youtube.com/watch?v=8Rbi8cfDvVY).

Pour comparaison, vous trouverez des executables du programme réparé dans le dossier `CleanSpaceInvaders` à la racine du dossier correspondant, afin que vous puissiez comparer votre version actuelle avec ce à quoi elle devrait ressembler. Vous trouverez deux versions dont la seule différence est la `seed` utilisée pour la génération aléatoire. Pour reproduire, le même comportement, modifier la première ligne de la fonction `main` dans `Main.cpp` par : 

```c++
	// Change the seed by the one you want to try
	rGen.seed(1);
```

Le choix de l'implémentation est libre. Vous pouvez donc résoudre les différents problèmes que vous rencontrez de la façon dont vous le souhaitez. Gardez cependant à l'esprit que la qualité du code est un élément de notation.

En parallèle, vous trouverez un fichier `recap.txt` dans le dossier correspondant. Veuillez tenir à jour ce fichier des différents problèmes que vous trouverez et une brève explication de la nature du problème et de la façon vous l'avez corrigé (quelques lignes suffiront).

## XmlParser
*Temps maximal conseillé* : 30 min  
*Dossier* : **XmlParser**

Cet exercice consiste à parser le fichier `Sounds.xml` (trouvable dans les ressources du projet), et de stocker le résultat dans une map permettant ensuite de retrouver le contenu en se servant d'une clef unique. Vous trouverez de plus amples informations directement en commentaire dans les fichiers du projet.

Il vous faudra au minimum implémenter deux fonctions:
- XmlCache::Parse
- XmlCache::GetSound

Le choix de l'implémentation est libre. Vous pouvez donc:
- Suivre les indications des différents commentaires des différentes fonctions que vous pourrez trouver dans le projet (si vous choissez cette option vous ne devrez avoir besoin que de modifier le fichier `XmlCache.cpp`), qui sont des aides à l'implémentation des fonctions mentionnées plus haut.
- Ignorer le point précédent et partir librement dans l'implémentation de votre choix en modifiant ce que bon vous semble, du moment que les deux fonctions mentionnées plus haut fonctionne comme elles le devraient.

Le fichier `Main.cpp` est le seul fichier qui ne doit contenir aucune modification de votre part puisqu'il sera remplacé lors de la correction. Tout code, commentaire... contenu dans ce fichier sera donc perdu. Cependant, ce fichier est votre terrain de jeu. Si vous désirez complexifier les tests, n'hésitez surtout pas. 

## Array vs Tree
*Dossier* : **Trees**

**Cet exercice sert à "Aller plus loin". Il n'est pas pris en compte dans le barême classique et n'est donc qu'un bonus. Toutes traces de recherche/travail sur cet exercice peut être récompensées mais pas sans doute pas à hauteur de ce que peut rapporter un autre exercice.**

Cet object consiste à implémenter un BST comme abordé durant le dernière cours afin de stocker une liste de nombre plus ou moins grande. Ensuite, mesurer le temps pour trouver (ou non) un élément. Enfin, comparer le résultat avec le résultat qu'on aurait en changeant simplement de container (un vector, une liste...).

Cet exercice contient son propre sujet dans le dossier correspondant.
