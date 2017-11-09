#ifndef FILA_H_
#define FILA_H_

/*TipoItem Pessoa (tipo opaco). Contem campos:
  - nome (string)
  - idade (int)
  - endereco (string)
  */
typedef struct pessoa Pessoa;


/*Tipo que define a fila (tipo opaco)
  Atencao: Esta fila pode conter ate 10 Pessoas
*/
typedef struct fila Fila;


/*Inicializa a Fila
* inputs: nenhum
* output: P (a fila criada)
* pre-condicao: nenhuma
* pos-condicao: P está definida e vazia
*/
Fila* cria_fila();

/*Insere uma pessoa no topo da Fila (se houver espaco)
* inputs: P (uma Fila) e E (uma pessoa)
* output: nenhum
* pre-condicao: P nao vazia e com espaco para o elemento.
* pos-condicao: Ao final da função, a Fila tem E como o elemento
do topo
*/
void push(Pessoa* pessoa, Fila* fila);


/*Retira uma Pessoa do topo da Fila (se Fila não vazia)
* inputs: a Fila
* output: a pessoa retirada do topo da Fila
* pre-condicao: Fila não é nula e não é vazia
* pos-condicao: Fila não contém o elemento retirado do topo
*/
Pessoa* pop(Fila* fila);


/*Libera a memoria ocupada pela Fila
* inputs: a Fila
* output: NULL
* pre-condicao: Fila não é nula
* pos-condicao: Toda memoria eh liberada
*/
Fila* destroi_fila(Fila* fila);

/*Verifica se a Fila estah vazia
* inputs: a Fila
* output: 1 (se vazia), 0 (caso contrario)
* pre-condicao: Fila não é nula
* pos-condicao: Fila permanece inalterada
*/
int vazia_fila (Fila* fila);


/*Retorna o numero de elementos da Fila
* inputs: a Fila
* output: o numero de elementos da Fila
* pre-condicao: Fila não é nula
* pos-condicao: Fila permanece inalterada
*/
int tamanho_fila (Fila* fila);


/*Inicializa um TipoItem Pessoa
* inputs: o nome, a idade e o endereco da pessoa
* output: um ponteiro para o tipo item criado
* pre-condicao: nome, idade e endereco validos
* pos-condicao: tipo item criado, com os campos nome, idade e endereco copiados
*/
Pessoa* inicializaPessoa(char* nome, int idade, char* endereco);


/*Imprime as pessoas da Fila
* inputs: a Fila
* output: nenhum
* pre-condicao: Fila P não vazia
* pos-condicao: Fila permanece inalterada
*/
void imprime_Fila (Fila* fila);


/*Imprime os dados de uma pessoa
* inputs: Uma estrutura pessoa
* output: nenhum
* pre-condicao: Pessoa P não nula
* pos-condicao: Os dados da pessoa permanecem inalterados
*/
void imprimepessoa(Pessoa* p);


/*Retorna a idade de uma pessoa
* inputs: Uma estrutura pessoa
* output: nenhum
* pre-condicao: Pessoa P não nula
* pos-condicao: Os dados da pessoa permanecem inalterados
*/
int retorna_idade (Pessoa* p);

#endif /* FILA_H_ */
