#include <stdio.h>

int main() {
    /* 
        Hier wollen wir uns mit den Unterschieden zwischen den Funktionen
        puts() und printf() beschäftigen.
        Beides sind Funktionen, die in der C-Standardbibliothes "stdio.h" 
        definiert sind.
        puts() steht für 'put string' = Gib eine Zeichenkette auf der Konsole
        bzw. dem Ausgabegerät aus (früher waren es oft Geräte wie Drucker).
        printf() steht für 'print formatted' = Gib eine formatierte Zeichenkette aus.
    */

    // Probieren wir zuerst zwei Ausgaben mit puts()
    puts("Dies ist die erste Ausgabe mit puts()");
    puts("Dies ist die zweite Ausgabe mit puts()");
    // Wie wir sehen, werden beide Zeichenketten in unterschiedlichen Zeilen ausgegeben.


    // Nun testen wir das Ganze mal mit printf()
    printf("Dies ist die erste Ausgabe mit printf()");
    printf("Dies ist die zweite Ausgabe mit printf()");
    // Beide Zeichenketten wurden ausgegeben, doch stehen beide diesmal in nur einer Zeile

    /*
        Doch warum ist das so?
        puts() schreibt eine Zeichenkette bis zum sog. Nullzeichen (8 bit, die alle den Wert 0 haben)
        Dieses Nullzeichen gibt in C immer das Ende einer Zeichenkette an und kann mit der Escape-Sequenz
        '\0' angegeben werden. Dabei ist darauf zu achten, dass nach der 0 keine Zahl von 0-7 kommt (Oktalsystem).
        Sobald puts() das Nullzeichen erreicht hängt es ein Zeilenumbruch an. Die Escape-Sequenz für ein
        Zeilenumbruch ist: '\n'. Das `n` steht für new line.
        Eine Übersicht der Escapesequenzen liefert Wikipedia:
        https://de.wikipedia.org/wiki/Escape-Sequenz#In_C_und_verwandten_Programmiersprachen
    */

    // Ein Zeilenumbruch mit einem leeren String in puts():
    puts("");

    // Probieren wir mal, was passiert, wenn wir das Nullzeichen innerhalb einer Zeichenkette angeben:
    puts("Ich bin eine Zeichenkette\0 die ein Nullzeichen enthält!");
    // Der Rest der Zeichenkette wird also einfach ignoriert. Direkt nach dem Nullzeichen kommt der
    // Zeilenumbruch und dann ist Schluss.

    /*
        To be continued...
    */

    return 0;
}