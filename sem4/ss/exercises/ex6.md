# Exercise Session 6

## Exercise 1

$L_1$ and $L_2$

Start value is A

$A$ -> $111B$

B -> 0A0 | 1

$L_3$

Start value is A

A -> 1B1

B -> 0 | 1A1

$L_4$

A -> 0B1 | $\emptyset$

B -> 101 | A1

$L_5$

A -> $\epsilon$ | B

B -> 101

## Exercise 2

### 1

$V=\{A,S,X,T\}$

$\sum=\{a,b,\epsilon\}$

$R$ is the rules, which are on the exercise 2 page, in the description

$S = A$

### 2

1. a$\epsilon$b
2. aab
3. bba
4. abb
5. baa
6. aabbb

### 3

1. aaaaaa
2. bbbbbb
3. $\epsilon$
4. a
5. b

### 4

$T \rightarrow^*XXX $

$T \rightarrow^* aba$

## Exercise 3

### $N_1$

Start value is A

A -> 1S | 0A | 1A
S -> 0B | 1B
B -> 0

### $N_2$

Start value is A

A -> 0A | 1S | 1
S -> 0B | $\epsilon$
B -> 1 | 0 | $\emptyset$

## Exercise 4

### $0^*10^*$

Start value is A

A -> B | 0A | A0 | 0A0
B -> 1

### $1 \cup 0^* \emptyset^*$

Start value is A

A -> 1 | B
B -> 0B | B$\emptyset$ | ingenting?

### $(01^+)^+$

Start value is A

A -> 0B
B -> 1S | 1
S -> A
