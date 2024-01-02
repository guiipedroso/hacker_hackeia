#include <stdio.h>
#include <stdlib.h>

void 
logo()
  {
  printf("\nBy Guilherme Pedroso\n\n");
  }

double 
converterParaDecimal(int graus, int minutos, double segundos, char direcao) 
  {
  double decimal = graus + minutos / 60.0 + segundos / 3600.0;

  /* Se a direção for S ou W, faz a coordenada negativa */
  if (direcao == 'S' || direcao == 'W') {
        decimal = -decimal;
  }

  return decimal;
}

int 
main(int argc, char *argv[]) 
  {
  if(argc != 9)
    {
    printf("Uso: %s latGraus latMinutos latSegundos latDirecao lonGraus lonMinutos lonSegundos lonDirecao\n", argv[0]);
    return(1);
    }
 
  int latGraus = atoi(argv[1]);
  int latMinutos = atoi(argv[2]);
  double latSegundos = atof(argv[3]);
  char latDirecao = argv[4][0];
  int lonGraus = atoi(argv[5]);
  int lonMinutos = atoi(argv[6]);
  double lonSegundos = atof(argv[7]);
  char lonDirecao = argv[8][0];

  double latitude = converterParaDecimal(latGraus, latMinutos, latSegundos, latDirecao);
  double longitude = converterParaDecimal(lonGraus, lonMinutos, lonSegundos, lonDirecao);

  printf("Latitude: %f\n", latitude);
  printf("Longitude: %f\n", longitude);
  printf("For research: %f, %f\n\n", latitude, longitude);
  logo();
  return(0);
  }

