Progtest Lesson 3
Task 1

Písmena
Termín odevzdání: - 
Hodnocení: 1.0000 
Max. hodnocení: 1.0000 (bez bonusů) 
Odevzdaná řešení: - / 20 
Nápovědy: - / 2 

Realizujte program, který v zadaném vstupním řetězci zamění malá písmena za velká, velká písmena za malá a číslice nahradí malými písmeny. 

Vstupem programu je libovolný jednoslovný řetězec. Řetězec má nejvýše 80 znaků. 

Výstupem programu je řetězec obsahující velká (malá) písmena tam, kde vstupní řetězec měl písmena malá (velká), případně malá písmena namísto číslic. Hodnota číslice odpovídá pořadí písmene v anglické abecedě, počítáno od nuly. 0 je tedy převedena na znak 'a', 1 na znak 'b' atd. 

Program ignoruje znaky jiné než malá a velká písmena a číslice a na výstup je nevypisuje. 

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

Input | Output
----- | -----
abcABC012 | ABCabcabc
Homunkulus | hOMUNKULUS
0123456789 | abcdefghij
abc_BCD_678 | ABCbcdghi
student.solidni@vsb.cz | STUDENTSOLIDNIVSBCZ
Ostrava,17.listopadu70833 | oSTRAVAbhLISTOPADUhaidd
