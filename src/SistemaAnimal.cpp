#include "../includes/SistemaAnimal.h"
void SistemaAnimal::cadastrar_Animal()
{

}
void SistemaAnimal::alterar_Animal()
{
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
}


}
void SistemaAnimal::remover_Animal()
{

}
void SistemaAnimal::listar_Animal()
{

}
void SistemaAnimal::remover_AnimalById(int m_id)
{

}   
int SistemaAnimal::verificar_animalID(int m_id)
{

}
SistemaAnimal::SistemaAnimal()
{

}
SistemaAnimal::~SistemaAnimal()
{

}
void SistemaAnimal::cadastrar_Ave()
{

}
void SistemaAnimal::cadastrar_Reptil()
{

}
void SistemaAnimal::cadastrar_Mamifero()
{

}
void SistemaAnimal::cadastrar_Anfibio()
{

}
