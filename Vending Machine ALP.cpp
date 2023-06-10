#include <iostream>
#include <map>
#include <string>
using namespace std;
int primeiraEscolha, segundaEscolha, categoria, produto, quantidade;
string nomeCategoria, nomeProduto;

int TelaPagamento() {
    return 0;
};
int TelaCategoria()
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
    return 0;
}
int TelaRefrigerantes()
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
    return 0;
}
int TelaDoces()
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
    return 0;
}
int TelaSalgadinhos()
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
    return 0;
}
int TelaSucos()
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
    return 0;
}
int TelaAlcoolicos()
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
    return 0;
}
int TelaChas()
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
    return 0;
}
int TelaEscolhaCategoria() {
    system("cls");
    switch (categoria) {
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
void NomesCategoriasProdutos() {
    switch (categoria) {
    case 1:
        nomeCategoria = "REFRIGERANTES";
        switch (produto) {
        case 1:
            nomeProduto = "COCA-COLA";
            break;
        case 2:
            nomeProduto = "PEPSI";
            break;
        case 3:
            nomeProduto = "GUARANA ANTARTICA";
            break;
        case 4:
            nomeProduto = "TUBAINA";
            break;
        case 5:
            nomeProduto = "FANTA LARANJA";
            break;
        case 6:
            nomeProduto = "FANTA UVA";
            break;
        default:
            nomeProduto = "COCA-COLA";
            break;
        }
        break;
    case 2:
        nomeCategoria = "DOCES";
        switch (produto) {
        case 1:
            nomeProduto = "SUFLAIR";
            break;
        case 2:
            nomeProduto = "BOMBOM";
            break;
        case 3:
            nomeProduto = "BARRA CEREAL";
            break;
        case 4:
            nomeProduto = "SNIKERS";
            break;
        case 5:
            nomeProduto = "PACOQUITA";
            break;
        case 6:
            nomeProduto = "SKITTLES";
            break;
        default:
            nomeProduto = "SUFLAIR";
            break;
        }
        break;
    case 3:
        nomeCategoria = "SALGADINHOS";
        switch (produto) {
        case 1:
            nomeProduto = "CHEETOS";
            break;
        case 2:
            nomeProduto = "FANDANGOS";
            break;
        case 3:
            nomeProduto = "DORITOS";
            break;
        case 4:
            nomeProduto = "PRINGLES";
            break;
        case 5:
            nomeProduto = "TORCIDA";
            break;
        case 6:
            nomeProduto = "YOKITOS";
            break;
        default:
            nomeProduto = "CHEETOS";
            break;
        }
        break;
    case 4:
        nomeCategoria = "SUCOS";
        switch (produto) {
        case 1:
            nomeProduto = "LARANJA";
            break;
        case 2:
            nomeProduto = "UVA";
            break;
        case 3:
            nomeProduto = "MORANGO";
            break;
        case 4:
            nomeProduto = "PESSEGO";
            break;
        case 5:
            nomeProduto = "GOIABA";
            break;
        case 6:
            nomeProduto = "ACEROLA";
            break;
        default:
            nomeProduto = "LARANJA";
            break;
        }
        break;
    case 5:
        nomeCategoria = "ALCOOLICOS";
        switch (produto) {
        case 1:
            nomeProduto = "COROTE";
            break;
        case 2:
            nomeProduto = "SKOL";
            break;
        case 3:
            nomeProduto = "BRAHMA";
            break;
        case 4:
            nomeProduto = "AMSTEL";
            break;
        case 5:
            nomeProduto = "HEINEKEN";
            break;
        case 6:
            nomeProduto = "PETRA";
            break;
        default:
            nomeProduto = "COROTE";
            break;
        }
        break;
    case 6:
        nomeCategoria = "CHAS";
        switch (produto) {
        case 1:
            nomeProduto = "CIDREIRA";
            break;
        case 2:
            nomeProduto = "MATE";
            break;
        case 3:
            nomeProduto = "HIBISCO";
            break;
        case 4:
            nomeProduto = "HORTELA";
            break;
        case 5:
            nomeProduto = "CAMOMILA";
            break;
        case 6:
            nomeProduto = "BOLDO";
            break;
        default:
            nomeProduto = "CIDREIRA";
            break;
        }
        break;
    default:
        nomeCategoria = "REFRIGERANTES";
        break;
    }
}

int TelaSubtotal() {
    cout << "\n";
    cout << " ____________________________________________ \n";
    cout << "|                 SUBTOTAL                   |\n";
    cout << "|--------------------------------------------|\n";
    cout << "| " << nomeCategoria << ": " << quantidade << "x " << nomeProduto << " | \n";
    cout << "|--------------------------------------------|\n";
    cout << "|                                            |\n";
    cout << "'--------------------------------------------'\n";
    return 0;
}

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
            cin >> categoria;
            TelaEscolhaCategoria();
            cout << "\n Voce decide entao escolher um dos seis produtos listados \n";
            cin >> produto;
            cout << "\n E obviamente, a quantidade do produto desejado \n";
            cin >> quantidade;
            NomesCategoriasProdutos();
            cout << "\n Logo apos, o sistema da vending machine leva a uma tela de subtotal\n ";
            TelaSubtotal();
            cout << "\n Deseja adicionar mais itens a sacola? (1 - SIM | 2 - NAO) \n";
            cin >> segundaEscolha;
            system("cls");
        } while (segundaEscolha != 2);
    }
    else 
    {
        cout << "\n Voce ignorou sua fome e continuou seu caminho normalmente \n \n";
        return 0;
    };
}