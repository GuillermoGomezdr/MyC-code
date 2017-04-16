#ifndef __4RAYA_H__
#define __4RAYA_H__

#define N 5

#ifdef __cplusplus
extern "C" {
#endif

	int comprobarGanador(char cg_ficha, char cg_tablero[N][N]);
	void imprimirTablero(char tablero[N][N]);

#ifdef __cplusplus
}
#endif

#endif
