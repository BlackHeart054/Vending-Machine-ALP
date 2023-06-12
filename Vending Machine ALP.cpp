#include <iostream>
#include <map>
#include <string>
#include <vector>
// Declaracao das variaveis que serao utilizadas no projeto, cada uma em um momento especifico
using namespace std;
int primeiraEscolha, segundaEscolha, terceiraEscolha, idCategoria, idProduto,  valorProduto, itensCarrinho, opcaoFormaPagamento, opcaoPagamento;
int quantidadeProduto = 0, valorSubtotal = 0, indiceLista = 0;
string nomeCategoria, nomeProduto;

// Essa é a tela inicial da Vending Machine
void TelaCategoria()
{
    cout << " -------------------------------------------- \n";
    cout << "|############################################|\n";
    cout << "|#|---------------------------|##############|\n";
    cout << "|#|  PROJETO VENDING MACHINE  |##|````````|##|\n";
    cout << "|#|         BEM VINDO         |##|Apenas  |##|\n";
    cout << "|#|---------------------------|##|Notas   |##|\n";
    cout << "|#|     1-REFRIGERANTES       |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#|         2-DOCES           |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#|      3-SALGADINHOS        |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#|         4-SUCOS           |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#|      5-ALCOOLICOS         |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#|         6-CHAS            |#|  ~      |##|\n";
    cout << "|#|===========================|#|_________|##|\n";
    cout << "|#|###########################|##############|\n";
    cout << "|#|||||||||||RETIRE||||||||||||####|||||||###|\n";
    cout << "|#|||||||||||||||||||||||||||||##############|\n";
    cout << " --------------------------------------------\n\n";
}

