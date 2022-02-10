# Session 2

## Nondeterminism

When the machine is in a given state and reads the next input symbol, we know what the next state will be-it is determined. We call this deterministic computation. In a nondeterministic machine, several choices may exist for the next state at any point.

Nondeterminism is a generalization of determinism, so severy deterministic finite atomaton is automatically a nondeterministic finite automaton.

A deterministic finite automaton = DFA

A nondeterministic finite automaton = NFA.

Differences between DFA and NFA:

- The DFA has exactly one existing transition arrow for every symbol in the alphabet. A NFA violates that.
- The labels on a DFA are symbols from the alphabet. A NFA can have other like the epsilon $\epsilon$.

A NFA can get stuck (meaning that it wont reach any final state) if there is no transition arrow for the symbol that is read (silent transition)

A **unary alphabet** is an alphabet consisting of a single symbol.

When NFA reads a epsilon, it means that it does not read/consume any symbol 

Any DFA is a NFA!

There exists different machines that recognize the same language

Every NFA has an equivalent DFA

### Equivalent machines

Two machines are equivalent if they recognize the same language.

### Regular language

A language is regular if and only if some NFA recognizes it

The class of regular languages is closed under union.


Concatenating NFA's is by connecting the final states of the first to the initial state of the second. They are then connected by one or more epsilon transition(s). Therefore the final state(s) in the first NFA is not anymore a final state.

The star operation on a NFA is by connecting the final states of the NFA to the initial state of the NFA by epsilon transitions. A new initial state is created and connected to the old initial state by a epsilon transition, (see slide 30 on lecture 2). The new initial state is also a final state
