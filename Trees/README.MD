Dans cet exercice, nous allons créer deux stuctures de données différentes afin de comparer le temps qu'il faut pour trouver un certain élément en son sein.

Ce sujet se fait en plusiuers étapes (Threshold). Lorsque vous passez d'une étape à une autre, modifier le fichier `Threshold.h` avec le numéro de l'étape correspondant, pour que le projet entier soit cohérent.

# Threshold 0

Commencons par implémenter un Vector (pour ce threshold, nous partirons du principe qu'il sera de taille fix mais alloué dynamiquement).

1. Implémenter le constructeur ainsi que le destructeur
```c++
Vector::Vector(int size); // Use new int[size];
Vector~Vector(); // Use delete[]
```

2. Implémenter la fonction `Add` qui permet d'ajouter un élément à l'index courant. A ce threshold, cette fonction ne sera pas appelée avec une si la taille initiale du tableau est trop petite.

3. Optionnel : Implémenter la fonction `Print` peut vous aider à y voir plus clair

4. Implémenter la fonction `Contains` qui renvoie True si l'élément passé en paramètre est contenu dans le tableau.

# Threshold 1

Implémentons maintenant un [BST](https://en.wikipedia.org/wiki/Binary_search_tree)

Pour ce faire, suivez les mêmes étapes que lors du Threshold 0 mais cette fois-ci dans le cadre de la classe `Tree`

# Threshol 2

Si les deux précédent Threshold ont été accomplis avec succès, vous pouvez lancer le programme (compilé en Threshold 2) pour voir la différence d'exécution entre les deux containes.