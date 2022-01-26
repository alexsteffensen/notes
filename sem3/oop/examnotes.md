# Exam Notes

OOP er programmering hvor man bruger objekter.

### Objekt

Et objekt er en instans af en klasse

``` cs
Person Alexander = new Person();
```

Hvis der var en klasse der hedder person, så i koden ovenover laver instantierer jeg et objekt af klassen "Person".

### Klasser

En klasse er en "blueprint"/opskrift til et objekt. Inde i en klasse kan man se alle attributter og metoder som et objekt af den her klasse har.

## Abstraktion

Når man laver abstraktion er det for at gemme det unødvendige for brugeren. Det nedsætter kompleksiteten. Fx sig at man har en kaffemaskine. Man kan se de forskellige funktioner som den her kaffemaskine har, men ikke hvordan de er blevet implementeret.

Det samme er det i oop, her gemmer vi implementationen væk for brugeren.

``` cs
Person alex = new Person("Alexander Skytt Steffensen", 22);
alex.Present();
```

I koden ovenover laves der et objekt af klassen "Person" og derefter køres metoden ```Present()```. Vi kan ikke se implementationen bag metoden, men gennem navnet ved vi at den præsenterer personen.

I stregsystemet er controlleren ligeglad hvordan at coren laver en transaktion og udfører den, men ud fra funktionsnavnet ved den at den gør det.

### Abstrakte klasser

En abstrakt klasse er en klasse der ikke kan instantieres. Andre klasser skal derimod nedarve fra den. Her er det igen mening at gemme implementation, men også at genbruge kode.

Et eksempel kunne være Transactions klassen der er absktrakt. En transaktion er jo enten en købetransaktion (BuyTransaction) eller en InsertCashTransaction. Men enhver form for transaction har et sæt fields og metoder som så er defineret i Transaction klassen. Fx så har en transaction et id, en bruger der udfører transaktionen. Alle transaktioner har også en Execute metode som udfører transaktionen.

En abstakt klasse kan godt have constructors. En abstract klasse kan definere abstrakte medelmmen med abstract keywordet. Den kan gøre det til metoder såvel som til properties.

### Abstrakte medlemmer

Abstrakte medlemmer har ***ingen*** implementation, dsv ingen krop, men kun signaturen.

Abstrakte medlemmer kan ikke være private.

Afledte, konkrete, klasser skal implementere alle abstrakte medlemmer.

Kun abstrakte subklasser er fritaget for kravet om implementation.

### Indkapsling

Indkapsling er når at et objekt har et privat stadie, menes at dets fields er private. Meningen er så at disse fields kan ændres gennem public metoder.

Så indkapsling er primært at noget er indkapslet, og er derfor uden for scopet når det er noget andet.

Fx så er alt logic der omhandler ui'en altså det der skrives ud til konsollen det er i StregsystemCLI klassen. Derudover er diverse funktionaliteter indkapslet i metoder.

### Fields

Et field er en variabel der eksisterer for en given instans af en klasse. De burde altid være private.

### Properties

Properties exposer fields. Det er dem der har en get og set properties. Det her giver en form for abstraktion hvor man kan ændre på et field, men man kan ikke se hvordan det tilgås. Derudover kan man også have validering gennem en set property.

Et godt eksempel er email property inde i user klassen.

### Methods

En metode er en funktion barce i oop. metoder er handlinger som et objekt af klassen kan udføre. En metode kan tage imod parametre og give et output ligesom funktioner kan.

## Constructors

En constructor er en special metode der kaldes når der laves en instans af et objekt fra en klasse. En constructor kan sikre programmet at der bliver udfyldt visse fields eller kørt diverse methods idet der laves en instans af en klasse.

En constructor gør at et objekt kan initialisere sig selv når det bliver lavet. 

En constructor funktion skal altid have det samme navn som navnet på klassen.

Det har ikke en return type og ikke engang void.

Man kan godt have flere constructors i en klasse.

***Default Constructor***: Når man ikke selv har lavet en constructor så vil compileren automatisk lave en for os. Målet med default constructoren er at den gør at man kan instantiere et objekt af den klasse type.

***Parameteriseret Constructor***: Denne constructor har en eller flere parametre. Den skal man selv lave.

## Polymorfisme

Polymorfisme er evnen til at behandle objekter forskelligt alt efter deres data type eller klasse og evnen til at redefinere metoder for base klasser.

Polymorfi er også at et objekt fra en klasse kan opføre sig anderledes alt efter hvad det instantieres som, fx kan BuyTransaction både opføre sig som en BuyTransaction og en Transaction.

### Statisk polymorfisme

Sker ved compile tid

Det handler om metode overloading. Så at metoder kan have samme navn, hvis de bare tager forskellig parameter

