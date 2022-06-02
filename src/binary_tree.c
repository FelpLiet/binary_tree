#include <stdio.h>
#include <stdlib.h>

typedef struct vertex
{
    int data;

    struct Vertex *rigth;
    struct Vertex *left;
} vertex;

vertex *root = NULL;
int tam = 0;

void insert(int num)
{
    //criar vertice
    //chamar funcao buscar 
    //recupera o retorno
    //vertex *teste = busca(7,raiz);
    //verifica de pode adicionar 
    //se sim verifica se adicona na esqd ou na dir da variavel teste
    vertex * new = malloc(sizeof(vertex));
    if (root == NULL)
    {
        root = new;
    }
    else
    {
        vertex *test = search(num,root);
        if (new < test->data){
            test->left=new;
        }else{
            test->rigth=new;
        }
    }
}
//VERTICE *adicionar_2(int id, VERTICE *novo)
// {

//     // criar o vertice - receber dados
//     // VERTICE *novo = malloc(sizeof(VERTICE));
//     // setar dos dados
//     // chamar a funcao buscar!
//     // recupera o retorno
//     //  VERTICE *teste = busca(7, raiz);
//     // verifica se pode adicionar!
//     // se sim, verifica se adiciona na esq ou na dir da variavel teste
//     if (novo == NULL)
//     {
//         VERTICE *aux = malloc(sizeof(VERTICE));
//         aux->dir = NULL;
//         aux->esq = NULL;
//         aux->id = id;
//         return aux;
//     }

//     if (raiz = NULL)
//     {
//         raiz = novo;
//     }
//     else
//     {
//         if (id < novo->id)
//         {
//             novo->esq = adicionar_2(id,novo->esq);
//         }
//         else
//         {
//             novo->dir = adicionar_2(id,novo->dir);
//         }
//         return novo;
//         // achei que dessa forma ele pudesse acessar e adicionar mas esta indo para outro endereco qeu nao vejo
//     }
// }
vertex *search(int id, vertex *aux)
{
    if (aux != NULL)
    {
        if (aux->data == id)
        {
            return aux;
        }
        else if (id < aux->data)
        {
            if (aux->left != NULL)
            {
                return search(id, aux->left);
            }
        }
        else if (id > aux->data)
        {
            if (aux->rigth != NULL)
            {
                return search(id, aux->rigth);
            }
        }
    }
    else
    {
        return NULL;
    }
}

void print_pre(vertex *aux)
{
    printf("%d", aux->data);
    if (aux->left = NULL)
    {
        print_pre(aux->left);
    }
    if (aux->rigth = NULL)
    {
        print_pre(aux->rigth);
    }
}

void print_pos(vertex *aux)
{
    if (aux->left = NULL)
    {
        print_pre(aux->left);
    }
    if (aux->rigth = NULL)
    {
        print_pre(aux->rigth);
    }
    printf("%d", aux->data);
}

void print_in(vertex *aux)
{
    if (aux->left = NULL)
    {
        print_pre(aux->left);
    }
    printf("%d", aux->data);
    if (aux->rigth = NULL)
    {
        print_pre(aux->rigth);
    }
}

int main(int argc, char const *argv[])
{
    insert(5);
    insert(8);
    insert(3);
    insert(1);
    insert(2);
    insert(9);
    print_in(root);
    return 0;
}
