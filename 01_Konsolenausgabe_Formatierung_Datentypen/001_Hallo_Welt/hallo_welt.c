#include <stdio.h>
/*
    Einbinden der C-Standardbibliothek stdio.h
    stdio steht für "standard input output"
    Diese Funktionssammlung ermöglicht es uns Daten auszugeben bzw. einzulesen
*/

/*
    Den Einstiegspunkt unserer Programme geben wir mit main() an.
    Der Rückgabewert vom Typ int wird vom Standard fest definiert.
    https://en.cppreference.com/w/c/language/main_function
    Es gibt zwei unterschiedliche Definitionen:
        - keine Übergabeparameter (wie in diesem Beispiel)
        - zwei Übergabeparameter: int varName, char *varName2[]
          Sie dienen Programmen dazu eventuelle Optionen, mit denen das Programm
          gestartet wurde zu verarbeiten.

*/
int main() {
    // Ausgabe von Text (char-Array) auf der Konsole
    puts("Hallo Welt!");
    // Rückgabewert unseres Programms. 0 bedeutet es ist kein Fehler aufgetreten
    return 0;
}