/**
* @file menu-principal.cpp
* @brief Implementação do menu do sistema
* @author Felipe Rodrigues
*/
#include "../includes/menu-principal.h"

/**
* @brief inicializa o menu do sistema
*/
void iniciarMenu(){
    int option;
    cout << "Bem vindo!" << endl;        
    do{        
        option = escolherOpcao(); 
        Sistema *s = new Sistema();   
        SistemaAnimal *sa = new SistemaAnimal(); 
        string id;  
        int choice = 0;
        switch(option){
            case 1:
                
                s->cadastrar_Funcionario();
                delete(s);
                break;
            case 2: 
                 s->alterar_Funcionario();
                 delete(s);
                 break;
              
            case 3:
                 s->remover_Funcionario();
                 delete(s);
                 break;
               
            case 4:
                 s->mostrar_Funcionarios();
                 delete(s);
                 break;
            
            case 5: 
                sa->cadastrarAnimal();
                delete(sa);
                break;
            
            case 6: 
                cout << "Digite o id do animal";
                cin >> id;
                if (isInt(id)){
                    sa->alterarDados(stoi(id));
                } else {
                    cout <<RED<< "Entrada inválida" <<RESET<<endl;
                }                
                delete(sa);
                break;
            
            case 7: 
                cout << "Digite o id do animal";
                cin >> id;
                if (isInt(id)){
                    sa->deletarAnimal(stoi(id));
                } else {
                    cout <<RED<< "Entrada inválida" <<RESET<<endl;
                }                
                delete(sa);
                break;
            case 8: 
                cout<<"digite a opcao de listagem"<<endl;
                cout<<"digite 1 para listagem por classe"<<endl;
                cout<<"digite 2 para listagem por veterinario"<<endl;
                cout<<"digite 3  para listagem por tratador"<<endl;
                if(choice == 1)
                {
                    sa->consultar_animal_por_classe();
                }
                if(choice == 3)
                {
                    sa->consultar_animal_por_tratador();
                }
                if(choice == 2)
                {
                    sa->consultar_animal_por_veterinario();
                }
                delete(sa);
                break;
            default:
                break;
        }    
        delete(s);
        delete(sa);
    }while(option != 0);    
}
/**
* @brief carrega o menu de opções
* @return valor referente a opção escolhida
*/
int escolherOpcao(){
    set<int> options = {0,1,2,3,4,5,6,7,8};
    string op;
    cout <<CYAN<< "--- MENU PRINCIPAL ---"<<RESET<< endl;
    cout << "1 - criar funcionário" << endl;
    cout << "2 - editar funcionário" << endl;
    cout << "3 - deletar funcionario" << endl;    
    cout << "4 - listar funcionarios" << endl;
    cout << "5 - criar animal" << endl;
    cout << "6 - editar animal" << endl;
    cout << "7 - deletar animal" << endl;
    cout << "8 - listar animais" << endl;
    cout << "0 - sair"<<endl;
    getline(cin, op);
   
    if(isInt(op)){
        const bool opValida = options.find(stoi(op)) != options.end();
        if(opValida){           
            return stoi(op);            
        }            
    } 
    cout << RED << "Opção inválida!" << RESET<< endl;
    return -1;    
}

void mensagemSucesso(string mensagem){
    cout << GREEN << mensagem << RESET << endl;
}
/**
* @brief exibe mensagem de erro na tela
* @param mensagem a ser exibida
*/
void mensagemErro(string mensagem){
    cout << RED << mensagem << RESET << endl;
}
