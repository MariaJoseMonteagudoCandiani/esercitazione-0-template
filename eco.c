#include <stdio.h>
#include <stdlib.h>

int leggi_intero(int argc, char*argv[] ){
  int valore = 0;
  for (int i=1; i<argc; i++){
    valore = atoi(argv[i]);
		}
    return valore;
  }
double leggi_reale(const char *str){
  return atof(str);
}
int main(int argc, char *argv[])
{
    if (argc != 4) {
        fprintf(stderr, "Uso: %s TESTO INTERO REALE\n", argv[0]);
        return 2;
    }

    char *testo = argv[1];
    int intero = atoi(argv[2]);
    double reale = atof(argv[3]);
    (void)testo;

    printf("Testo:%s\n Intero:%d\nReale:%lf\n",testo,intero,reale);

    return 0;
}
