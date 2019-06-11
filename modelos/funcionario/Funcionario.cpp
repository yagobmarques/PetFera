#include "Funcionario.h"
Funcionario::Funcionario(){
    
}
Funcionario& Funcionario::operator= (Funcionario const &f){
    this->nome =f.nome;
    this->salario = f.salario;
    this->dataAdmissao = f.dataAdmissao;
    return *this;
}

ostream& operator<< (ostream &o, Funcionario const f) {    
    o << "nome: " << f.nome << " | salario : " << f.salario << " | contratado em: "<< dateToString(f.dataAdmissao) << " por " << f.nomeEmpresa << endl;
    return o;
}

Funcionario& operator= (Funcionario const &f);

        void Funcionario::SetEspecialidade(string especialidade) {
            m_especialidade = especialidade;
        }

        string Funcionario::GetEspecialidade() const {
            return m_especialidade;
        }

        void Funcionario::SetFator_rh(char fator_rh) {
            m_fator_rh = fator_rh;
        }

        char Funcionario::GetFator_rh() const {
            return m_fator_rh;
        }

        void Funcionario::SetTipo_sanguineo(short tipo_sanguineo) {
            m_tipo_sanguineo = tipo_sanguineo;
        }

        short Funcionario::GetTipo_sanguineo() const {
            return m_tipo_sanguineo;
        }

        void Funcionario::SetIdade(short idade) {
            m_idade = idade;
        }

        short Funcionario::GetIdade() const {
            return m_idade;
        }

        void Funcionario::SetCpf(string cpf) {
            m_cpf = cpf;
        }

        string Funcionario::GetCpf() const {
            return m_cpf;
        }

        void Funcionario::SetNome(string nome) {
            m_nome = nome;
        }

        string Funcionario::GetNome() const {
            return m_nome;
        }

        void Funcionario::SetId(int id) {
            m_id = id;
        }

        int Funcionario::GetId() const {
            return m_id;
        }
        Ffriend ostream& operator<< (ostream &o, Funcionario const f);       
};
Funcionario::~Funcionario(){};
