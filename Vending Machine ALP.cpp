// Projeto ALP - Vending Machine
// Se possivel, execute o programa em tela cheia!
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cstdlib>
// Declaracao das variaveis que serao utilizadas no projeto, cada uma em um momento especifico
using namespace std;
int primeiraEscolha, segundaEscolha, terceiraEscolha, idCategoria, idProduto, valorProduto, itensCarrinho, opcaoFormaPagamento, opcaoPagamento, estoqueProduto;
int quantidadeProduto = 0, valorSubtotal = 0, indiceLista = 0, pagamentoDinheiro = 0, valorDinheiro = 0, valorTotalSuportado = 2000;
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
    cout << "|#| R$5   1-COCA-COLA ETQ: 10 |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#| R$4   2-PEPSI     ETQ: 11 |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#| R$4   3-GUARANA ANTARTICA |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#| R$3   4-TUBAINA   ETQ: 13 |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#| R$5   5-FANTA LAR ETQ: 15 |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#| R$5   6-FANTA UVA ETQ: 14 |#|  ~      |##|\n";
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
    cout << "|#| R$6    1-SUFLAIR  ETQ: 10 |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#| R$1    2-BOMBOM   ETQ: 12 |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#| R$2    3-BARRA C. ETQ: 11 |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#| R$4    4-SNIKERS  ETQ: 15 |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#| R$1    5-PACOca   ETQ: 16 |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#| R$6    6-SKITTLES ETQ: 17 |#|  ~      |##|\n";
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
    cout << "|#| R$5    1-CHEETOS  ETQ: 11 |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#| R$4   2-FANDANGOS ETQ: 19 |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#| R$8    3-DORITOS  ETQ: 18 |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#| R$10   4-PRINGLES ETQ: 15 |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#| R$3    5-TORCIDA  ETQ: 16 |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#| R$2    6-YOKITOS  ETQ: 12 |#|  ~      |##|\n";
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
    cout << "|#| R$3    1-LARANJA  ETQ: 21 |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#| R$2    2-UVA      ETQ: 24 |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#| R$4    3-MORANGO  ETQ: 18 |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#| R$3    4-PESSEGO  ETQ: 14 |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#| R$3    5-GOIABA   ETQ: 13 |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#| R$2    6-ACEROLA  ETQ: 12 |#|  ~      |##|\n";
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
    cout << "|#| R$5     1-COROTE  ETQ: 24 |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#| R$6     2-SKOL    ETQ: 35 |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#| R$6     3-BRAHMA  ETQ: 42 |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#| R$7     4-AMSTEL  ETQ: 19 |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#| R$10   5-HEINEKEN ETQ: 27 |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#| R$8     6-PETRA   ETQ: 33 |#|  ~      |##|\n";
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
    cout << "|#| R$2    1-CIDREIRA ETQ: 25 |##|Aceitas |##|\n";
    cout << "|#|===========================|##|________|##|\n";
    cout << "|#|```````````````````````````|##############|\n";
    cout << "|#| R$3    2-MATE     ETQ: 8  |##############|\n";
    cout << "|#|===========================|#|`````````|##|\n";
    cout << "|#|```````````````````````````|#| ,-----, |##|\n";
    cout << "|#| R$2    3-HIBISCO  ETQ: 14 |#| |1|2|3| |##|\n";
    cout << "|#|===========================|#| |4|5|6| |##|\n";
    cout << "|#|```````````````````````````|#| |7|8|9| |##|\n";
    cout << "|#| R$1    4-HORTELA  ETQ: 11 |#| '-----' |##|\n";
    cout << "|#|===========================|#|[=======]|##|\n";
    cout << "|#|```````````````````````````|#|  _   _  |##|\n";
    cout << "|#| R$2    5-CAMOMILA ETQ: 13 |#| ||| ( ) |##|\n";
    cout << "|#|===========================|#| |||  `  |##|\n";
    cout << "|#|```````````````````````````|#| |||  `  |##|\n";
    cout << "|#| R$3    6-BOLDO    ETQ: 15 |#|  ~      |##|\n";
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
        break;
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

