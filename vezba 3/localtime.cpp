//Sandra Kolevska INKI969
/* localtime example */
#include <stdio.h>      /* puts, printf */
#include <time.h>       /* time_t, struct tm, time, localtime */

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;

  time (&rawtime);
  timeinfo = localtime (&rawtime);
  printf ("Current local time and date: %s", asctime(timeinfo));

  return 0;
}

/*Za ovaa programa C++ ja koristi bibliotekata time.h za da go dobie tekovnoto lokalno vreme i datum.
Toa go pravi prvo so deklariranje na promenliva time_t narecena rawrime i pokazuvac na tm struktura narecena timeinfo.
Funkcijata time() potoa se koristi za da se dobie tekovnoto vreme vo sekundi koe e zacuvano vo rawtime.
Funkcijata localtime() potoa se koristi za konvertiranje na ovaa rawtime vrednost vo struktura tm koja go pretstavuva tekovnoto lokalno vreme i datum.
Funkcijata asctime() se koristi za formatiranje na informaciite za vremeto i datumot kako niza, koja se pecati vo konzolata koristejki ja funkcijata printf().
Programata potoa zavrshuva so vrakjanje na 0.*/
