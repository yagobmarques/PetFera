/**
* @file menu.cpp
* @brief Implementação do menu do sistema
* @author Marcelo Moura
*/
#include "./includes/menu.h"

/**
* @brief inicializa o menu do sistema
*/
void Menu::iniciarMenu(){
    carregarDados();    
}

/**
* @brief carrega o menu de opções
* @return valor referente a opção escolhida
*/

void Menu::carregarDados(){
	/*for (auto e:animais){
		cout<<e.first<<"\t"<<e.second.getM_nome()<<endl;	
	}*/
	//carregando os dados cadastrados de funcionarios
  ifstream arquivoFuncionario("funcionarios.csv");
	string linha;
	while (getline(arquivoFuncionario, linha)) {
      stringstream linestream(linha);
			string tipoFuncionario, id;
			getline(linestream, id, ';');
			getline(linestream, tipoFuncionario, ';');
			//cout<<tipoFuncionario<<endl;
			string nome, cpf, idade, tipo_sanguineo, fator_rh, especialidade, vazio;
			getline(linestream, nome, ';');
			getline(linestream, cpf, ';');
			getline(linestream, idade, ';');
			getline(linestream, tipo_sanguineo, ';');
			getline(linestream, fator_rh, ';');
			getline(linestream, especialidade, ';');
			if(tipoFuncionario=="Veterinario") {
				string crmv;
				getline(linestream, crmv, ';');
				linestream>>vazio;
				Veterinario v;
				v.setM_id(stoi(id));
				v.setM_nome(nome);
				v.setM_cpf(cpf);
				v.setM_idade(stoi(idade));
				v.setM_tipo_sanguineo(tipo_sanguineo);
				v.setM_fator_rh(fator_rh[0]);
				v.setM_especialidade(especialidade);
				v.setM_crmv(crmv);
				veterinarios.insert(pair<int, Veterinario>(v.getM_id(), v));
			}else if(tipoFuncionario=="Tratador"){
				int seguranca;
				getline(linestream, vazio, ';');
				linestream>>seguranca;
				Tratador t;
				t.setM_id(stoi(id));
				t.setM_nome(nome);
				t.setM_cpf(cpf);
				t.setM_idade(stoi(idade));
				t.setM_tipo_sanguineo(tipo_sanguineo);
				t.setM_fator_rh(fator_rh[0]);
				t.setM_especialidade(especialidade);
				t.SetNivel_de_seguranca(seguranca);
				tratadores.insert(pair<int, Tratador>(t.getM_id(), t));
			}
	}	

	arquivoFuncionario.close();
	//carregando os dados cadastrados de animais
  ifstream arquivoAnimal("animais.csv");
	string line;
	while (getline(arquivoAnimal, line)) {
			Animal dados;
      stringstream lineAnimal (line);
      lineAnimal >> dados;
			string id_veterinario, id_tratador;
			getline(lineAnimal, id_veterinario, ';');
			lineAnimal>>id_tratador;
			if(!id_veterinario.empty()){
				dados.setM_veterinario(getVeterinario_por_id(stoi(id_veterinario)));
			}
			if(!id_tratador.empty()){
				dados.setM_tratador(getTratador_por_id(stoi(id_tratador)));
			}
			animais.insert(pair<int, Animal>(dados.getM_id(), dados));
	}
	arquivoAnimal.close();
	/*cout<<"Animais:"<<endl;
	for (auto e:animais){
		Veterinario v = e.second.getM_veterinario();
		Tratador t = e.second.getM_tratador();
		cout<<e.first<<"\t Veterinario:"<<v.getM_nome()<<"\t Tratador:"<<t.getM_nome()<<endl;
	}
	cout<<"Veterinarios:"<<endl;
	for (auto e:veterinarios){
		cout<<e.first<<"\t"<<e.second.getM_nome()<<endl;
	}
	cout<<"Tratadores:"<<endl;
	for (auto e:tratadores){
		cout<<e.first<<"\t"<<e.second.getM_nome()<<endl;
	}*/
}
void Menu::salvarVeterinario(){
	ofstream arquivo;
  arquivo.open ("funcionarios.csv");
	for (auto e:veterinarios){
		arquivo<<e.first<<";"<<"Veterinario"<<";"<<e.second.getM_nome()<<";"<<e.second.getM_cpf()<<";"<<e.second.getM_idade()<<";"<<e.second.getM_tipo_sanguineo()<<";"<<e.second.getM_fator_rh()<<";"<<e.second.getM_especialidade()<<";"<<e.second.getM_crmv()<<";"<<endl;
	}
	arquivo.close();
}
void Menu::salvarTratador(){
	ofstream arquivo;
  arquivo.open ("funcionarios.csv");
	for (auto e:tratadores){
		arquivo<<e.first<<";"<<"Tratador"<<";"<<e.second.getM_nome()<<";"<<e.second.getM_cpf()<<";"<<e.second.getM_idade()<<";"<<e.second.getM_tipo_sanguineo()<<";"<<e.second.getM_fator_rh()<<";"<<e.second.getM_especialidade()<<";;"<<e.second.GetNivel_de_seguranca()<<endl;
	}
	arquivo.close();
}
Veterinario Menu::getVeterinario_por_id(int id){
	return veterinarios.find(id)->second;
}
Tratador Menu::getTratador_por_id(int id){
	return tratadores.find(id)->second;
}
void Menu::cadastrarVeterinario(){
	string respostas = "-1";
  int aux;
	Veterinario *v = new Veterinario();
  do
  {
    cout << "Digite o id:" << endl;
    try
    {
      getline(cin, respostas);
      aux = std::stoi(respostas);
      if (veterinarios.find(aux) != veterinarios.end())
      {
        aux = std::stoi("bilbo");
      }
    }
    catch (const std::exception &e)
    {
      cout << "Id inválido ou existente" << endl;
      respostas = "-1";
    }
  } while (respostas == "-1");
  v->setM_id(aux);
  cout << "Digite o nome: " << endl;
  getline(cin, respostas);
  v->setM_nome(respostas);
  cout << "Digite o cpf: " << endl;
  getline(cin, respostas);
  v->setM_cpf(respostas);
  cout << "Digite a idade:" << endl;
  respostas = "-1";
  while (respostas == "-1")
  {
    try
    {
      getline(cin, respostas);
      aux = std::stoi(respostas);
    }
    catch (const std::exception &e)
    {
      cout << "Idade inválida" << endl;
      respostas = "-1";
    }
  }
  v->setM_idade(aux);
  cout << "Digite o tipo sanguineo" << endl;
  getline(cin, respostas);
  v->setM_tipo_sanguineo(respostas);
  do
  {
    cout << "Digite o fator rh: " << endl;
    getline(cin, respostas);
  } while (respostas.length() != 1);
  v->setM_fator_rh(respostas[0]);
  cout << "Digite a especialidade do veterinario: " << endl;
  getline(cin, respostas);
  v->setM_especialidade(respostas);
  //v->setM_funcao("Veterinario");
  cout << "Digite o crmv:" << endl;
  getline(cin, respostas);
  v->setM_crmv(respostas);
	veterinarios.insert(pair<int, Veterinario>(v->getM_id(), *v));

}