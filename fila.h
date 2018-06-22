typedef struct fila Fila;

Fila* cria();
void insere_elem(Fila* f, int element);
int retira(Fila* f);
int vazia(Fila* f);
void libera(Fila* f);
void imprime_fila(Fila* f);
