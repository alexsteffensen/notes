# Kursusgang 3

"word" refererer til en 16-bit data type

"double words" og "quad words" er så henholdsvis 32 og 64 bit typer.

Så en int bliver stored som et double word da en int fylder 4 byte.

Se figur 3.1 i side 214 for at se størrelserne for c data typer i x86-64 bit

en x86-64 cpu har 16 "general-purpose registrers" som holder 64-bit værdier

movb = move byte, movw = move word, movl = move double word, movq = move quad word.

movabsq = move absolute quad word.

Kig på figurerne, de kommer med en masse fakta, da det er tables (3,5 3,6

leaq = load effective address er en variant af movq. det læser fra memory til en register, men den referencer aldrig memory.

Når der er () ved move så betyder det at det er adgangen til hukommelsen som er angivet (* ved pointer)