// Telas com o desenho ascii da vending machine, cada uma contendo uma mudança significativa
// Foram armazenadas em funções para ficar menos 'pesad'o o codigo e mais organizado
void TelaRefrigerantes()
{
    cout << " -------------------------------------------- \n";
    cout << "|############################################|\n";
    cout << "|#|---------------------------|##############|\n";
    cout << "|#|  PROJETO VENDING MACHINE  |##|````````|##|\n";
    cout << "|#|       REFIGERANTES        |##|Apenas  |##|\n";
    cout << "|#|---------------------------|##|Notas   |##|\n";
    cout << "|#|       1-COCA-COLA         |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#|       2-PEPSI             |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#|       3-GUARANA ANTARTICA |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#|       4-TUBAINA           |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#|       5-FANTA LARANJA     |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#|       6-FANTA UVA         |#|  ~      |##|\n";
    cout << "|#|===========================|#|_________|##|\n";
    cout << "|#|###########################|##############|\n";
    cout << "|#|||||||||||RETIRE||||||||||||####|||||||###|\n";
    cout << "|#|||||||||||||||||||||||||||||##############|\n";
    cout << " --------------------------------------------\n\n";
}
void TelaDoces()
{
    cout << " -------------------------------------------- \n";
    cout << "|############################################|\n";
    cout << "|#|---------------------------|##############|\n";
    cout << "|#|  PROJETO VENDING MACHINE  |##|````````|##|\n";
    cout << "|#|          DOCES            |##|Apenas  |##|\n";
    cout << "|#|---------------------------|##|Notas   |##|\n";
    cout << "|#|        1-SUFLAIR          |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#|        2-BOMBOM           |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#|        3-BARRA CEREAL     |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#|        4-SNIKERS          |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#|        5-PACOQUITA        |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#|        6-SKITTLES         |#|  ~      |##|\n";
    cout << "|#|===========================|#|_________|##|\n";
    cout << "|#|###########################|##############|\n";
    cout << "|#|||||||||||RETIRE||||||||||||####|||||||###|\n";
    cout << "|#|||||||||||||||||||||||||||||##############|\n";
    cout << " --------------------------------------------\n";
}
void TelaSalgadinhos()
{
    cout << " -------------------------------------------- \n";
    cout << "|############################################|\n";
    cout << "|#|---------------------------|##############|\n";
    cout << "|#|  PROJETO VENDING MACHINE  |##|````````|##|\n";
    cout << "|#|       SALGADINHOS         |##|Apenas  |##|\n";
    cout << "|#|---------------------------|##|Notas   |##|\n";
    cout << "|#|        1-CHEETOS          |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#|        2-FANDANGOS        |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#|        3-DORITOS          |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#|        4-PRINGLES         |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#|        5-TORCIDA          |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#|        6-YOKITOS          |#|  ~      |##|\n";
    cout << "|#|===========================|#|_________|##|\n";
    cout << "|#|###########################|##############|\n";
    cout << "|#|||||||||||RETIRE||||||||||||####|||||||###|\n";
    cout << "|#|||||||||||||||||||||||||||||##############|\n";
    cout << " --------------------------------------------\n";
}
void TelaSucos()
{
    cout << " -------------------------------------------- \n";
    cout << "|############################################|\n";
    cout << "|#|---------------------------|##############|\n";
    cout << "|#|  PROJETO VENDING MACHINE  |##|````````|##|\n";
    cout << "|#|          SUCOS            |##|Apenas  |##|\n";
    cout << "|#|---------------------------|##|Notas   |##|\n";
    cout << "|#|        1-LARANJA          |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#|        2-UVA              |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#|        3-MORANGO          |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#|        4-PESSEGO          |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#|        5-GOIABA           |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#|        6-ACEROLA          |#|  ~      |##|\n";
    cout << "|#|===========================|#|_________|##|\n";
    cout << "|#|###########################|##############|\n";
    cout << "|#|||||||||||RETIRE||||||||||||####|||||||###|\n";
    cout << "|#|||||||||||||||||||||||||||||##############|\n";
    cout << " --------------------------------------------\n";
}
void TelaAlcoolicos()
{
    cout << " -------------------------------------------- \n";
    cout << "|############################################|\n";
    cout << "|#|---------------------------|##############|\n";
    cout << "|#|  PROJETO VENDING MACHINE  |##|````````|##|\n";
    cout << "|#|        ALCOOLICOS         |##|Apenas  |##|\n";
    cout << "|#|---------------------------|##|Notas   |##|\n";
    cout << "|#|         1-COROTE          |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#|         2-SKOL            |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#|         3-BRAHMA          |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#|         4-AMSTEL          |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#|         5-HEINEKEN        |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#|         6-PETRA           |#|  ~      |##|\n";
    cout << "|#|===========================|#|_________|##|\n";
    cout << "|#|###########################|##############|\n";
    cout << "|#|||||||||||RETIRE||||||||||||####|||||||###|\n";
    cout << "|#|||||||||||||||||||||||||||||##############|\n";
    cout << " --------------------------------------------\n";
}
void TelaChas()
{
    cout << " -------------------------------------------- \n";
    cout << "|############################################|\n";
    cout << "|#|---------------------------|##############|\n";
    cout << "|#|  PROJETO VENDING MACHINE  |##|````````|##|\n";
    cout << "|#|           CHAS            |##|Apenas  |##|\n";
    cout << "|#|---------------------------|##|Notas   |##|\n";
    cout << "|#|        1-CIDREIRA         |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#|        2-MATE             |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#|        3-HIBISCO          |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#|        4-HORTELA          |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#|        5-CAMOMILA         |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#|        6-BOLDO            |#|  ~      |##|\n";
    cout << "|#|===========================|#|_________|##|\n";
    cout << "|#|###########################|##############|\n";
    cout << "|#|||||||||||RETIRE||||||||||||####|||||||###|\n";
    cout << "|#|||||||||||||||||||||||||||||##############|\n";
    cout << " --------------------------------------------\n";
}

// Essa tela sera a responsavel por orientar qual sera a tela a ser mostrada de acordo com o input do usuario
int TelaEscolhaCategoria() {
    system("cls");
    switch (idCategoria) {
    case 1:
        TelaRefrigerantes();
        break;
    case 2:
        TelaDoces();
        break;
    case 3:
        TelaSalgadinhos();
        break;
    case 4:
        TelaSucos();
        break;
    case 5:
        TelaAlcoolicos();
        break;
    case 6:
        TelaChas();
    default:
        TelaRefrigerantes();
        break;
    }
    return 0;
}

