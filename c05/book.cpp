
Mommy, when I grow up, I want to be a bureaucrat!
Turn-in directory : ex00/
Files to turn in : Makefile, main.cpp, Bureaucrat.{h, hpp}, Bureaucrat.cpp
Forbidden functions : None

Observe que classes de exceção não precisam ser projetadas na
Forma Canônica Ortodoxa. 
No entanto, todas as outras classes devem segui-la.
Vamos criar um pesadelo artificial de escritórios, corredores, formulários e filas de espera.
Parece divertido? Não? Que pena.

Primeiro, comece com a menor engrenagem desta vasta máquina burocrática: o Burocrata.
Um Burocrata deve ter:
• Um nome constante.
• Uma nota que varia de 1 (nota mais alta possível) a 150 (nota mais baixa possível).

Qualquer tentativa de instanciar um Burocrata com uma nota inválida deve gerar uma exceção:
uma Burocrata::GradeTooHighException ou uma Burocrata::GradeTooLowException.
Você fornecerá getters para ambos os atributos: getName() e getGrade().

Você deve também implementar duas funções membro para incrementar ou 
decrementar a nota do burocrata.

Se a nota estiver fora do intervalo, ambas as funções devem lançar as mesmas exceções 
que o construtor.

Lembre-se, como a nota 1 é a mais alta e 150 a mais baixa,
incrementar uma nota 3 deve resultar em uma nota 2 para o burocrata.

As exceções geradas devem ser capturáveis usando os blocos try e catch:
| Palavra-chave | Função                                                           |
| ------------- | ---------------------------------------------------------------- |
| `try`         | Bloco onde se tenta executar algo que **pode falhar**            |
| `throw`       | **Lança** a exceção (interrompe o `try` e salta para um `catch`) |
| `catch`       | **Captura** e **trata** a exceção lançada                        |


Você deve implementar uma sobrecarga do operador de inserção («) para imprimir a saída no
seguinte formato (sem os colchetes angulares):
<nome>, burocrata <nota>.
Como de costume, envie alguns testes para comprovar que tudo funciona conforme o esperado.




//******************
Se você não usar override, o compilador pode não perceber que você queria sobrescrever what().

Se você não usar noexcept, o comportamento pode ser indefinido se uma exceção 
for lançada de dentro de outra.

Se não usar const, não vai conseguir chamar what() 
em um objeto constante (const std::exception&), que é o mais comum.

mensagem.c_str()	Converte std::string para const char*, que é o tipo esperado por what()

try {
    // código que pode lançar um erro
    if (true) {
        throw std::runtime_error("Algo deu errado!");
    }
} catch (const std::exception& e) {
    std::cerr << "Erro capturado: " << e.what() << std::endl;
}

try {
    throw MinhaExcecao();
} catch (const std::exception& e) {
    std::cout << e.what() << std::endl;
}

| Classe de Exceção           | Descrição                                       |
| --------------------------- | ----------------------------------------------- |
| `std::exception`            | Base de todas as exceções padrão do C++         |
| `std::logic_error`          | Erro lógico detectado em tempo de compilação    |
| └── `std::invalid_argument` | Argumento inválido passado a uma função         |
| └── `std::domain_error`     | Argumento fora do domínio esperado              |
| └── `std::length_error`     | Violação do tamanho de um objeto (ex: `vector`) |
| └── `std::out_of_range`     | Índice fora do intervalo permitido              |
| `std::runtime_error`        | Erro detectado em tempo de execução             |
| └── `std::range_error`      | Valor fora da faixa durante uma operação        |
| └── `std::overflow_error`   | Estouro numérico (ex: multiplicação int)        |
| └── `std::underflow_error`  | Subfluxo numérico (pouco comum)                 |

//********************************
//***************************** */

//EX 01
Form up, maggots!
Turn-in directory : ex01/
Files to turn in : Files from the previous exercise + Form.{h, hpp}, Form.cpp
Forbidden functions : None

Agora que você tem burocratas, vamos dar a eles algo para fazer. 
Que atividade melhor poderia haver do que preencher uma pilha de formulários?
Vamos criar uma classe Formulário.
Ela tem:
• Um nome constante.
• Um booleano que indica se é assinado (na construção, não é).
• Uma nota constante necessária para assiná-lo.
• Uma nota constante necessária para executá-lo.

Todos esses atributos são privados, não protegidos.

As notas do Formulário seguem as mesmas regras que as do Burocrata.
Portanto, as seguintes exceções serão lançadas se a nota de um formulário estiver fora dos limites:
Form::GradeTooHighException e Form::GradeTooLowException.

Como antes, escreva getters para todos os atributos e sobrecarregue o operador de inserção («) para
imprimir todas as informações do formulário.

