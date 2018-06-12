#include <stdlib.h>
#include <stdio.h>

typedef struct{
	int pre;
	int v[100];
}vetor;

void insere(vetor* v, int a){
	int n = v->pre;
	if(v->pre<100)
	{
		printf("Insira o valor que deseja inserir: ");
		scanf("%d", &(v->v[n]));
	}
	v->pre += 1;
}

void deleta(vetor* v, int a){
	v->v[a] = NULL;
}

void busca(vetor v, int b){
	printf("%d\n", v.v[b]);
}

void imprime(vetor v){
	int i;
	for (i=0;i<v.pre;i++){
		printf("%d ", v.v[i]);
	}
	puts("");
}

int main(int argc, char* argv[]){
	vetor v;
	v.pre = 10;
	int i;
	for(i=0;i<v.pre;i++){
		printf("Insira um numero no vetor: ");
		scanf("%d", &v.v[i]);
	}
	insere(&v,30);
	deleta(&v,5);
	busca(v,7);
	imprime(v);

	return 0;

}