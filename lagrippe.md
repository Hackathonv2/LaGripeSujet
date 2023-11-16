<h1 align="center">La gripe</h1>

<p align="center">
<img src="assets/dev.jpeg"
     alt="Markdown Monster icon"
     width="50%" />
</p>

# <ins style="color:red"> Exercice 1: The Last Dev of Us - Infection </ins>

Nous sommes en l'an 2033. Vous faites partie des 0.1% de l'humanité ayant survécu à une mystérieuse maladie mortelle transmise par un champignon. Avant de mourir de l'infection, les personnes infectées passent par une phase de dissociation qui les pousse à se rapprocher d'autres humains pour propager le champignon.

En tant que développeur miraculeusement rescapé, vous prenez l'initiative de mettre vos compétences au service de votre petit groupe de survivants.

Il vous faudra non seulement restaurer les infrastructures essentielles de votre ville, mais vous pourrez également contribuer à des avancées sur l'analyse de la maladie en vue d'élaborer un antidote.
Tout d'abord, une mission d'importance capitale vous attend : un groupe d'infectés a été repéré autour de la base et vous devez vous en débarrasser !
Les malades posent un danger critique lorsqu'ils sont trop proches d'un humain non-infecté : ils sont capables de détecter une présence humaine qui se situe à strictement moins de 100 mètres.

Un survivant de votre base a effectué un repérage des alentours et a relevé les coordonnées des infectés autour de votre base qui se situe aux coordonnées (0,0). Pouvez-vous déterminer combien d'infectés sont susceptibles de vous repérer ?

## Données

### <ins> Entrée: </ins>

- Ligne 1 : un entier N compris entre 1 et 1000, le nombre d'infectés que vous avez repérés.
- N lignes suivantes : deux entiers X et Y (comprises entre -1000 et 1000) séparés par un espace, représentant les coordonnées de chaque infecté.

### <ins> Sortie: </ins>

Le nombre de mutants se trouvant à une distance strictement inférieure à 100 de votre base (0,0).

## Exemple

Pour l'entrée :

```
6
20 23
80 80
-13 -50
61 79
60 80
28 -96
```

3 infectés sont trop proches de votre base : le premier, le troisième et le quatrième. Votre code doit donc afficher :

**3**

A noter que le dernier infecté est à une distance d'exactement 100 (√(28^2 + (-96)^2) = √(10,000) = 100), et donc ne doit pas être compté.

<br/>
<br/>

# <ins style="color:red"> Exercice 2: Ouverture des vannes </ins>


Après avoir repoussé la vague d'infectés aux abords de votre base, une nouvelle mission d'urgence absolue s'impose : restaurer l'alimentation en eau potable dans la base.

Les canalisations d'eau sont régulées par un ensemble de vannes, et vous cherchez celle qui porte l'étiquette "ALIMENTATION". Cependant, les étiquettes ont été partiellement effacées et vous avez du mal à identifier quelle vanne actionner : par exemple, l'étiquette "EVACUATION" pourrait ressembler à "EV_C__T_ON" après l'effacement de certaines lettres.

À partir de la liste des vannes présentes dans le local technique, pouvez-vous retrouver celle qui désigne l'alimentation générale ?

## Données

### <ins> Entrée: </ins>

- Ligne 1 : un entier N représentant le nombre de vannes présentes.
- N lignes suivantes : les étiquettes des N vannes, sous forme de chaînes de caractères composées de majuscules, espaces, et de tirets bas pour les lettres effacées.
Sortie


### <ins> Sortie: </ins>

Le numéro de vanne correspondant à "ALIMENTATION". Les vannes sont numérotées de 1 à N, dans l'ordre des étiquettes fournies en entrée. Il est garanti que la solution sera unique.
Exemple

## Exemple

Pour l'entrée :

```
4
EV_C__T_ON
AL_M_N_____N
AL_M_N_____N_
A____NT__X__
```

Ici, la deuxième étiquette est la seule qui correspond parfaitement à "ALIMENTATION" avec plusieurs lettres effacées.

Votre code devra donc afficher :

**2**

<br/>
<br/>

# <ins style="color:red"> Exercice 3: Protocole d'isolation </ins>

Afin de limiter la propagation de la maladie si elle était amenée à toucher votre communauté de survivants, vous souhaitez minimiser les contacts entre les personnes.