``` cs
public void add(int a, int b) {
    //code
}

public void add(int a, long b) {
    //code
}

public void add(int a, int b, int c) {
    //code
}
```

Statisk polymofisme er konceptet at flere forskellige klasser kan allesammen implementere det samme interface.

### Dynamiske polymorfisme

Når der overrides en funktion fra en superklasse af en subklasse.

Det sker på run time, så det er fx når vi kører Execute() der overrides i transactions.

### Specialisering (af klasse)

Under ses en specialisering af Transaction klassen, den er specialiseret til at være en BuyTransaction

``` cs
public class BuyTransaction : Transaction {
    // code
}
```

### Generalisering (af klasse)

Generalisering er den teknik hvor man tager det essentielle fra to eller flere subklasser og kombinerer dem indeni en generaliseret base class.

### Statiske klasser

En statisk klasse kan ikke instatntieres, så der kan ikke bruges new operatoren på den. En statisk klasse er ment til at have funktionalitet og ikke indeholde fields. 

Et godt eksempel på en statisk klasse er Math klassen, som indkapsler matematiske metoder. Metoder i en statisk klasse skal også være statiske.

## Nedarvning

Nedarvning er den evne af at et objekt kan arve nogle/alle properties og metoder fra et andet objekt. Med nedarvning kan man genbruge meget mere kode ved at lave en superklasse og få baseklasserne til at nedarve fra superklassen.

fx er Transactions en superklasse og BuyTransaction og InsertCashTransaction er BaseKlasser

En klasse kan kun nedarve fra en klasse. Tænk på diamant problemet.

### Single nedarvning

Når en klasse nedarver fra en anden klasse.

### Multipel nedarvning

Når en klasse nedarver fra flere klasser: Diamant problemet.

### Multi-level nedarvning

man laver en kæde af nedarvninger. Person nedarves af Student som nedarves af CS student

### Hieraktisk nedarvning

Flere klasser nedarver fra en klasse, og former et familie træ, eller hieraki.

### Hydrid nedarvning

Når to eller flere are de andre typer nedarvninger er kombineret til en.

### Interfaces

Et interface er en abstrakt klasse med udelukkende (public) abstrakte medlemmer. Der er ingen implementation, ingen data og et interface kan ikke instantieres.

Alle medlemmer skal implementeres i subtyper.

Interfaces giver polymorfi, statisk.

Eksempler på interface librarires: IComparable (Sammenligning med CompareTo) og IComparer (Afkobling af sammenligning)

Interfaces kan arve fra hinanden.

### Exceptions

Exceptions er er det unexpected event der kan ske når man kører et program. Når en exception bliver throwed, så vil readeren gå op gennem stacken for at finde en catch blok. Hvis den ikke finder en catch blok, så terminerer programmet.

Exception handling gøres ved brug af ```try```, ```catch``` og ```finally```. Inde i try har man den kode som der måske kan kaste en exception. Hvis der kastes en exception i ```try```
 blokken så vil ```catch``` fange exceptionen, og undgå at programmet terminates.

For at gøre exception handling bedre kan man lave sine egne exceptions, så at man nemmere kan forstå hvad der gik galt da der blev throwed en exception.

```cs
try{

    //code

}
catch(Exception1 e) {
    Console.WriteLine(e.Message);
}
catch(Exception2 e) {
    Console.WriteLine(e.Message);
}
catch(Exception3 e) {
    Console.WriteLine(e.Message);
}
```

### Generic Types

Generics gør at vi kan lave/definere en metode eller klasse der kan bruges med alle data typer. Det er godt fordi så kan man genbruge kode.

### Delegates

En delegate er en reference type som holder en reference til en metode.

``` cs
delegate string StringJoin(string l, string r);

class Program
{
    static void Main(string[] args)
    {
        string ConcatString(string l, string r) { return l + r; }
        
        StringJoin joinStrings = ConcatString;

        Console.WriteLine(joinStrings("Hello ", "delegate"));
    }
}
```

I kode eksemplet kan vi se at delegates bruges som en reference til ConcatString metoden.

### Collections



### Testing

**Unit test**: Aftestning af programmets mindste dele i isolation.

**Integration test**: Teste integrationen mellem komponenter.

**System test**: Tester systemet som en helhed (performance, sikkerhed, GUI)

**Acceptance test**: Aftestning via slutbruger - afviger systemet fra kundens krav?

Dækkende unit tests er byggeblokken for efterfølgende tests.

En god test har en god sandsynlighed for at afdække en fejl

**Arrange**: Data der skal bruges som input til testen klargøres. Instantierer objekter og initialiserer variabler.

**Act**: Udførelse af kode under test med data fra Arrange skridtet.

**Assert**: Korrektheden af antagelser for kode under test verificeres.

### Design Patterns

Command: 

## Events

