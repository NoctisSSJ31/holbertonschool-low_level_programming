# Green Efficiency & Benchmarking Analysis


## Measurement Methodology

Pour évaluer l'éfficacité énergétique du lel et comprendre le comportement pendant l'exécution, des tests ont été menés dans un environnement isolé et sécurisé en langage C. 
Les programmes ont été compilés selon le protle strict suivant: (gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long), afin de respecter les normes imposées. 
Les temps d'exécutions ont été relevdu�sa l'aide de la bibliothèque standard '<time.h>' ainsi que de la fonction 'clock()' en entrant les variables.
Les cycles d'horloge du processeur qui ont été mesurés, ont été ensuite convertis en seconde par la fonction 'clock_per_sec'(une constante système).
L'opération a été rép�a plusieurs reprises afin de relever des données comparatives fiables entre les temps d'exécutions.

## Observed Performance Differences

Les comparaisons algorithmiques et les journaux d'instrumentation (mesures de temps), ont révélé des écarts en termes d'éfficacité.
Dans le test comparant l'approche naïve et l'implémentation " single-pass", l'écart de performance s'est avéré considérable.
l'implémentation naïve s'exécutait en plusieurs secondes  a des boucles imbriquées. tandis que l'exécution de l'implémentation "single-pass" était quasiment instantané.
Par ailleurs, l'instrumentation du traitement de données a montré que les ressources processeur étaient très peu élevées, et que les mesures répétées ont montré des temps d'exécution stables.

## Relation Between Runtime and Energy Consumption

le temps d'exécution dans cet environnement isolé constitue un indicateur fiable de consommation d'énergie.
Lorsqu'un programme utilise du code non efficace, non optimisé, cela se traduit par une durée du processus très longue et donc une utilisation conséquente rallongée du processeur. 
Par conséquent, un temps d'exécution plus long se traduit directement par une consommation énergéti.
L'optimisation des algorithmes diminue le nombre de cycles actifs du processeur, ce qui réduit directement l'empreinte énergétique.

## Limitations of the Experiment

Bien que les résultats montret en évidence une divergence de performance, les mesures ont été effectuées et relevées sur un poste local. 
Ce qui ne constitue pas un environnement réel en condition d'entreprise avec une grosse producton et les charges de travail imposées


## Practical Engineering Takeaway

La leçon principale de cet atelier de test comparatif entre l'optimisation algorithmique et les choix d'efficacité, montre que l'application de tout ceci ont un impact écologique et financier considérable.
ecrire un code efficace est une responsabilité fondamentale pour un développement durable des technologies vertes.
En minimisant les activités du processeur, cela contribu a  diminer grandement l'empreinte énergétique.