// Essa tela é responsável por pegar o input do usuario e retornar o nome da categoria do produto, seu valor e seu nome
void NomesCategoriasProdutos() {
    switch (idCategoria) {
    case 1:
        nomeCategoria = "REFRIGERANTES";
        switch (idProduto) {
        case 1:
            nomeProduto = "COCA-COLA";
            valorProduto = quantidadeProduto * 5;
            break;
        case 2:
            nomeProduto = "PEPSI";
            valorProduto = quantidadeProduto * 4;
            break;
        case 3:
            nomeProduto = "GUARANA ANTARTICA";
            valorProduto = quantidadeProduto * 4;
            break;
        case 4:
            nomeProduto = "TUBAINA";
            valorProduto = quantidadeProduto * 3;
            break;
        case 5:
            nomeProduto = "FANTA LARANJA";
            valorProduto = quantidadeProduto * 5;
            break;
        case 6:
            nomeProduto = "FANTA UVA";
            valorProduto = quantidadeProduto * 5;
            break;
        default:
            nomeProduto = "COCA-COLA";
            valorProduto = quantidadeProduto * 5;
            break;
        }
        break;
    case 2:
        nomeCategoria = "DOCES";
        switch (idProduto) {
        case 1:
            nomeProduto = "SUFLAIR";
            valorProduto = quantidadeProduto * 6;
            break;
        case 2:
            nomeProduto = "BOMBOM";
            valorProduto = quantidadeProduto * 1;
            break;
        case 3:
            nomeProduto = "BARRA CEREAL";
            valorProduto = quantidadeProduto * 2;
            break;
        case 4:
            nomeProduto = "SNIKERS";
            valorProduto = quantidadeProduto * 4;
            break;
        case 5:
            nomeProduto = "PACOQUITA";
            valorProduto = quantidadeProduto * 1;
            break;
        case 6:
            nomeProduto = "SKITTLES";
            valorProduto = quantidadeProduto * 6;
            break;
        default:
            nomeProduto = "SUFLAIR";
            valorProduto = quantidadeProduto * 6;
            break;
        }
        break;
    case 3:
        nomeCategoria = "SALGADINHOS";
        switch (idProduto) {
        case 1:
            nomeProduto = "CHEETOS";
            valorProduto = quantidadeProduto * 5;
            break;
        case 2:
            nomeProduto = "FANDANGOS";
            valorProduto = quantidadeProduto * 4;
            break;
        case 3:
            nomeProduto = "DORITOS";
            valorProduto = quantidadeProduto * 8;
            break;
        case 4:
            nomeProduto = "PRINGLES";
            valorProduto = quantidadeProduto * 10;
            break;
        case 5:
            nomeProduto = "TORCIDA";
            valorProduto = quantidadeProduto * 3;
            break;
        case 6:
            nomeProduto = "YOKITOS";
            valorProduto = quantidadeProduto * 2;
            break;
        default:
            nomeProduto = "CHEETOS";
            valorProduto = quantidadeProduto * 5;
            break;
        }
        break;
    case 4:
        nomeCategoria = "SUCOS";
        switch (idProduto) {
        case 1:
            nomeProduto = "LARANJA";
            valorProduto = quantidadeProduto * 3;
            break;
        case 2:
            nomeProduto = "UVA";
            valorProduto = quantidadeProduto * 2;
            break;
        case 3:
            nomeProduto = "MORANGO";
            valorProduto = quantidadeProduto * 4;
            break;
        case 4:
            nomeProduto = "PESSEGO";
            valorProduto = quantidadeProduto * 3;
            break;
        case 5:
            nomeProduto = "GOIABA";
            valorProduto = quantidadeProduto * 3;
            break;
        case 6:
            nomeProduto = "ACEROLA";
            valorProduto = quantidadeProduto * 2;
            break;
        default:
            nomeProduto = "LARANJA";
            valorProduto = quantidadeProduto * 3;
            break;
        }
        break;
    case 5:
        nomeCategoria = "ALCOOLICOS";
        switch (idProduto) {
        case 1:
            nomeProduto = "COROTE";
            valorProduto = quantidadeProduto * 5;
            break;
        case 2:
            nomeProduto = "SKOL";
            valorProduto = quantidadeProduto * 6;
            break;
        case 3:
            nomeProduto = "BRAHMA";
            valorProduto = quantidadeProduto * 6;
            break;
        case 4:
            nomeProduto = "AMSTEL";
            valorProduto = quantidadeProduto * 7;
            break;
        case 5:
            nomeProduto = "HEINEKEN";
            valorProduto = quantidadeProduto * 10;
            break;
        case 6:
            nomeProduto = "PETRA";
            valorProduto = quantidadeProduto * 8;
            break;
        default:
            nomeProduto = "COROTE";
            valorProduto = quantidadeProduto * 5;
            break;
        }
        break;
    case 6:
        nomeCategoria = "CHAS";
        switch (idProduto) {
        case 1:
            nomeProduto = "CIDREIRA";
            valorProduto = quantidadeProduto * 2;
            break;
        case 2:
            nomeProduto = "MATE";
            valorProduto = quantidadeProduto * 3;
            break;
        case 3:
            nomeProduto = "HIBISCO";
            valorProduto = quantidadeProduto * 2;
            break;
        case 4:
            nomeProduto = "HORTELA";
            valorProduto = quantidadeProduto * 1;
            break;
        case 5:
            nomeProduto = "CAMOMILA";
            valorProduto = quantidadeProduto * 2;
            break;
        case 6:
            nomeProduto = "BOLDO";
            valorProduto = quantidadeProduto * 3;
            break;
        default:
            nomeProduto = "CIDREIRA";
            valorProduto = quantidadeProduto * 2;
            break;
        }
        break;
    default:
        nomeCategoria = "REFRIGERANTES";
        break;
    }
}