// Esse For esta responsavel por quando o usuario adicionar mais itens no carrinho, ele escrever qual produto, categoria, valor e quantidade uma linha após a outra; 
void ListaSubtotalProdutos() {
    for (int i = 0; i < indiceLista + 1; i++) {
        cout << "| " << nomeCategoria << ": " << quantidadeProduto << "x R$ " << valorProduto << " " << nomeProduto << " |\n";
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
        do {
            cout << "\n Quanto devo inserir? \n"
                "\n 1. R$ 2"
                "\n 2. R$ 5"
                "\n 3. R$ 10"
                "\n 4. R$ 20"
                "\n 5. R$ 50"
                "\n 6. R$ 100 \n";
            cin >> pagamentoDinheiro;
            switch (pagamentoDinheiro) {
            case 1:
                valorDinheiro = 2;
                break;
            case 2:
                valorDinheiro = 5;
                break;
            case 3:
                valorDinheiro = 10;
                break;
            case 4:
                valorDinheiro = 20;
                break;
            case 5:
                valorDinheiro = 50;
                break;
            case 6:
                valorDinheiro = 100;
                break;
            default:
                valorDinheiro = 2;
                break;
            }
            if (valorDinheiro < valorSubtotal) {
                cout << "\n Valor insuficiente \n";
                valorDinheiro = 0;
            }
        } while (valorDinheiro < valorSubtotal);
        cout << "\n Seu troco eh R$ " << (valorDinheiro - valorSubtotal) << endl;
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
    for (int i = 0; i < indiceLista + 1; i++) {
        cout << "| " << nomeCategoria << ": " << quantidadeProduto << "x R$ " << valorProduto << " " << nomeProduto
            << " |\n";
    }
    cout << "|--------------------------------------------|\n";
    cout << "| O valor total da sua compra foi de: R$ " << valorSubtotal << "  | \n";
    cout << "'--------------------------------------------'\n";
    return 0;
}

// Tela responsavel por mostrar os itens que podem ser adicionados a maquina de vendas
void AdicionarProdutosMaquina() {
    switch (idCategoria) {
        case 1:
            cout << " _________________________________________________________________ \n";
            cout << "|                                                                 |\n";
            cout << "|                            REFRIGERANTES                        |\n";
            cout << "|-----------------------------------------------------------------|\n";
            cout << "| 1 - COCA-COLA          2 - PEPSI          3 - GUARANA ANTARTICA |\n";
            cout << "| 4 - TUBAINA            5 - FANTA LARANJA  6 - FANTA UVA         |\n";
            cout << "|-----------------------------------------------------------------|\n";
            break;
        case 2:
            cout << " _________________________________________________________________ \n";
            cout << "|                                                                 |\n";
            cout << "|                            DOCES                                |\n";
            cout << "|-----------------------------------------------------------------|\n";
            cout << "| 1 - SUFLAIR            2 - BOMBOM         3 - BARRA CEREAL      |\n";
            cout << "| 4 - SNIKERS            5 - PACOQUITA      6 - SKITTLES          |\n";
            cout << "|-----------------------------------------------------------------|\n";
            break;
        case 3:
            nomeCategoria = "SALGADINHOS";
            cout << " _________________________________________________________________ \n";
            cout << "|                                                                 |\n";
            cout << "|                            SALGADINHOS                          |\n";
            cout << "|-----------------------------------------------------------------|\n";
            cout << "| 1 - CHEETOS            2 - FANDANGOS      3 - DORITOS           |\n";
            cout << "| 4 - PRINGLES           5 - TORCIDA        6 - YOKITOS           |\n";
            cout << "|-----------------------------------------------------------------|\n";
            break;
        case 4:
            nomeCategoria = "SUCOS";
            cout << " _________________________________________________________________ \n";
            cout << "|                                                                 |\n";
            cout << "|                            SUCOS                                |\n";
            cout << "|-----------------------------------------------------------------|\n";
            cout << "| 1 - LARANJA            2 - UVA            3 - MORANGO           |\n";
            cout << "| 4 - PESSEGO            5 - GOIABA         6 - ACEROLA           |\n";
            cout << "|-----------------------------------------------------------------|\n";
            break;
        case 5:
            nomeCategoria = "ALCOOLICOS";
            cout << " _________________________________________________________________ \n";
            cout << "|                                                                 |\n";
            cout << "|                            ALCOOLICOS                           |\n";
            cout << "|-----------------------------------------------------------------|\n";
            cout << "| 1 - COROTE             2 - SKOL           3 - BRAHMA            |\n";
            cout << "| 4 - AMSTEL             5 - HEINEKEN       6 - PETRA             |\n";
            cout << "|-----------------------------------------------------------------|\n";
            break;
        case 6:
            nomeCategoria = "CHAS";
            cout << " _________________________________________________________________ \n";
            cout << "|                                                                 |\n";
            cout << "|                            CHAS                                 |\n";
            cout << "|-----------------------------------------------------------------|\n";
            cout << "| 1 - CIDEIRA            2 - MATE           3 - HIBISCO           |\n";
            cout << "| 4 - HORTELA            5 - CAMOMILA       6 - BOLDO             |\n";
            cout << "|-----------------------------------------------------------------|\n";
            break;
    };
}

// Tela onde sera mostrado a quantia a ser adicionada na maquina
void ConfirmarAdicaoMaquina() {
    cout << " _________________________________________________________________ \n";
    cout << "|                                                                 |\n";
    cout << "|                DESEJA ADICIONAR ESSES ITENS?                    |\n";
    cout << "|-----------------------------------------------------------------|\n";
    cout << "| " << nomeCategoria << ": " << quantidadeProduto << "x R$ " << valorProduto << " " << nomeProduto << " |\n";
    cout << "|-----------------------------------------------------------------|\n";
    cout << "|                TOTAL FATURADO HOJE: R$ " << valorSubtotal <<     " |\n";
    cout << "|                TOTAL ARMAZENAMENTO DISPONIVEL: R$ " << valorSubtotal - valorTotalSuportado<< " |\n";
    cout << "|-----------------------------------------------------------------|\n";
}

// Esse main ira ser responsavel por absorver os inputs e contar uma historinha para descontrair
// Esse projeto esta um pouco diferente do pedido, mas resolvemos fazer desse modo para descontrair um pouco
// Espero que curta e se divirta um pouco! S2
int main() {
    cout << "\n Voce esta andando pela rua quando derepente sente seu estomago roncar... \n";
    cout << "\n Nisso voce se lembra que nao comeu nada o dia inteiro por falta de tempo \n";
    cout << "\n Entao nesse momento voce percebe uma vending machine perto de voce \n";
    cout << "\n Deseja se aproximar dela para ver se algo lhe interessa? (1 - SIM | 2 - NAO) \n";
    cin >> primeiraEscolha;

    system("cls");

    if (primeiraEscolha != 2) {
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
            NomesCategoriasProdutos();
            cout << "\n Logo apos, o sistema da vending machine leva a uma tela de subtotal \n ";
            valorSubtotal += valorProduto ;
            TelaSubtotal();
            cout << "\n Deseja adicionar mais itens a sacola? (1 - SIM | 2 - NAO) \n";
            cin >> segundaEscolha;
            system("cls");
            indiceLista++;
        } while (segundaEscolha != 2);

        system("cls");
        cout << "\n Na maquina entao aparece a seguinte tela: \n";
        TelaPagamento();
        cin >> opcaoFormaPagamento;
        Pagamento();
        cout << "\n Compra efetuada com sucesso, aguarde a saida dos itens adquiridos! \n";
        cout << "\n ...\n";
        cout << "\n 'Ufa, ate que enfim' :P \n";
        cout << "\n Enquanto voce se alimenta do que acabou de comprar, chega um homem de terno na maquina... \n";
        cout << "\n Deseja se aproximar para ver o que ele esta fazendo? \n";
        cout << "\n 1. 'Sou muito curioso, nao vou resistir' 0_0 \n"
                "\n 2. 'Pra mim ja deu, chega dessa festa. Eu vou embora daqui!' Ò_Ó \n";
        cin >> terceiraEscolha;

        if (terceiraEscolha != 2) {
            system("cls");
            cout << "\n Ao se aproximar, voce percebe que o homem deve ser o proprietario da vending machine \n";
            cout << "\n Ele entao comeca a fazer configuracoes especificas na maquina e desbloqueia uma 'tela secreta'... \n";
            TelaAdministrador();
            cout << "\n Logo apos ele comeca a mecher nela de uma forma bem especifica \n";
            cout << "\n O homem entao percebe seu interesse e lhe pergunta: 'Gostaria de testa-la meu caro serumaninho? \n";
            cout << "\n Voce que nao eh bobo nem nada aceita logo de cara. Esse eh o dia mais feliz da sua vida! ^-^ \n";
            cout << "\n Voce decide entao selectionar uma opcao \n";
            cin >> idCategoria;
            cout << "\n Aparece entao a tela de produtos\n";
            AdicionarProdutosMaquina();
            cout << "\n Voce decide entao selectionar uma opcao \n";
            cin >> idProduto;
            cout << "\n Por fim, chega na tela onde eh possivel adicionar a quantia de itens na maquina \n";
            cout << "\n Nesse momento entao o homem vira e lhe diz: 'Nao se preocupe, os itens chegarao em breve e serao repostos! \n";
            cout << "\n Voce decide entao colocar ", cin >> quantidadeProduto;
            ConfirmarAdicaoMaquina();
            cout << "\n A noite ja esta chegando e voce ainda esta brincando com essa maquina...\n";
            cout << "\n 'Melhor ir embora para casa, outro dia eu volto' \n";
            system("cls");
            cout << "\n No outro dia voce passa novamente pelo local onde se divertiu tanto ontem, \n";
            cout << "\n contudo, a maquina nao estava mais la... \n";
            cout << "\n Voce cogita perguntar para alguem o que aconteceu, mas ao olhar atentamente. Percebe que \n";
            cout << "\n simplesmente nao cabe nada naquele local. Confuso, voce volta para casa e nunca mais toca nesse assunto... \n";
            return 0;
        }
        else {
            cout << "\n Voce decide entao ir embora pra casa antes que dois caras numa moto facam isso por voce. :D \n";
            exit(0);
        }
    }
    else {
        cout << "\n Voce ignorou sua fome e continuou seu caminho normalmente ;-; \n \n";
        exit(0);
    }
}
