#include <iostream>

#include <string>

using namespace std;

class Semaforo
{
    private:
        int valor;
    public:
        Semaforo() {
            valor = 0;
        }

        int next() {
            valor++;
            if (valor > 3)
                valor = 1;
            
            return valor;
        }
};

class Pessoa {
    private: 
        string doc;
        string nome;
    public:
        void setId(string doc, string nome) {
            this->doc = doc;
            this->nome = nome;
        }

        string getNome() {
            return nome;
        }

        string getDoc() {
            return doc;
        }

        void print() {
            cout << "Nome: " << nome << "\nDoc: " << doc << endl;
        }
};

class Aluno : public Pessoa {
    private:
        string ra;
    public:
        void setId(string doc, string nome, string ra) {
            Pessoa::setId(doc, nome);
            
            this->ra = ra;
        }

        void print() {
            cout << "Nome: " << getNome() << "\nDoc: " << getDoc() << "\nRa: " << ra << endl;
        }
};

class TesteAritmetico {
    public: 
        int soma(int a, int b) {
            return a + b;
        }

        float soma(int a, float b) {
            return (float) a + b;
        }

        double soma(double a, double b) {
            return a + b;
        }
};

int main() {
    TesteAritmetico testeAritmetico;
    Semaforo semaforo;
    Pessoa pessoa;
    pessoa.setId("123456789", "Arthur");
    Aluno aluno;
    aluno.setId("987654321", "Igor", "123456");

    int i = 0;
    int a = 0;
    
    while(i < 5) {
        a = semaforo.next();
        cout << (a == 1 ? "Vermelho" : (a == 2 ? "Verde" : "Amarelo")) << endl;
        i++;
    }

    cout << "\nPessoa:" << endl;
    pessoa.print();
    cout << "\nAluno:" << endl;
    aluno.print();

    cout << "\n" << endl;
    cout << testeAritmetico.soma(2, 3) << endl;
    cout << testeAritmetico.soma(2, 1.3f) << endl;
    cout << testeAritmetico.soma(2.5, 2.5) << endl;

}