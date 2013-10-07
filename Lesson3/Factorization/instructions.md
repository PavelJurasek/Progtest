Progtest Lesson 3
Task 2

Faktorizace
Termín odevzdání: -
Hodnocení: 1.0000
Max. hodnocení: 1.0000 (bez bonusů)
Odevzdaná řešení: - / 20
Nápovědy: - / 2 

Realizujte program, který faktorizuje (rozloží) zadané desetinné číslo na dvě desetinná čísla. Rovněž spočítá chybu faktorizace.

Vstupem programu je jedno nezáporné a dvě kladná desetinná čísla oddělená mezerou. Prvním číslem je rozkládané číslo (označené v), druhá dvě jsou inicializační hodnoty faktorů označených w a h.

Výstupem programu jsou dvě desetinná čísla představující faktory po provedeném výpočtu a chyba faktorizace. Faktorizace se provádí následujícími vzorci: 

h = h * ((w * v) / (w * w * h)) 

w = w * ((v * h) / (w * h * h))

Chyba faktorizace se pak určí jednoduše vynásobením faktorů w a h mezi sebou a odpočtem výsledku od faktorizovaného čísla v.

Program detekuje chybu, zobrazí chybové hlášení dle ukázky a ukončí se, pokud jsou na vstupu nečíselné hodnoty nebo pokud jsou hodnoty zadaných čísel v rozporu s podmínkami výše. Chybové hlášení vypisujte na standardní výstup (nevypisujte jej na standardní chybový výstup).

Dodržte přesně formát všech výpisů. Výpis Vašeho programu musí přesně odpovídat ukázkám. Testování provádí stroj, který kontroluje výpis na přesnou shodu. Pokud se výpis Vašeho programu liší od referenčního výstupu, je Vaše odpověď považovaná za nesprávnou. Záleží i na mezerách, i na odřádkování. Nezapomeňte na odřádkování za posledním řádkem výstupu (a za případným chybovým hlášením). Využijte přiložený archiv s testovacími vstupy a výstupy a přečtěte si sekci FAQ, jak využít přesměrování vstupů/výstupů k testování Vašeho programu.

Váš program bude spouštěn v omezeném testovacím prostředí. Je omezen dobou běhu (limit je vidět v logu referenčního řešení) a dále je omezena i velikost dostupné paměti (ale tato úloha by ani s jedním omezením neměla mít problém). Testovací prostředí dále zakazuje používat některé "nebezpečné funkce" -- funkce pro spouštění programu, pro práci se sítí, ... Pokud jsou tyto funkce použité, program se nespustí. Možná ve svém programu používáte volání: 

```
int main ( int argc, char * argv [] ) {
	... system ( "pause" ); /* aby se nezavrelo okno programu */ 
	return 0; 
}
```

Toto nebude v testovacím prostředí fungovat - je zakázáno spouštění jiného programu. (I pokud by se program spustil, byl by odmítnut. Nebyl by totiž nikdo, kdo by pauzu "odmáčkl", program by čekal věčně a překročil by tak maximální dobu běhu.) Pokud tedy chcete zachovat pauzu pro testování na Vašem počítači a zároveň chcete mít jistotu, že program poběží na Progtestu správně, použijte následující trik: 

```
int main ( int argc, char * argv [] )
{ 
	... 
	#ifndef __PROGTEST__ 
		system ( "pause" ); /* toto progtest "nevidi" */ 
	#endif /* __PROGTEST__ */ 
	return 0; 
}
```

Ukázka práce programu: 

Zadejte hodnoty v, w a h:
4 3 2.2
Cislo 4.000 lze faktorizovat na 3.000 x 1.333. Faktorizace ma chybu 0.000.

Zadejte hodnoty v, w a h:
5 2 1.1
Cislo 5.000 lze faktorizovat na 2.000 x 2.500. Faktorizace ma chybu 0.000.

Zadejte hodnoty v, w a h:
1 2 chyba
Nespravny vstup.

Zadejte hodnoty v, w a h:
5 0 2
Nespravny vstup.

Zadejte hodnoty v, w a h:
-3.14 1.5 -2.4
Nespravny vstup. 

Nápověda: Používejte datový typ double, nikoli float.