// Essa é uma função curta que provavelmente nem precisaria existir aqui, mas decidimos colocar numa função para não atrapalhar na legibilidade do codigo
void ValorSubtotalProdutos() {
    valorSubtotal = valorSubtotal + valorProduto;
}

// Esse For esta responsavel por quando o usuario adicionar mais itens no carrinho, ele escrever qual produto, categoria, valor e quantidade uma linha após a outra; 
void ListaSubtotalProdutos() {
    NomesCategoriasProdutos();
    for (int i = 0; i < indiceLista + 1; i++) {
        cout << "| " << nomeCategoria << ": " << quantidadeProduto << "x " << nomeProduto << " R$" << valorProduto << " |\n";
    }
}

// Esse void apenas existe para quando o usuario selecionar a opção, levar para frases diferentes
void Pagamento() {
    switch (opcaoFormaPagamento) {
        case 1:
            cout << "\n'A rua esta movimentada, melhor inserir logo o cartao'\n";
            break;
        case 2:
            cout << "\n'A rua esta movimentada, melhor inserir logo o cartao'\n";
            break;
        case 3:
            cout << "\n'Melhor escanear logo o QR Code, eh arriscado bobear com um aparelho desse'\n";
            break;
        case 4:
            cout << "\n'Melhor inserir logo o dinheiro, estou morrendo de fome'\n";
            break;
        default:
            cout << "\n'A rua esta movimentada, melhor inserir logo o cartao'\n";
            break;
    }
        
}

// Essa tela é a de administrador, onde é possivel adicionar mais produtos caso necessario
void TelaAdministrador() {
    cout << " _________________________________________________________________ \n";
    cout << "|                             REPOSICAO                           |\n";
    cout << "|                        CATEGORIAS DE PRODUTOS                   |\n";
    cout << "|-----------------------------------------------------------------|\n";
    cout << "| 1 - REFRIGERANTES       2 - DOCES           3 - SALGADINHOS     |\n";
    cout << "| 4 - SUCOS               5 - ALCOOLICOS      6 - CHAS            |\n";
    cout << "|-----------------------------------------------------------------|\n";
}

// Tela feita apenas para mostrar de forma mais intuitiva as opçoes de pagamento
void TelaPagamento() {
    cout << " _________________________________________________________________ \n";
    cout << "|                           PAGAMENTO                             |\n";
    cout << "|-----------------------------------------------------------------|\n";
    cout << "|      1 - CARTAO DE DEBITO           2 - CARTAO DE CREDITO       |\n";
    cout << "|      3 - PIX                        4 - DINHEIRO TROCADO        |\n";
    cout << "|-----------------------------------------------------------------|\n";
};