Le principal lieu de présence dans votre QG est la salle commune, vous avez donc mis en place un contrôle strict des heures de présence dans celle-ci. Chaque personne s'est vue affectée une plage horaire unique, durant laquelle elle pourra aller se détendre dans cette pièce.

Il y a transmission potentielle du virus à partir du moment où deux personnes passent au moins 15 minutes dans la même pièce. À partir des horaires de présence fournis, comptez le nombre de paires de survivants qui sont susceptibles de se transmettre le virus dans la salle commune.


## Données

### <ins> Entrée: </ins>

- Ligne 1 : un entier N, le nombre de survivants ayant accès à la salle commune
- N lignes suivantes : une chaîne de caractères au format "hh:mm - hh:mm" représentant la plage horaire de présence d'un survivant.


### <ins> Sortie: </ins>

Le nombre de paires de survivants présentant un risque de contamination mutuelle.


## Exemple

Pour l'entrée :

```
4
08:00 - 09:00
10:15 - 11:00
10:35 - 10:50
10:40 - 12:00
```

Ici, il existe deux risques de contamination :

    les survivants 2 et 3 passent 15 minutes ensemble, entre 10h35 et 10h50.
    les survivants 2 et 4 passent 20 minutes ensemble, entre 10h40 et 11h00.

Toutes les autres paires de survivants passent moins de 15 minutes en même temps dans la pièce et ne représentent donc pas un risque. En particulier, les paires 3 et 4 passent du temps ensemble dans la pièce, mais moins de 15 minutes.

Il existe deux paires à risque, votre code devra donc renvoyer :

**2**

Précisions

Il y a au maximum 100 survivants.

Les plages horaires n'incluent jamais le passage à minuit : vous n'avez donc pas à gérer les cas particuliers tels que "23:50 - 00:10".

<br/>
<br/>

# <ins style="color:red"> Exercice 4: Séquençage du génome </ins>


La situation au QG est stable, vous allez pouvoir avancer sur les études du génome du virus, en espérant trouver parmi son ADN des propriétés qui pourraient faciliter la création d'un antidote.

Votre séquenceur commence par découper le brin d'ADN en plusieurs parties, avec un potentiel recouvrement d'un morceau à l'autre : la fin d'un morceau d'ADN peut correspondre au début du suivant.

Ces petits morceaux d'ADN sont plus faciles à scanner, mais ils ont la fâcheuse tendance de se retourner, et se retrouvent ainsi scannés à l'envers.

Prenons par exemple le virus suivant : ACGTTCGACAT. Le séquenceur pourrait par exemple le découper en ces trois gènes : ACGTT, GTTCGA, CAT. Remarquez que les deux premiers gènes ont un recouvrement de trois lettres (GTT).

Certains gènes peuvent se retourner après le découpage mais ne changent jamais d'ordre. Le résultat de votre séquençage serait donc par exemple ACGTT, AGCTTG et TAC si les deux derniers morceaux sont scannés à l'envers.

En vous basant sur un ensemble donné de morceaux d'ADN, trouvez le génome le plus court ayant pu engendrer ces morceaux.

## Données

### <ins> Entrée: </ins>

- Ligne 1 : un entier N compris entre 1 et 10, le nombre de gènes produits par votre séquenceur.
- Ligne 2 : les N gènes séparés par des espaces. Chaque gène a une taille comprise entre 1 et 100 caractères


### <ins> Sortie: </ins>

La séquence ADN la plus courte possible ayant pu engendrer l'ensemble de gènes donné. S'il existe plusieurs réponses équivalentes, vous pouvez renvoyer n'importe laquelle d'entre elles.

<br/>

##### <ins> Note: </ins>

Notez qu'il est ici possible d'utiliser une approche faisant appel au bruteforce (énumération exhaustive des possibilités) étant donné le faible nombre de gènes fournis, même s'il existe une solution plus élégante et performante.

Une même lettre fera partie de deux gènes au maximum.

## Exemple

Pour l'entrée :

```
3
ACGTT AGCTTG TAC
```

La séquence la plus courte correspondant à ces trois gènes est la suivante :

`ACGTTCGACAT`

S'il existe plusieurs réponses équivalentes, vous pouvez renvoyer n'importe laquelle d'entre elles. Dans cet exemple, vous pouvez donc également renvoyer ACGTTCGATAC.
