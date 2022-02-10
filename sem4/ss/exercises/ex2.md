# Exercise Session 2

## Exercise 1

1. $\{aaabba,aaaab,aabb,bbabba,bbaab,bbbb,bbbabba,bbbaab,bbbbb\}$
2. $\{aa,bb,bbb,abba,aab,bb\}$
3. $\{bb\}$
4. $\{aa,bbb\}$
5. $\{\epsilon,abba,aab,bb,abbaaab,abbabb,aababba,aabbb,bbabba,bbaab,...\}$

## Exercise 2

$M1$:

- $Q=\{q_1,q_2,q_3\}$
- $\sum=\{a,b\}$


| $\delta$ | a     | b     |
| ---------- | ------- | ------- |
| $q_1$    | $q_2$ | $q_1$ |
| $q_2$    | $q_3$ | $q_3$ |
| $q_3$    | $q_3$ | $q_3$ |

- $q_0=\{q_1\}$
- $F=\{q_2\}$

$M2$:

- $Q=\{q_1,q_2,q_3\}$
- $\sum=\{a,b\}$


  | $\delta$ | a     | b     |
  | ---------- | ------- | ------- |
  | $q_1$    | $q_2$ | $q_1$ |
  | $q_2$    | $q_3$ | $q_3$ |
  | $q_3$    | $q_3$ | $q_3$ |
- $q_0=\{q_1\}$
- $F=\{q_1\}$

a)

1. $q_1$->$q_2$->$q_3$->$q_3$->$q_3$->$q_3$->$q_3$
2. $q_1$->$q_2$->$q_3$->$q_3$->$q_3$->$q_3$->$q_3$->$q_3$
3. $q_1$->$q_2$->$q_3$->$q_3$->$q_3$->$q_3$
4. $q_1$

b)

$M1$: none

$M2$: sequence 4

$M3$: sequence 4

c)

$M1$: $L(M1)=\{w/w=Ua, U=\{b\}^*\}$

$M2$: $L(M2)=\{w/w=U, U=\{b\}^*\}$

$M3$: $L(M1)=\{w/w=Ua$ or $w=U, U=\{b\}^*\}$

## Exercise 3

![FA](pics/ex2.3.png "FA")

Language for this FA: $L(M4)=\{w/w=aUa$ or $w=bUb, U=\{a,b\}^*\} $

## Exercise 4

(i)
![FA](pics/ex2.4.1.png "FA")

(ii)
![FA](pics/ex2.4.2.png "FA")

(iii)
![FA](pics/ex2.4.3.png "FA")

(iv)
![FA](pics/ex2.4.4.png "FA")

(v)
![FA](pics/ex2.4.5.png "FA")

## Exercise 5

![FA](pics/ex2.5.1.png "FA")
2. see solutions
3. (i) and (ii)
![FA](pics/ex2.5.3.png "FA")

(iii) same as 5.1
4. See slide 28 lecture 2 or solutions

## Exercise 6

(i)

Nonaccepted: 10, 1, 1010, 10100, 1001

Accepted: 0, 102, 1002, 10002, 100002

(ii)

proved by induction

base step for when word length is 0

inductive step for when word length is > 0

see solutions for the whole proof

(iii)
