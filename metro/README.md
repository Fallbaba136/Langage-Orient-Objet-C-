Etape 1
-------

[ ] Que se passe-t-il lorsque l'on modifie le nom de la station Châtelet sur la Ligne 1 via l'instance la représentant ? La modification apparaît-elle sur la Ligne 2 ? Proposer le code.

[ ] Peut-on représenter une station de correspondance partagée entre deux structures de lignes sans dupliquer la mémoire ? Proposer le code.

[ ] Peut-on représenter une station terminus sans station suivante (par exemple Nation) ?

[ ] En ajoutant une station à une ligne via add_station, puis en modifiant l'instance originale hors du vecteur, la modification se répercute-t-elle dans le vecteur de la ligne ? Que cela vous apprend-il sur les instances directes ?

Etape 2
-------

[ ] En quoi les références corrigent-elles certains problèmes de l’étape précédente ?

[ ] Peut-on créer une station terminus sans station suivante sous forme de référence ? Justifier votre réponse.

[ ] Peut-on stocker une collection de références (par ex. une liste de stations dans une ligne) ?

[ ] Est-ce adapté pour un réseau métropolitain complet avec correspondances ? Justifier votre réponse.

Etape 3
-------

[ ] Quels avantages obtenez-vous avec shared\_ptr par rapport aux références ?

[ ] Pourquoi cela peut-il créer des problèmes mémoire ? Lesquels ? Utilisez valgrind pour mettre en évidence le problème de cycle (par exemple lien bidirectionnel station suivante/précédente ou station/ligne) et ajoutez la trace proposée par valgrind dans votre réponse.

[ ] À quel moment les objets sont-ils détruits lorsque l’on utilise des shared_ptr ? Comment peut-on vérifier cet instant dans le code (par exemple en ajoutant un message dans le destructeur) ?