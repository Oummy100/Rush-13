## 📄 README – Calculatrice en C

### 🧾 Présentation

Ce projet est une **application console écrite en langage C** qui permet d'effectuer plusieurs opérations mathématiques de base entre deux valeurs numériques saisies par l'utilisateur.

Le programme utilise une boucle interactive, ce qui permet à l'utilisateur d'effectuer autant de calculs qu'il le souhaite sans relancer le programme.

---

### ✅ Fonctionnalités

* Addition
* Soustraction
* Multiplication
* Division (avec gestion de la division par zéro)
* Calcul du reste d'une division entière (modulo)
* Calcul de puissance

---

### 🛠️ Prérequis

* Un compilateur C compatible (par exemple `gcc`)
* La bibliothèque standard C (`stdio.h`)
* La bibliothèque mathématique (`math.h`) pour la fonction `pow`

---

### ⚙️ Compilation

Utilisez la commande suivante pour compiler le programme :

```bash
gcc calculatrice.c -o calculatrice -lm
```

> 🔹 Le flag `-lm` permet de lier la bibliothèque mathématique (`math.h`).

---

### ▶️ Exécution

Lancer le programme avec la commande suivante :

```bash
./calculatrice
```

---

### 💡 Exemple d'utilisation

```text
---- Calculatrice : MENU ----
1 - Addition.
2 - Soustraction.
3 - Multiplication.
4 - Division.
5 - Reste d'une division entière.
6 - Puissance.

Saisir le premier terme : 8
Saisir le deuxième terme : 2
Quelle opération veux-tu effectuer ? (1 à 6) : 4
Le résultat est 4.00

Veux-tu effectuer un autre calcul ? (O/N) : N
```

---

### 🧠 Détails techniques

* **Langage** : C (standard ANSI C)
* **Types utilisés** :

  * `float` pour les opérandes A et B
  * `int` pour le choix de l’opération
  * `char` pour la réponse de l’utilisateur
* **Sécurité** :

  * Vérification de la division par zéro
  * Conversion explicite en `int` pour l’opération modulo
  * Utilisation d’une boucle `do...while` pour permettre une exécution continue

---

### 👩‍💻 Auteure

Développé dans le cadre de l'apprentissage du langage C.
Un projet simple, mais essentiel pour maîtriser la logique conditionnelle, les types de données, et la gestion des entrées utilisateur en C.
