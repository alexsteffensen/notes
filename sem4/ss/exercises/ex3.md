# Exercise Session 3

## Exercise 1

1.

$Q =\{q_1,q_2,q_3,q_4,q_5\}$

$\Sigma = \{a,b,\epsilon\}$


| $\delta$ | $a$           | $b$           | $\epsilon$ |
| ---------- | --------------- | --------------- | ------------ |
| $q_1$    | $\{q_2\}$     | $\{q_2\}$     | $Ø$       |
| $q_2$    | $\{q_4,q_5\}$ | $Ø$          | $Ø$       |
| $q_3$    | $\{q_1,q_2\}$ | $\{q_1\}$     | $\{q_4\}$  |
| $q_4$    | $Ø$          | $\{q_3,q_5\}$ | $\{q_5\}$  |
| $q_5$    | $\{q_5\}$     | $\{q_2,q_4\}$ | $Ø$       |

$q_0=\{q_1\}$

$F=\{q_1\}$

$q_1$->$q_2$->$q_5$->$q_4$->$q_3$->$q_1$

3. (a)

## Exercise 2

(c), (d)

## Exercise 3

See pictures

## Exercise 4

See pictures

## Exercise 5

1. Just do what is shown on slide 23.
2. Just take (1) and use the formular at slide 27 to concatenate $L(N1)$ to (1)
3. Do the same as in (2) just in the opposite way
4. To make the star operation, use the technique shown in slide 30.

The NFAs are available in the solutions document
