# Exercise Session 5

## Exercise 1

I read it

## Exercise 2

1. A lexeme is the lowest level syntatic unit of a language (e.g. *, sum, begin). A token is a category of lexemes (e.g. identifier)
2. They can be formallu defined in two ways, by recognition and generation 3.2.1 explains it further.
3. They are described using formal-language generation mechanisms, usually called grammars.
4. It is a language used to describe another language. BNF is a metalanguage for programming languages.
5. ////
6. Ambiguous grammar is a grammar that generates a sententinal form for which there are two or more distinct parse trees. 3.3.1.7
7. Left recursive grammar is when a grammar rule has its LHS also appearing at the beginning of its RHS. left/right hand side

   25. 3.5.1 says something about it, but i think it is because there are already developed interpreters that are advanced for this.

## Exercise 3

2a. \<header\> -> \<access modifier\> class \<name\> [iherits \<superclass\>] [implements \<interface\>] \<classbody\>

2b. \<methodcall\> -> \<classname\>.\<method\>(\<args\>) | \<method\>(\<args\>)

## Exercise 4

Add to the factor

\<factor\> -> "("\<expr\>")"
|  \<id\>
|  \<id\>++
|  \<id>--
|  --\<id\>
|  ++\<id\>
