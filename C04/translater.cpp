
Polymorphism
Turn-in directory : ex00/
Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}
Forbidden functions : None

Para cada exercício, você deve fornecer os testes mais completos possíveis.

Construtores e destrutores de cada classe devem exibir mensagens específicas. 
Não use a mesma mensagem para todas as classes.

Comece implementando uma classe base simples chamada Animal. 
Ela possui um atributo protegido: std::string type;

Implemente uma classe Dog que herda de Animal.
Implemente uma classe Cat que herda de Animal.

Essas duas classes derivadas devem definir seu campo de tipo de acordo com seu nome.

Então, o tipo de Dog será inicializado como "Dog" e o tipo de Cat será inicializado como "Cat".

O tipo da classe Animal pode ser deixado em branco ou definido com o valor de sua escolha.


Cada animal deve ser capaz de usar a função membro: makeSound()
Ela imprimirá um som apropriado (gatos não latem).

Executar este código deve imprimir os sons específicos das classes Dog e Cat, não
os do Animal.

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog(); //só conhece e vê os metodos da classe animal, mas ele chama 
                                 //os metodos da classe Dog porque j é um objecto de Dog e
                                 //os metodos de animal são virtuais, logo ele está perante
                                 //a um polmorfismo com ponteiro para classe base, 
                                 //é neceessario que os metodos existam em animal e só assim
                                 //serem sobrescritos no Dog
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    ...
    return 0;
}

Para garantir que você entendeu como funciona, implemente uma classe WrongCat que herda
de uma classe WrongAnimal.

Se você substituir o Animal e o Gato pelos errados no código acima, 
o WrongCat deverá gerar o som de WrongAnimal.

Implemente e envie mais testes do que os fornecidos acima.

//make re && clear && ./Polymorphism
//###################################
//###################################

I don’t want to set the world on fire
Turn-in directory : ex01/
Files to turn in : Files from previous exercise + *.cpp, *.{h, hpp}
Forbidden functions : None

Construtores e destrutores de cada classe devem exibir mensagens específicas.
Implemente uma classe Brain.
Ela contém um array de 100 std::strings chamado ideas.

Dessa forma, Dog e Cat terão um atributo privado Brain*.

Após a construção, Dog e Cat criarão seu Brain usando new Brain();

Após a destruição, Dog e Cat excluirão seu Brain.


Em sua função principal, crie e preencha um array de objetos Animal.
Metade dele será objetos Dog e a outra metade serão objetos Cat.

Ao final da execução do seu programa, faça um loop sobre esse array e exclua todos os Animal.
Você deve excluir diretamente dogs e cats como Animals.

Os destrutores apropriados devem ser chamados na ordem esperada.
Não se esqueça de verificar se há vazamentos de memória.

Uma cópia de Dog ou Cat não deve ser superficial.

Portanto, você precisa testar se suas cópias são cópias profundas!

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    ...
    return 0;
}

Implemente e entregue mais testes do que os fornecidos acima.


//###################################
//###################################


Abstract class
Turn-in directory : ex02/
Files to turn in : Files from previous exercise + *.cpp, *.{h, hpp}
Forbidden functions : None

Criar objetos Animal não faz sentido, afinal. 
É verdade, eles não emitem som!
Para evitar possíveis erros, a classe Animal padrão não deve ser instanciável.
Corrija a classe Animal para que ninguém possa instanciá-la. 
Tudo deve funcionar como antes.
Se desejar, você pode atualizar o nome da classe adicionando um prefixo A a Animal.


//###################################
//###################################


Interface & recap
Turn-in directory : ex03/
Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}
Forbidden functions : None

Interfaces não existem em C++98 (nem mesmo em C++20). No entanto, classes puramente abstratas
são comumente chamadas de interfaces. Portanto, neste último exercício, vamos tentar implementar interfaces para garantir que você entenda este módulo.
Complete a definição da seguinte classe AMateria e implemente as
funções-membro necessárias.

class AMateria
{
    protected:
        [...]
    public:
        AMateria(std::string const & type);
        [...]
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

Implemente as classes concretas para Matérias: Gelo e Cura. Use seus nomes em letras minúsculas ("gelo" para Gelo, "cura" para Cura) para definir seus tipos. Obviamente, a função membro
clone() retornará uma nova instância do mesmo tipo (ou seja, se você clonar uma Matéria de Gelo,
obterá uma nova Matéria de Gelo).
A função membro use(ICharacter&) exibirá:
• Gelo: "* dispara um raio de gelo em <nome> *"
• Cura: "* cura os ferimentos de <nome> *"
<nome> é o nome do Personagem passado como parâmetro. Não imprima os colchetes angulares (< e >).

Ao atribuir uma Matéria a outra, copiar o tipo não faz
sentido.

Escreva a classe concreta Character que implementará a seguinte interface:

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

O Personagem possui um inventário de 4 espaços, o que significa no máximo 4 Matérias.
O inventário está vazio durante a construção. Ele equipa as Matérias no primeiro espaço vazio
que encontrar, na seguinte ordem: do espaço 0 ao espaço 3. Se tentar adicionar uma Matéria a
um inventário cheio ou usar/desequipar uma Matéria inexistente, nada deve acontecer (mas bugs
ainda são proibidos). A função membro unequip() NÃO deve excluir a Matéria!

Manipule as Matérias que seu personagem deixa no chão como desejar.
Salve os endereços antes de chamar unequip() ou qualquer outra coisa, mas
não se esqueça de evitar vazamentos de memória.

A função membro use(int, ICharacter&) terá que usar a Matéria no
slot[idx] e passar o parâmetro target para a função AMateria::use.

O inventário do seu personagem poderá suportar qualquer tipo de
AMateria.

Seu Personagem deve ter um construtor que receba seu nome como parâmetro. Qualquer cópia
(usando construtor de cópia ou operador de atribuição de cópia) de um Personagem deve ser profunda.
Durante a cópia, as Matérias de um Personagem devem ser excluídas antes que as novas sejam adicionadas
ao seu inventário. Obviamente, as Matérias devem ser excluídas quando um Personagem é destruído.
Escreva a classe concreta MateriaSource que implementará a seguinte interface:

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

• learnMateria(AMateria*)
Copia a Matéria passada como parâmetro e a armazena na memória para que possa ser clonada
posteriormente. Assim como o Personagem, a MatériaSource pode conhecer no máximo 4 Matérias. Elas
não são necessariamente únicas.
• createMateria(std::string const &)
Retorna uma nova Matéria. Esta última é uma cópia da Matéria aprendida anteriormente pela
MateriaSource, cujo tipo é igual ao passado como parâmetro. Retorna 0 se
o tipo for desconhecido.

Em resumo, sua MatériaSource deve ser capaz de aprender "modelos" de Matérias para
criá-las quando necessário. Assim, você poderá gerar uma nova Matéria usando apenas
uma string que identifica seu tipo.

Running this code:

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}

Should output:

$> clang++ -W -Wall -Werror *.cpp
$> ./a.out | cat -e
* shoots an ice bolt at bob *$
* heals bob's wounds *$

Como de costume, implemente e entregue mais testes do que os fornecidos acima.
Você pode passar neste módulo sem fazer o exercício 03.