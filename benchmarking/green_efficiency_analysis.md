# Green Efficiency & Benchmarking Analysis

## Measurement Methodology

Pour√evaluer l'efficacite energetique du logiciel et comprendre le comportement pendant l'execution, des tests ont ete menes dans un environnement isole et securise en langage C. 
 
Les programmes ont ete compiles selon le protocole strict suivant :

```bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long

afin de respecter les normes imposees.

Les temps d'execution ont ete releves a l'aide de la bibliotheque standard <time.h> ainsi que de la fonction clock().

Les cycles d'horloge du processeur mesures ont ensuite ete convertis en secondes par la fonction CLOCKS_PER_SEC (une constante systeme).

L'operation a ete repete a plusieurs reprises afin de relever des donnees comparatives fiables entre les temps d'execution.

## Observed Performance Differences

Les comparaisons algorithmiques et les journaux d'instrumentation (mesures de temps) ont revele des ecarts en termes d'efficacite.

Dans le test comparant l'approche naive et l'implementation single-pass, l'ecart de performance s'est avere considerable.

L'implementation naive s'executait en plusieurs secondes, dues a des boucles imbriquees, tandis que l'execution de l'implementation single-pass etait quasiment instantanee.

Par ailleurs, l'instrumentation du traitement des donnees a montre que les ressources processeur mobilisees etaient tres faibles, et que les mesures repetees affichaient des temps d'execution stables.

## Relation Between Runtime and Energy Consumption

Le temps d'execution dans cet environnement isole constitue un indicateur fiable de la consommation d'energie.

Lorsqu'un programme utilise du code non optimise, cela se traduit par une duree de processus tres longue et, par consequent, une utilisation prolongee et consequente du processeur.

Un temps d'execution plus long entraine donc directement une consommation energetique cumulee accrue a grande echelle.

L'optimisation des algorithmes diminue le nombre de cycles actifs du processeur, ce qui reduit directement l'empreinte energetique.

## Limitations of the Experiment

Bien que les resultats mettent en√evidence une divergence de performance, les mesures ont ete effectuees et relevees sur un poste local.

Cela ne constitue pas un reel environnement de production en condition d'entreprise soumis a de lourdes charges de travail.

## Practical Engineering Takeaway

La lecon principale de cet atelier de test comparatif entre l'optimisation algorithmique et les choix d'efficacites montre que ces manipulations  ont un impact ecologique et financier considerable.

Ecrire un code efficace est une responsabilite fondamentale pour le developpement durable des technologies vertes.

En minimisant l'activite du processeur, on contribue a diminuer grandement l'empreinte energetique.
