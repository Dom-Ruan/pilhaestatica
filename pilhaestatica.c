#include<stdio.h>
#define MAX 10
	typedef int conteudo;
	typedef struct {
		int topo;
		  conteudo pilha[MAX];
	} pilhaEstatica;
	void inicia (pilhaEstatica *p);
	char pilhaCheia (pilhaEstatica p);
	char pilhaVazia (pilhaEstatica p);
	void desempilha (pilhaEstatica *p);
	void empilha (pilhaEstatica *p,conteudo e);
	char busca (pilhaEstatica p);
	void mostra (pilhaEstatica *p);
		int main(){
			port
			int x,e,i;
			pilhaEstatica *p;
			inicia(p);
			for(i=1;i>0;i++){
			printf("\n(1)Empilha (2)Desempilha (3)Buscar (4)Mostrar pilha (5)Fechar programa ");
			scanf("%d",&x);
			switch (x){
				case 1: 
					printf("Digite o valor a ser empilhado: ");
					scanf("%d",&e);
					empilha(p,e); break;

				case 2:	desempilha(p);	break;
				case 3: busca(*p);   break;
			     case 4: mostra (p); break;
			     case 5: break; 
}
if (x==5)
break;
}
return 0;
}
		void inicia (pilhaEstatica *p){
			p->topo=0;
}
		char pilhaCheia (pilhaEstatica p){
			
			if(p.topo>MAX)
				return 1;
			else    

			return 0;
}
		char pilhaVazia (pilhaEstatica p){
			if(p.topo==0)
			return 1;
			else
			return 0;
}
		void desempilha (pilhaEstatica *p){
			p->topo--;
}
		void empilha (pilhaEstatica *p,conteudo e){
			p->pilha[p->topo]=e;
			p->topo++;
}
		char busca (pilhaEstatica p){
		    int x,i;
		    printf("Digite o valor a ser buscado: ");
		    scanf("%d",&x);
			for(i=0;i<p.topo;i++){
				if(p.pilha[i]==x){
					printf("O número %d é o %dº da pilha",x,i+1);
					return;
}
}
printf("\nO número que você digitou não está na pilha");
}				
		void mostra (pilhaEstatica *p){
		int i;
		for(i=0;i<(p->topo);i++)
		printf("\t%d",p->pilha[i]);
}

