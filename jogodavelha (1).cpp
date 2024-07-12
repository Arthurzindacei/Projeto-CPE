#include <iostream>
#include <cstdlib>
using namespace std;

#define linhas 3
#define colunas 3
#define nada '_'
char ganhador = 'E';
char jogo[3][3];
int local;
char jogadorX = 'X';
char jogadorO = 'O';
int tabuleirotam = linhas * colunas;


	

void verifvitO(){
	if (jogo[0][0]==jogadorO && jogo[0][0]==jogo[0][2] && jogo[0][0] == jogo[0][1]){
 	cout << "\n PARABENS!! O Jogador O GANHOU!! \n";
 	ganhador = 'O';
 	
 	}else if (jogo[1][0]==jogadorO && jogo[1][0]==jogo[1][2] && jogo[1][0] == jogo[1][1]){
 		cout << "\n PARABENS!! O Jogador O GANHOU!! \n";
 		ganhador = 'O';
	 } else if(jogo[2][0]==jogadorO && jogo[2][0]==jogo[2][2] && jogo[2][0] == jogo[2][1]){
	 	cout << "\n PARABENS!! O Jogador O GANHOU!! \n";
	 	ganhador = 'O';
	 }else if (jogo[0][0]==jogadorO && jogo[0][0]==jogo[1][0] && jogo[0][0] == jogo[2][0]){
	 	cout << "\n PARABENS!! O Jogador O GANHOU!! \n";
	 	ganhador = 'O';
	 }else if (jogo[0][1]==jogadorO && jogo[0][1]==jogo[2][1] && jogo[0][1] == jogo[1][1]){
	 	cout << "\n PARABENS!! O Jogador O GANHOU!! \n";
	 	ganhador = 'O';
	 }else if (jogo[0][2]==jogadorO && jogo[0][2]==jogo[1][2] && jogo[0][2] == jogo[2][2]){
	 	cout << "\n PARABENS!! O Jogador O GANHOU!! \n";
	 	ganhador = 'O';
	 } else if (jogo[0][0]==jogadorO && jogo[0][0]==jogo[2][2] && jogo[0][0] == jogo[1][1]){
	 	cout << "\n PARABENS!! O Jogador O GANHOU!! \n";
	 	ganhador = 'O';
		 } else if (jogo[0][2]==jogadorO && jogo[0][2]==jogo[1][1] && jogo[0][2] == jogo[2][0]){
	 	cout << "\n PARABENS!! O Jogador O GANHOU!! \n";
	 	ganhador = 'O';
		 } 
		 }

void verifvitX(){
	if (jogo[0][0]==jogadorX && jogo[0][0]==jogo[0][2] && jogo[0][0] == jogo[0][1]){
 	cout << "\n PARABÉNS!! O Jogador X GANHOU!! \n";
 	ganhador = 'X';
 	
 	}else if (jogo[1][0]==jogadorX && jogo[1][0]==jogo[1][2] && jogo[1][0] == jogo[1][1]){
 		cout << "\n PARABENS!! O Jogador X GANHOU!! \n";
 		ganhador = 'X';
	 } else if(jogo[2][0]==jogadorO && jogo[2][0]==jogo[2][2] && jogo[2][0] == jogo[2][1]){
	 	cout << "\n PARABÉNS!! O Jogador X GANHOU!! \n";
	 	ganhador = 'X';
	 }else if (jogo[0][0]==jogadorX && jogo[0][0]==jogo[1][0] && jogo[0][0] == jogo[2][0]){
	 	cout << "\n PARABENS!! O Jogador X GANHOU!! \n";
	 	ganhador = 'X';
	 }else if (jogo[0][1]==jogadorX && jogo[0][1]==jogo[2][1] && jogo[0][1] == jogo[1][1]){
	 	cout << "\n PARABENS!! O Jogador X GANHOU!! \n";
	 	ganhador = 'X';
	 }else if (jogo[0][2]==jogadorX && jogo[0][2]==jogo[1][2] && jogo[0][2] == jogo[2][2]){
	 	cout << "\n PARABENS!! O Jogador X GANHOU!! \n";
	 	ganhador = 'X';
	 } else if (jogo[0][0]==jogadorX && jogo[0][0]==jogo[2][2] && jogo[0][0] == jogo[1][1]){
	 	cout << "\n PARABENS!! O Jogador X GANHOU!! \n";
	 	ganhador = 'X';
		 }else if (jogo[0][2]==jogadorX && jogo[0][2]==jogo[1][1] && jogo[0][2] == jogo[2][0]){
	 	cout << "\n PARABENS!! O Jogador X GANHOU!! \n";
	 	ganhador = 'X';
		 } 
}
void matriz() {
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c++) {
            jogo[l][c] = '_';
        }
    }
}