// Tela ilustrativa que possui uma função para inserir valores em cada linha
// Tambem possui um cout responsavel por escrever uma frase e mostrar o valor total da compra
int TelaSubtotal() {
    cout << "\n";
    cout << " ____________________________________________ \n";
    cout << "|                 SUBTOTAL                   |\n";
    cout << "|--------------------------------------------|\n";
    ListaSubtotalProdutos();
    cout << "|--------------------------------------------|\n";
    cout << "| O valor total da sua compra foi de: R$ " << valorSubtotal << "  | \n";
    cout << "'--------------------------------------------'\n";
    return 0;
}

// Esse main ira ser responsavel por absorver os inputs e contar uma historinha para descontrair
// Esse projeto esta um pouco diferente do pedido, mas resolvemos fazer desse modo para descontrair um pouco
// Espero que curta e se divirta um pouco! S2
int main() 
{
    cout << "\n Voce esta andando pela rua quando derepente sente seu estomago roncar... \n";
    cout << "\n Nisso voce se lembra que nao comeu nada o dia inteiro por falta de tempo \n";
    cout << "\n Entao nesse momento voce percebe uma vending machine perto de voce \n";
    cout << "\n Deseja se aproximar dela para ver se algo lhe interessa? (1 - SIM | 2 - NAO) \n";
    cin >> primeiraEscolha;

    system("cls");

    if (primeiraEscolha != 2)
    {
        cout << "\n Ao aproximar-se, voce percebe que a vending machine possui um sistema altamente tecnologico \n \n";
        do {
            TelaCategoria();
            cout << "\n Voce entao decide escolher uma categoria de produtos \n";
            cin >> idCategoria;
            TelaEscolhaCategoria();
            cout << "\n Voce decide entao escolher um dos seis produtos listados \n";
            cin >> idProduto;
            cout << "\n E obviamente, a quantidade do produto desejado \n";
            cin >> quantidadeProduto;
            cout << "\n Logo apos, o sistema da vending machine leva a uma tela de subtotal\n ";
            ValorSubtotalProdutos();
            TelaSubtotal();
            cout << "\n Deseja adicionar mais itens a sacola? (1 - SIM | 2 - NAO) \n";
            cin >> segundaEscolha;
            system("cls");
            indiceLista++;
        } while (segundaEscolha != 2);
        system("cls");
        cout << "\n Na maquina entao aparece a seguinte tela:\n";
        TelaPagamento();
        cin >> opcaoFormaPagamento;
        Pagamento();
        cout << "\nCompra efetuada com sucesso, aguarde a saida dos itens adquiridos!\n";
        cout << "\n...\n";
        cout << "\n'Ufa, ate que enfim' :P \n";
        cout << "\nEnquanto voce se alimenta do que acabou de comprar, chega um homem de terno na maquina...\n";
        cout << "\nDeseja se aproximar para ver o que ele esta fazendo?\n";
        cout << "\n1. 'Sou muito curioso, nao vou resistir' 0_0 \n"
                "\n2. 'Pra mim ja deu, chega dessa festa. Eu vou embora daqui!' Ò_Ó \n";
        cin >> terceiraEscolha;
        if (terceiraEscolha != 2) {
            system("cls");
            cout << "\nAo se aproximar, voce percebe que o homem deve ser o proprietario da vending machine\n";
            cout << "\nEle entao comeca a fazer configuracoes especificas na maquina e desbloqueia uma 'tela secreta'...\n";
            TelaAdministrador();
            cout << "\nLogo apos ele comeca a mecher nela de uma forma bem especifica\n";
            cout << "\n O homem entao percebe seu interesse e lhe pergunta: 'Gostaria de testa-la meu caro serumaninho?\n";
            cout << "\n Voce que nao eh bobo nem nada aceita logo de cara. Esse eh o dia mais feliz da sua vida! ^-^ \n";
            return 0;
        } 
        else {
            cout << "\nVoce decide entao ir embora pra casa antes que dois caras numa moto facam isso por voce. :D\n";
            exit(0);
        }
    }
    else 
    {
        cout << "\n Voce ignorou sua fome e continuou seu caminho normalmente ;-; \n \n";
        exit(0);
    };
}