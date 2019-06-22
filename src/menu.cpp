/**
* @file menu.cpp
* @brief Implementação do menu do sistema
* @author Marcelo Moura
*/
#include "menu.h"

/**
* @brief inicializa o menu do sistema
*/
void Menu::iniciarMenu(){
    carregarDados();    
}
// sobrecarga do operador de extração de dados >>
// istream = input stream
istream& Menu::operator >> (istream &is, Animal &animal){
  char delim;
	is >> animal->m_id 
		>> delim
		>> animal->m_classe 
		>> delim
		>> animal->m_nome_cientifico 
		>> delim
		>> animal->m_sexo 
		>> delim
		>> animal-> m_tamanho 
		>> delim
		>> animal->m_dieta-> 
		>> delim
		>> animal->m_nome_batismo;

  return is;
}
/**
* @brief carrega o menu de opções
* @return valor referente a opção escolhida
*/

void Menu::carregarDados(string arquivoAnimais, string arquivoFuncionarios){
  ifstream arquivo;
	arquivo.open(arquivoAnimais);
	int numLinha = 0;
  int lineNumberSought = 3;
	
  if (arquivo.is_open()) {
			while (getline(arquivo,line)) {
				Animal dados;
      	stringstream arquivo (line);
      	arquivo >> dados;
				animais.insert(pair<int, Animal>(data.getM_id(), dados))
					/*vector<string> dados;
					numLinha++;
					if(numLinha == lineNumberSought) {
							cout << line << endl; ;
							istringstream arquivo(line);
							while(getline(arquivo, csvItem, ';')) {
									dados.push_back(csvItem);
							}
					}*/
			}
			arquivo.close();
	}  
}
