#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        string nome;
        float altura;
        int idade;
    public:
        void setId(string nome, float altura, int idade) {
            this->nome = nome;
            this->altura = altura;
            this->idade = idade;
        }

        void print() {
            cout << "Nome: " << nome << endl;
            cout << "Altura: " << altura << endl;
            cout << "idade: " << idade << endl;
        }
};

class Aluno : public Person {
    private:
        string ra;
        int faltas;
    public:
        void setId(string nome, float altura, int idade, string ra, int faltas) {
            Person::setId(nome, altura, idade);
            this->ra = ra;
            this->faltas = faltas;
        }

        void print() {
            Person::print();
            cout << "Ra: " << ra << endl;
            cout << "faltas: " << faltas << endl;
        }
};

int main () {
    Person person;
    Aluno aluno;

    person.setId("Arthur", 1.85, 19);
    person.print();

    cout << "\n" << endl;

    aluno.setId("Igor", 1.60, 21, "217999", 20);
    aluno.print();

    cout << "\n" << endl;

    person.print();
}