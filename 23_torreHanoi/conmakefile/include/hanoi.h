#ifndef __HANOI_H__
#define __HANOI_H__

#define MAX 3

struct TPila{
	int tipo[MAX];
	int cima;
};

#ifdef __cplusplus
extern "C" {
#endif

void push(struct TPila *pila, int dato);
int pop(struct TPila *pila);
void imprimirPlato(struct TPila *plato);
void realizarCambio(struct TPila *platoTo, struct TPila *platoFrom);

#ifdef __cplusplus
}
#endif

#endif
