#include "../includes/Sistema.h"
/**
* @brief Checa se id do funcionário já existe
* @param id
* @return 1 se existe, 0 se não;
*/
int Sistema::verificarID(int id)
{
  int aux = 0;
  int val = 0;
  ifstream dadosFuncionarios("./base-de-dados/funcionario.csv");
  string line;
  while (getline(dadosFuncionarios, line))
  {
    aux = line.find(";");
    val = std::stoi(line.substr(0, aux));
    if (val == id)
    {
      dadosFuncionarios.close();
      return 1;
    }
  }
  dadosFuncionarios.close();
  return 0;
}

/**
* @brief Cadastra um veterinário
*/
void Sistema::cadastrar_Veterinario()
{
  ofstream saveDados("./base-de-dados/funcionario.csv", ios::app);
  string respostas = "-1";
  int aux = 0;
  Veterinario *v = new Veterinario();
  do
  {
    cout << "Digite o id:" << endl;
    try
    {
      getline(cin, respostas);
      aux = std::stoi(respostas);
      if (verificarID(aux) == 1)
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
  v->setM_funcao("Veterinario");
  cout << "Digite o crmv:" << endl;
  getline(cin, respostas);
  v->setM_crmv(respostas);
  //botar no arquivo .csv
  saveDados << v->getM_id() << ";" << v->getM_funcao() << ";" << v->getM_nome() << ";" << v->getM_cpf() << ";" << v->getM_idade() << ";" << v->getM_tipo_sanguineo() << ";" << v->getM_fator_rh() << ";" << v->getM_especialidade() << ";" << v->getM_crmv() << ";;" << endl;
  delete (v);
  saveDados.close();
}


/**
* @brief Cadastra um tratador
*/
void Sistema::cadastrar_Tratador()
{
  ofstream saveDados("./funcionario.csv", ios::app);
  string respostas = "-1";
  int aux = 0;
  Tratador *t = new Tratador();
  do
  {
    cout << "Digite o id:" << endl;
    try
    {
      getline(cin, respostas);
      aux = std::stoi(respostas);
      if (Sistema::verificarID(aux) == 1)
      {
        aux = std::stoi("b");
      }
    }
    catch (const std::exception &e)
    {
      cout << "Id inválido ou existente" << endl;
      respostas = "-1";
    }
  } while (respostas == "-1");
  t->setM_id(aux);
  cout << "Digite o nome: " << endl;
  getline(cin, respostas);
  t->setM_nome(respostas);
  cout << "Digite o cpf: " << endl;
  getline(cin, respostas);
  t->setM_cpf(respostas);
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
  t->setM_idade(aux);
  cout << "Digite o tipo sanguineo" << endl;
  getline(cin, respostas);
  t->setM_tipo_sanguineo(respostas);
  do
  {
    cout << "Digite o fator rh: " << endl;
    getline(cin, respostas);
  } while (respostas.length() != 1);
  t->setM_fator_rh(respostas[0]);
  cout << "Digite a especialidade do tratador: " << endl;
  getline(cin, respostas);
  t->setM_especialidade(respostas);
  t->setM_funcao("Tratador");
  aux = -1;
  do
  {
    cout << "Digite o Nível de segurança:" << endl;
    try
    {
      getline(cin, respostas);
      aux = std::stoi(respostas);
    }
    catch (const std::exception &e)
    {
      cout << "Nivel de segurança inválido" << endl;
      respostas = "-1";
    }
  } while ((aux < 0) || (aux > 2));
  t->SetNivel_de_seguranca(aux);
  //botar no arquivo .csv
  saveDados << t->getM_id() << ";" << t->getM_funcao() << ";" << t->getM_nome() << ";" << t->getM_cpf() << ";" << t->getM_idade() << ";" << t->getM_tipo_sanguineo() << ";" << t->getM_fator_rh() << ";" << t->getM_especialidade() << ";;" << t->GetNivel_de_seguranca() << ";" << endl;
  delete (t);
  saveDados.close();
}

/**
* @brief Sistema de cadastro de funcionário
*/
void Sistema::cadastrar_Funcionario()
{
  string escolha = "-1"; /**< Variável de escolha */
  int aux;               /**< Variavel para auxiliar no bloco try catch */
  while (escolha != "0")
  {
    cout << "---- Menu de cadastro de um Funcionário ---- \n"
         << endl;
    cout << "1 - Cadastrar um Tratador" << endl;
    cout << "2 - Cadastrar um Veterinario" << endl;
    cout << "0 - Sair" << endl;
    cout << "Digite: ";
    try
    {
      getline(cin, escolha);
      aux = std::stoi(escolha);
    }
    catch (const std::exception &e)
    {
      aux = -1;
    }
    cout << endl;
    switch (aux)
    {
    case 1:
      cadastrar_Tratador();
      break;
    case 2:
      cadastrar_Veterinario();
      break;
    case 0:
      break;
    default:
      cout << "Nenhum valor correspondente" << endl;
      break;
    }
  }
}
/**
* @brief Remove um funcionário
*/
void Sistema::remover_Funcionario()
{
  ifstream dados("funcionario.csv");
  string escolha = "-1";
  int aux = 0;
  cout << "---- Menu de remoção de um Funcionário ---- \n"
       << endl;
  cout << "Entre com o ID do funcionário" << endl;
  do
  {
    try
    {
      getline(cin, escolha);
      aux = std::stoi(escolha);
    }
    catch (const std::exception &e)
    {
      aux = -1000;
    }
  } while (aux == -1000);
  Sistema *s = new Sistema();
  if (s->verificarID(aux) == 0)
  {
    cout << "Não existe nenhum funcionário com essa ID" << endl;
  }
  else
  {
    string line;
    ofstream aux1("aux.csv");
    int val = 0;
    int aux2 = 0;
    while (getline(dados, line))
    {
      aux2 = line.find(";");
      val = std::stoi(line.substr(0, aux2));
      if (val != aux)
      {
        aux1 << line << endl;
      }
    }
    remove("funcionario.csv");
    rename("aux.csv", "funcionario.csv");
    aux1.close();
    dados.close();
    delete (s);
  }
}

/**
* @brief Lista todos os funcionários
*/
void Sistema::mostrar_Funcionarios()
{
  ifstream dados("./base-de-dados/funcionarios.csv");
  string line; 
  while (getline(dados, line))
  {
    vector<string> splitted_line = splitString(line, ";");
    cout << "---- Funcionário ----" << endl;
    cout << "ID:" << splitted_line[0] << endl;                   //id
    cout << "Função: " << splitted_line[1] << endl;             //funcao
    cout << "Nome: " << splitted_line[2] << endl;               //nome do funcionario
    cout << "CPF: " << splitted_line[3] << endl;                //cpf
    cout << "Idade: " << splitted_line[4] << endl;              //idade
    cout << "Tipo sanguíneo: " << splitted_line[5] << endl;     //tipo sanguineo
    cout << "Fator RH: " << splitted_line[6] << endl;           //fator rh
    cout << "Especialidade: " << splitted_line[7] << endl;      //especialidade
    cout << "CMRV: " << splitted_line[8] << endl;               //cmrv
    cout << "Nivel de Segurança: " << splitted_line[9] << endl; //Nivel de segurança
    cout << endl;
  }
  dados.close();
}

/**
* @brief Altera os dados de un funcionário
*/
void Sistema::alterar_Funcionario()
{
  string escolha = "-1";
  int aux = -1;
  cout << "---- Menu de alteração do usuário ---- \n"
       << endl;
  do
  {
    try
    {
      cout << "Entre com a ID do funcionário: " << endl;
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
    remover_FuncionarioById(aux);
    cout << "Agora, recadastre o funcionário com os seus devidos atributos" << endl;
    cadastrar_Funcionario();
  }
  else
  {
    cout << "Id inválido" << endl;
  }
}
/**
* @brief Remove um funcionário pelo id
*/
void Sistema::remover_FuncionarioById(int id)
{
  ifstream dados("funcionario.csv");
  if (verificarID(id) == 0)
  {
    cout << "Não existe nenhum funcionário com essa ID" << endl;
  }
  else
  {
    string line;
    ofstream aux1("aux.csv");
    int val;
    int aux2;
    while (getline(dados, line))
    {
      aux2 = line.find(";");
      val = std::stoi(line.substr(0, aux2));
      if (val != id)
      {
        aux1 << line << endl;
      }
    }
    remove("funcionario.csv");
    rename("aux.csv", "funcionario.csv");
    aux1.close();
    dados.close();
  }
}



Sistema::Sistema()
{
}
Sistema::~Sistema()
{
}
