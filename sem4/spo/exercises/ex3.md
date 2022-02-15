# Exercise Session 3

## Exercise 1

### 3

a) add so that the case says ```case f, float``` and do so that the switch also can take a string

b) do the same as before just to the case so it says ```case i, int```

c) Add in the ScanDigits() functions that the code also should look for the e, and then calculate the value.

### 4

```
Procedure Prog()
  call Stmts()
  call Dcls()
end
```

```
Procedure Dcl()
  if ts.peek = floatdcl
  then
    call Match(ts, floatdcl)
    call Match(ts, id)
  else
    if ts.peek = intdcl
    then
      call Match(ts, intdcl)
      call Match(ts, id)
    else
      call Error()
end
```

```
Procedure Expr()
  if ts.peek = plus
  then
    call Match(ts, plus)
    call Val()
    call Expr()
  else
    if ts.peek = minus
    then
      call Match(ts, minus)
      call Val()
      call Expr()
end
```

```
Procedure Val
  if ts.peek = id
  then
    call Match(ts, id)
  else
    if ts.peek = inum
    then
      call Match(ts,inum)
    else
      if ts.peek = fnum
      then
        call Match(ts,fnum)
      else
        call Error()
end

```

### 6

Extend the symbol table to also show if a variable has been initialized or not, in this way a match can see if the variable holds a value or not.

## Exercise 2

See img folder

## Exercise 3

### a

see imgs

### b

a) is correct

b) is not correct

c) is correct

### c

first:

100
sx

0k

lx
0k
30
+

sx
0k

lx
p
si
