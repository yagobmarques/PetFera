#include "../includes/SistemaAnimal.h
void SistemaAnimal::carregarDados(){
	/*for (auto e:animais){
		cout<<e.first<<"\t"<<e.second.getM_nome()<<endl;	
	}*/
	//carregando os dados cadastrados de funcionarios
    ifstream arquivoFuncionario("./funcionarios.csv");
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
  ifstream arquivoAnimal;
  arquivoAnimal.open ("./src/animais.csv");
	string line;
  if (!arquivoAnimal)
    cout<<"não tem arquivo"<<endl;
	while (getline(arquivoAnimal, line)) {
			Animal dados;
      stringstream lineAnimal (line);
      lineAnimal >> dados;
			string id_veterinario, id_tratador;
			getline(lineAnimal, id_veterinario, ';');
			lineAnimal>>id_tratador;
			if(!id_veterinario.empty() && id_veterinario!="0"){
				dados.setM_veterinario(getVeterinario_por_id(stoi(id_veterinario)));
			}
			if(!id_tratador.empty() && id_tratador!="0"){
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
	} */
}
Veterinario SistemaAnimal::getVeterinario_por_id(int id){
	return veterinarios.find(id)->second;
}
Tratador SistemaAnimal::getTratador_por_id(int id){
	return tratadores.find(id)->second;
}
void SistemaAnimal::cadastrarAnimal(){

	Animal *a = new Animal();
	int maior_id=(animais.rbegin()->first)+1;
    a->setM_id(maior_id);
	string respostas = "-1";
	double tamanho;
	cout<<"Digite a classe:"<<endl;
	getline(cin, respostas);
	a->setM_classe(respostas);
	cout<<"Digite o nome:"<<endl;
	getline(cin, respostas);
	a->setM_nome(respostas);
	cout<<"Digite o nome cientifico:"<<endl;
	getline(cin, respostas);
	a->setM_nome_cientifico(respostas);
	cout<<"Digite o sexo (F ou M):"<<endl;
	getline(cin, respostas);
	a->setM_sexo(respostas[0]);
	cout<<"Digite o tamanho:"<<endl;
	getline(cin, respostas);
    tamanho=stod(respostas);
	a->setM_tamanho(tamanho);
    cout<<"Digite a dieta:"<<endl;
	getline(cin, respostas);
	a->setM_dieta(respostas);
	cout<<"Digite o nome de batismo:"<<endl;
	getline(cin, respostas);
	a->setM_nome_batismo(respostas);
	int id_veterinario;
	cout<<"Digite o id do veterinário (0 caso não exista):"<<endl;
	cin>>id_veterinario;
	if(id_veterinario>0){
		a->setM_veterinario(getVeterinario_por_id(id_veterinario));
	}
	int id_tratador;
	cout<<"Digite o id do tratador (0 caso não exista):"<<endl;
	cin>>id_tratador;
	if(id_tratador>0){
		a->setM_tratador(getTratador_por_id(id_tratador));
	}
	animais.insert(pair<int, Animal>(maior_id, *a));
    salvarAlteracao();
}
void SistemaAnimal::salvarAlteracao(){
    ofstream arquivo;
    arquivo.open ("./src/animais.csv");
    if (!arquivo) cout<<"não tem arquivo"<<endl;
	for (auto e:animais){
		arquivo<<e.first<<";"<<e.second.getM_classe()<<";"<<e.second.getM_nome()<<";"<<e.second.getM_nome_cientifico()<<";"<<e.second.getM_sexo()<<";"<<e.second.getM_tamanho()<<";"<<e.second.getM_dieta()<<";"<<e.second.getM_nome_batismo();
        Veterinario v=e.second.getM_veterinario();
        Tratador t = e.second.getM_tratador();
        if(v.getM_nome()!=""){
            arquivo<<";"<<v.getM_id();
        }else{
            arquivo<<";"<<"0";
        }
        if(t.getM_nome()!=""){
            arquivo<<";"<<t.getM_id();
        }else{
            arquivo<<";"<<"0";
        }
        arquivo<<endl;
	}
	arquivo.close();
}
void SistemaAnimal::listarAnimal(){
    //TO DO
}
void SistemaAnimal::alterarDados(int id, Animal a){
    //TO DO
  {
  string escolha = "-1";
  int aux = -1;
  cout << "---- Menu de alteração do animal ---- \n"
       << endl;
  do
  {
    try
    {
      cout << "Entre com a ID do animal: " << endl;
      getline(cin, escolha);
      aux = stoi(escolha);
    }
    catch (const std::exception &e)
    {
      aux = -1;
    }
  } while (aux == -1);
  if (verificarID(aux) == 1)
  {
    remover_AnimalById(aux);
    cout << "Agora, recadastre o animal com os seus devidos atributos" << endl;
    cadastrar_Animal();
  }
  else
  {
    cout << "Id inválido" << endl;
  }
    salvarAlteracao();
}
void SistemaAnimal::consultar_animal_por_classe(string classe){
    //TO DO
}
void SistemaAnimal::consultar_animal_por_tratador(int id_tratador){
    //TO DO
}
void SistemaAnimal::consultar_animal_por_veterinario(int id_veterinario){
    //TO DO
}
SistemaAnimal::SistemaAnimal()
{
    carregarDados();
}
SistemaAnimal::~SistemaAnimal()
{

}
