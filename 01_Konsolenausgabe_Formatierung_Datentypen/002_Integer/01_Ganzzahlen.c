#include <stdio.h>

int main(){
    // Eine einfache Variablen>>deklaration<<.
    int zahl1;
    // Wir können auch mehrere Variablen deklarieren, einfach durch Kommata trennen.
    int zahl2, zahl3;
    // Man kann auch gleichzeitig deklarieren und initialisieren.
    int zahl4 = 4;
    
    // Initialisierung der Integer zahl1 und zahl2, zahl3 bleibt uninitialisiert.
    zahl1 = 1;
    zahl2 = 2;
    
    /* 
        Formatierte Ausgabe:
        Wenn wir Werte von Variablen in einer Zeichenkette ausgeben wollen müssen wir printf() verwenden.
        Als erstes Argument übergeben wir den gewünschten Ausgabetext mit Platzhaltern an den Stellen,
        an denen wir die Werte unserer Variablen ausgeben wollen.
        %d ist hierbei der Platzhalter für ganze Zahlen im Dezimalsystem (signed),
        wahlweise funktioniert auch %i .
        \n ist das Sonderzeichen für new line, also ein Zeilenumbruch.
        Nach der Zeichenkette kommen, durch Kommata getrennt und in richtiger Reihenfolge, die Variablen,
        durch die unsere Platzhalter ersetzt werden sollen.
    */
    printf("Zahl1 = %d\n", zahl1);
    printf("Zahl2 = %d\n", zahl2);
    // zahl3 haben wir nicht initialisert, was wohl ausgegeben wird?
    printf("Zahl3 = %i\n", zahl3);
    // zahl4 wurde wieder initialisiert, kein Problem =)
    printf("Zahl4 = %i\n", zahl4);
    // Alle Variablen in einer Textzeile:
    printf("\nNur eine printf()-Anweisung:\nZahl1 = %d\nZahl2 = %i\nZahl3 = %d\nZahl4 = %d\n", zahl1, zahl2, zahl3, zahl4);

    return 0;
}