void imprime() {
	cout << "==================JOGO ATUAL=================\n";
    cout << "               " << jogo[0][0] << "  |" << jogo[0][1] << "  | " << jogo[0][2] << "\n";
    cout << "              -------------\n";
    cout << "               " << jogo[1][0] << "  |" << jogo[1][1] << "  | " << jogo[1][2] << "\n";
    cout << "              -------------\n";
    cout << "               " << jogo[2][0] << "  |" << jogo[2][1] << "  |  " << jogo[2][2] << "\n";
}

bool jogardenovo(){
	char opcao;
	cout << "\n DESEJA JOGAR NOVAMENTE? \n";
	cin >> opcao;
	 
	 return (opcao== 'S' || opcao == 's');
}
int main() {
	do{
	
    matriz();
int contjogada = 0;
char jogador = jogadorX;
    while (true) {
    	
    	
        cout << "Jogador " << jogador <<", selecione em qual local (numero) do tabuleiro deseja jogar. \n\n";
        cout << "MODELO DE TABULEIRO PARA ESCOLHER AS POSICOES\n";
        cout << "               1  | 2  | 3\n";
        cout << "              -------------\n";
        cout << "               4  | 5  | 6\n";
        cout << "              -------------\n";
        cout << "               7  | 8  | 9\n";
        
        cin >> local;

        if (!(local >= 1 && local <= 9)) {
            cout << "Posicao invalida. Escolha novamente!\n";
            continue;
        }

        switch (local) {
            case 1:
                if (jogo[0][0] != nada) {
                    cout << "Jogada invalida!! Escolha outra posicao que nao esteja ocupada!\n";
                    continue;
                }
                jogo[0][0] = jogador;
                break;
            case 2:
                if (jogo[0][1] != nada) {
                    cout << "Jogada invalida!! Escolha outra posicao que nao esteja ocupada!\n";
                    continue;
                }
                jogo[0][1] = jogador;
                break;
            case 3:
                if (jogo[0][2] != nada) {
                    cout << "Jogada invalida!! Escolha outra posicao que nao esteja ocupada!\n";
                    continue;
                }
                jogo[0][2] = jogador;
                break;
            case 4:
                if (jogo[1][0] != nada) {
                    cout << "Jogada invalida!! Escolha outra posicao que nao esteja ocupada!\n";
                    continue;
                }
                jogo[1][0] = jogador;
                break;
            case 5:
                if (jogo[1][1] != nada) {
                    cout << "Jogada invalida!! Escolha outra posicao que nao esteja ocupada!\n";
                    continue;
                }
                jogo[1][1] = jogador;
                break;
            case 6:
                if (jogo[1][2] != nada) {
                    cout << "Jogada invalida!! Escolha outra posicao que nao esteja ocupada!\n";
                    continue;
                }
                jogo[1][2] = jogador;
                break;
            case 7:
                if (jogo[2][0] != nada) {
                    cout << "Jogada invalida!! Escolha outra posicao que nao esteja ocupada!\n";
                    continue;
                }
                jogo[2][0] = jogador;
                break;
            case 8:
                if (jogo[2][1] != nada) {
                	system ("cls");
                    cout << "Jogada invalida!! Escolha outra posicao que nao esteja ocupada!\n";
                    imprime();
					continue;
                    
                }
                jogo[2][1] = jogador;
                break;
            case 9:
                if (jogo[2][2] != nada) {
                    cout << "Jogada invalida!! Escolha outra posicao que nao esteja ocupada!\n";
                    continue;
                }
                jogo[2][2] = jogador;
                break;
                
          
        }
		system ("cls");
        imprime();
        verifvitX();
        verifvitO();
        contjogada +=1;
        if (ganhador != 'E'){
        	break;
		}
		
		if (contjogada == 9 && ganhador == 'E') {
            cout << "\nDeu velha!!\n";
            break;
        }
        
		if (contjogada %2 ==0 ){
			jogador = jogadorX;
		
		} else {
			jogador = jogadorO;
		}      
    } 
} while (jogardenovo());

    return 0;
}

