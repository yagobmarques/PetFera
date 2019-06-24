/**
* @file menu-principal.cpp
* @brief Implementação do menu do sistema
* @author Felipe Rodrigues
*/
#include "menu-principal.h"

/**
* @brief inicializa o menu do sistema
*/
void iniciarMenu(){
    int option;
    cout << "Bem vindo!" << endl;        
    do{        
        option = escolherOpcao();       
        switch(option){
            case 1: {
                Sistema *s = new Sistema();
                s->cadastrar_Funcionario();
                delete(s);
                break;
            }     
            case 2: {
                 Sistema *s = new Sistema();
                 s->alterar_Funcionario();
                 delete(s);
                 break;
            }   
            case 3:{
                 Sistema *s = new Sistema();
                 s->remover_Funcionario();
                 delete(s);
                 break;
            }        
            case 4:{
                 Sistema *s = new Sistema();
                 s->mostrar_Funcionarios();
                 delete(s);
                 break;
            }
            default:
                break;
        }      
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
    cin >> op;
   
    if(isInt(op)){
        const bool opValida = options.find(stoi(op)) != options.end();
        if(opValida){           
            return stoi(op);            
        }            
    } 
    cout << RED << "Opção inválida!" << RESET<< endl;
    return -1;    
}

/**
* @brief checa se uma empresa já existe
* @param lista de empresas já cadastradas, empresa a ser checada
* @return 1 se já existe, 0 se não existe
*/
// bool checarEmpresa(list<Empresa> empresas, Empresa empresa){
//     for(auto &e: empresas){
//         if(e.getCnpj() == empresa.getCnpj()){
//             return false;
//         }
//     }
//     return true;
// }
/**
* @brief checa se um funcionario já existe
* @param lista de empresas já cadastradas, funcionario a ser checado
* @return 1 se já existe, 0 se não existe
* @TODO: checar por empresa
*/
// bool checarFuncionario(list<Empresa> empresas , Funcionario funcionario){    
//     for(auto &e: empresas){
//         for(auto &f: e.getFuncionarios()){
//             if(f.getNome() == funcionario.getNome() && f.getNomeEmpresa() == e.getNome()){
//                 return false;
//             }
//         }
//     }
//     return true;
// }

/**
* @brief exibe mensagem de sucesso na tela
* @param mensagem a ser exibida
*/
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