Além disso, adicione uma função-membro beSigned() ao Formulário que receba um Burocrata como
parâmetro.
Ela altera o status do formulário para assinado se a nota do burocrata for alta o suficiente
(maior ou igual à exigida).
Lembre-se: a nota 1 é maior que a nota 2.
Se a nota for muito baixa, lance uma Form::GradeTooLowException.


//
Em seguida, modifique a função-membro signForm() na classe Burocrata. 
Essa função deve chamar Form::beSigned() para tentar assinar o formulário.

Se o formulário for assinado com sucesso, ela exibirá algo como:
<burocrata> assinado <formulário>
Caso contrário, exibirá algo como:
<burocrata> não conseguiu assinar <formulário> porque <motivo>.

Implemente e envie alguns testes para garantir que tudo funcione conforme o esperado.


//********************************
//********************************

//EX 02
No, you need form 28B, not 28C...
Turn-in directory : ex02/
Files to turn in : Makefile, main.cpp, Bureaucrat.[{h, hpp},cpp], +
AForm.[{h, hpp},cpp], ShrubberyCreationForm.[{h, hpp},cpp], +
RobotomyRequestForm.[{h, hpp},cpp], PresidentialPardonForm.[{h, hpp},cpp]
Forbidden functions : None


Agora que você tem formulários básicos, é hora de criar mais alguns que realmente façam alguma coisa.
Em todos os casos, a classe base Form deve ser uma classe abstrata e, portanto, deve ser
renomeada para AForm. 
Lembre-se de que os atributos do formulário precisam permanecer privados e pertencem à classe base.

Adicione as seguintes classes concretas:

• ShrubberyCreationForm: Notas necessárias: sinal 145, exec 137
Cria um arquivo <target>_shrubbery no diretório de trabalho e grava árvores ASCII
dentro dele.

• RobotomyRequestForm: Notas necessárias: sinal 72, exec 45
Emite alguns ruídos de perfuração e informa que <target> foi robotizado com sucesso em 50% das vezes. 
Caso contrário, informa que a robotomia falhou.

• PresidentialPardonForm: Notas necessárias: sinal 25, exec 5
Informa que <target> foi perdoado por Zaphod Beeblebrox.

Todos eles recebem apenas um parâmetro em seu construtor: o alvo do formulário. 
Por exemplo, "casa" se você quiser plantar arbustos em casa.

Agora, adicione a função membro execute(Bureaucrat const & executor) const ao formulário base
e implemente uma função para executar a ação do formulário nas classes concretas.

Você deve verificar se o formulário está assinado e se o nível do 
burocrata que tenta executá-lo é alto o suficiente.
Caso contrário, lance uma exceção apropriada.

Se você verifica os requisitos em cada classe concreta ou na classe base 
(e em seguida, chama outra função para executar o formulário), fica a seu critério. 
No entanto, uma maneira é mais elegante que a outra.

Por fim, adicione a função membro executeForm(AForm const & form) constante à classe Burocrata. 
Ela deve tentar executar o formulário.
Se for bem-sucedido, imprima algo como: <burocrata> executado <formulário>
Caso contrário, imprima uma mensagem de erro explícita.
Implemente e envie alguns testes para garantir que tudo funcione conforme o esperado.


//********************************
//********************************

//EX 03
At least this beats coffee-making
Turn-in directory : ex03/
Files to turn in : Files from previous exercises + Intern.{h, hpp}, Intern.cpp
Forbidden functions : None

Como preencher formulários o dia todo seria cruel demais para nossos burocratas, os estagiários existem para
assumir essa tarefa tediosa. 
Neste exercício, você deve implementar a classe Intern. 
O estagiário não tem nome, nem nota, nem características únicas. A única coisa com que os burocratas
se importam é que eles façam seu trabalho.

No entanto, o estagiário possui uma habilidade fundamental: a função makeForm(). 
Esta função recebe duas strings como parâmetros: a primeira representa o nome de um formulário e a
segunda representa o destino do formulário. 
Ela retorna um ponteiro para um objeto AForm(correspondente ao nome do formulário passado como parâmetro), 
com seu destino inicializado no segundo parâmetro.

Deve exibir algo como:
Estagiário cria <formulário>
Se o nome do formulário fornecido não existir, exiba uma mensagem de erro explícita.

Você deve evitar soluções ilegíveis e confusas, como o uso excessivo de estruturas if/elseif/else. Esse tipo de abordagem não será aceito durante o processo de avaliação.
Você não está mais na Piscine (piscina). Como de costume, você deve testar tudo
para garantir que funcione conforme o esperado.

Por exemplo, o código a seguir cria um RobotomyRequestForm direcionado a
"Bender":

{
Intern someRandomIntern;
AForm* rrf;
rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}










Makefile
operador de impressão <<
class GradeTooHighException : std::exception // o exception no final