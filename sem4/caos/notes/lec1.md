#Noter

Kurset tager udgangspunkt i x86-64 bit.

Ints er ikke heltal, floats er ikke reelle tal??

Der er en begrænset repræsentation når vi skal præsentere heltal og reelle tal, så der er nogle begrænsninger. 

Assembler er nøglen til at forstå hvordan maskinen udfører programmer

Tilpasning af programmet til maskinens hukommelses-system kan give enorm hastighedsforbedring.

Implementationer af samme algoritme kan give meget forskellige aktuel køretid. Det er afgørende at vølge en algortime implementation der er god.

Abstraktioner vs realiteter er gennemgående tema (heltal vs ints)

## C

C er det lav-niveau programmerings sprog, bruges mest til system og maskinær programmering (inlejrede systemer, firmwares, IoT enheder)

Andre nyere system-niveau sprog: D og Rust.

Der er dog mange aspekter af moderne maskiner, som er vigtige for programmøren, er der ikke abstraktioner for i C

- Parallelitet
- Virtuel hukommelse
- Caches i flere niveauer
- Instruktions-niveau parallelitet

## Binære og hexidecimale tal

Base 10

123_10 = 1* 10^2 + 2*10^

Hexadecimal tal er base 16 og mere kompakt end binær

C notation for hex er med præcfix "0x"

Konvertering fra hex til binært er nemt og omvendt fra binært til hex.

Lavt spændingsområde er 0, højt spændingsområde repræsenterer 1 når vi repræsenterer bits.

1 byte = 8 bits.

## Hukommelsesmodel

### CPU

Udfører alt masking-instruktion

### Hukommelsen / RAM

Lagrer instruktionerne for kørende programmer.

Hukommelsen har en masse elementer med en masse indexer (adresser) på hvor der kan gemmes et byte. Dette er en abstraktion

Processoren arbejder hele tiden med hukommelser, læser/skriver instruktioner og variable

### Words

En samling af bits, det er en typeløs værdi

Længe 8, 16, 32 (potens af 2)

Med 32 bits (4 byte words) er adresser begrænset til 4 gb

64 bits (8 byte words) er det potential adresserum 2^64

86x-64 bruger 48-bit adresser: 256 terabytes.

adressen for et word er så det byte hvor wordet starter!


### Big end-ian

Mest betydende byte har største adresse

### Little End-ian

x86 bruger little end-ian

mindst betydende byte har højst adresse.

Det er vigtigt at vide til når man skal oversætte maskinkode til tekst. Der er det vigtigt at vide hvilken end-ian format der bruges.

Kommunikere rå binær data mellem de to forskellige modeller af end-ian

Internetprotokollerne bruger Big-end ian

## Repræsentation af C-datatyper

char: 1 byte
short: 2 bytes
int: 4 bytes
long: 8 bytes
long long 8 bytes
pointer: 8 bytes
  

### Pointers

En adresse på objektets placering i hukommelsen, størrelsen af en pointer svarer normalt til ordstrørrelsen

### Strenge

Sidste karakter skal være 0, hver karakter fylder 1 byte.

## Boolsk algebra, bit manipulation, logiske sandhedsudtryk

1 er true, 0 er false i maskin arkitektur

Xor = Exclusive or, er sand når kun enten a eller b er sande.

Der er regler for boolsk algebra (se slides for reglerne)

En bitmaske bruges til at udlæse diverse bits. Man bruger and operatoren på det.

Ved mængder så har man en talrække på det højeste tal og sætter 1 hvis tallet er der og 0 hvis det ikke er der.

### logiske udtryk

evalueres med kortslutningsevaluering, så snart vi kender udfaldet så evalueres der ikke yderligere udtryk.

man kan bruge logiske udtryk til at undgå de-referering af null-pointer. p && *p