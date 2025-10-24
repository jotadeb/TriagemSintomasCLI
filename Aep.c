#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

// Permitir a leitura de caracteres especiais em diferentes Sistemas Operacionais
#ifdef _WIN32
    #include <windows.h>
#endif

void menu_febre();
void menu_lesao();
void menu_dorcorpo();
void causas();
void continua();
void limpar_buffer_entrada();

int main() {
    // Leitura de Caracteres Especiais no Windows
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
        setlocale(LC_ALL, ".UF8");
    //Leitura de Caracteres Especiais em Linux/MacOS
    #else
        setlocale(LC_ALL, "Portuguese");
    #endif
    int decisao=0;

    do {
        printf(" \n =======Informe os Sintomas abaixo======= \n");
        printf("1.Febre \n");
        printf("2.Lesões \n");
        printf("3.Dor no corpo \n");
        printf("4.Inchaço \n");
        printf("5.Dificuldade Respiratórias \n");
        printf("6 Naúseas \n");
        printf("7.Fadiga \n");
        printf("8.Tontura \n");
        printf("9.Mau estar \n");
        printf("10.Sair\n");
        printf("/////informe uma Opção/////\n");
        printf("Opção: ");
        if (scanf("%d", &decisao) != 1) {
            decisao = 0;
        }
        system("cls");

        limpar_buffer_entrada();

        switch (decisao) {
            case 1:
                menu_febre();
                break;
            case 2:
                menu_lesao();
                break;
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                printf("Encerrando a operação... ");
                break;
            default:
                printf("Opção Inválida! Tente um número de 1 a 10\n");
                break;
        }
    } while (decisao != 10);
    return 0;
}

void menu_febre() {
    float temperatura;
    int decisao_temperatura = 0;
    printf("Informe sua temperatura \n");
    scanf("%f",&temperatura);

    // Saber oque mais a pessoa está sentindo junto com a febre
    if (temperatura >=37 && temperatura < 39 ) { //Febre Moderada
        printf("\n=====Informe sintomas que voce esta tendo juntamente a sua febre=====\n");
        printf("1.Mal estar geral\n");
        printf("2.Fadiga e Cansaço\n");
        printf("3.Dor de cabeça\n");
        printf("4.Arrepios\n");
        printf("5.Aumento da frequência cardíaca\n");
        printf("6.Suor e Frio\n");
        printf("7.Suldorese\n");
        printf("8.Perda de apetite\n");
        printf("9.Vermelidão no rosto\n");
        printf("=====Se seu caso nao se encaixa nos sintomas acima digite 0 =====\n");
        printf("Opção:");
        scanf("%d", &decisao_temperatura);

        switch (decisao_temperatura) {
            case 1:
                causas();
                printf("\n Gripe ou resfriado comum // Dor de garganta, tosse, dor no corpo, coriza \n // Repouso, hidratacao, antitermico como paracetamol ou dipirona\n");
                printf("\n Dengue (fase inicial) // Dor atras dos olhos, manchas vermelhas, dor muscular intensa, fraqueza \n // Hidratacao intensa, evitar AAS e ibuprofeno, procurar medico se piorar \n");
                printf("\n Covid‑19 // Tosse seca, falta de ar, perda de olfato - paladar, fadiga \n // Isolamento, hidratacao e monitorar respiracao\n");
                printf("\n Infeccao de garganta (amigdalite/faringite) // Dor para engolir, vermelhidao na garganta, ínguas no pescoco \n //  Gargarejos com agua morna e sal, analgesico leve, avaliação medica se persistir\n");
                printf("\n Exaustao, estresse ou ansiedade // Tremor    es, calor interno, insonia, palpitacao \n // Descanso, respiracao profunda, evitar cafeina, observar melhora\n");
                continua();
            case 2:
                causas();
                printf("\n Gripe ou resfriado comum // Dor de garganta, dor no corpo, tosse, dor de cabeça, coriza \n // Repouso, hidratação, antitérmico (paracetamol/dipirona) \n");
                printf("\n Dengue (fase inicial) // Dor muscular intensa, fraqueza, manchas vermelhas, dor atrás dos olhos \n // Hidratação intensa, evitar AAS/ibuprofeno, buscar muito médico se sinais de alarme\n");
                printf("\n Covid-19 // Tosse seca, dor de cabeça, falta de ar, perda de olfato/paladar \n // Isolamento, monitorar sintomas, hidratação \n");
                printf("\n Mononucleose ou outras viroses // Dor de garganta, inchaço dos gânglios, dor no corpo, sudorese \n // Repouso, hidratação, evitar esforço \n");
                printf("\n Doenças bacterianas (amigdalite/pneumonia) // Dor para engolir, tosse, dor torácica, sinais respiratórios \n // Procurar avaliação médica");
                printf("\n Doenças autoimunes // Dor nas articulações, vermelhidão, perda de peso, sintomas digestivos \n // Procurar reumatologista, exames específico \n");
                printf("\n Estresse, ansiedade ou exaustão // Palpitação, insônia, irritabilidade \n // Descanso, técnicas de relaxamento, evitar cafeína \n");
                continua();
            case 3:
                causas();
                printf("\n Gripe ou resfriado comum // Dor de garganta, dor no corpo, tosse, dor de cabeça, coriza \n // Repouso, hidratação, antitérmico (paracetamol/dipirona) \n");
                printf("\n Dengue (fase inicial) // Dor muscular intensa, fraqueza, manchas vermelhas, dor atrás dos olhos \n // Hidratação intensa, evitar AAS/ibuprofeno, buscar muito médico se sinais de alarme\n");
                printf("\n Covid-19 // Tosse seca, dor de cabeça, falta de ar, perda de olfato/paladar \n // Isolamento, monitorar sintomas, hidratação \n");
                printf("\n Sinusite // Dor ou pressão facial, congestão nasal, secreção espessa, cansaço \n // Analgésico, inalação, hidratação; procurar médico se não melhorar");
                printf("\n Meningite (grave) // Febre alta, dor de cabeça intensa, rigidez na nuca, vômitos, apatia \n // Procurar atendimento médico urgente\n");
                printf("\n Desidratação // Tontura, fadiga, confusão mental, boca seca \n // Beber água, repouso, evitar esforço \n");
                continua();
            case 4:
                causas();
                printf("\n Infecção viral ou bacteriana // Calafrios, suores, mal-estar, dor muscular, fadiga \n // Repouso, hidratação, antitérmico (paracetamol ou dipirona); procurar médico se persistir \n");
                printf("\n Desidratação // Tontura, boca seca, queda de pressão, fraqueza \n // Ingerir bastante água e reidratar-se com soro ou bebidas isotônicas \n");
                printf("\n Estresse, ansiedade ou fadiga // Tremores, suor frio, respiração acelerada \n // Respirar fundo, sentar e descansar; evitar cafeína e esforços \n");
                printf("\n Doenças cardíacas (taquiarritmias) // Palpitações, dor no peito, falta de ar, tontura \n // Procurar atendimento médico urgente, especialmente se o pulso for irregular \n");
                printf("\n Infecções graves (sepse) // Febre alta, tremores, confusão mental, queda de pressão, fraqueza extrema \n // Atendimento hospitalar imediato \n");
                printf("\n Doenças endócrinas (hipertireoidismo) // Suor excessivo, perda de peso, irritabilidade, mãos trêmulas \n // Consulta médica e exames hormonais \n");
                continua();
            default:
                printf("Valor inválido! Tente de 1 a 10 novamente!");
        }
        // Caso urgente, a pessoa precisa ir pro hospital imediatamente.
    } else if (temperatura >=39) { // Febre Grave
        printf("\n ===== GRAVÍSSIMO! FEBRE ACIMA DE 39C PROCURE UM MÉDICO IMEDIATAMENTE!!! =====\n");
        printf("\n -----Orientações Básicas-----\n");
        printf("\n Busque atendimento médico imediato sempre que uma febre estiver acima de 39°C, \n especialmente se persistir ou vier acompanhada de dor intensa, convulsões, confusão mental, vômitos, manchas vermelhas, falta de ar, \n dificuldade para acordar ou rigidez na nuca. \n");
        printf("\n Em casa, mantenha-se hidratado e em repouso.");
        printf("\n Use apenas antitérmicos comuns (paracetamol ou dipirona) segundo orientação, evitando automedicação excessiva.");
        printf("\n Evite banhos frios/gelados, pois podem causar queda rápida da pressão.");
        printf("\n Não se automedique com antibióticos ou corticoides.");
        printf("\n=====Procure o Médico imediatamente=====\n");
        continua();
    }
}

void menu_lesao() {
    int tipo_lesao = 0;

    printf("\n===== Tipos de Lesões =====\n");
    printf("1. Corte ou laceração\n");
    printf("2. Contusão (hematoma / pancada)\n");
    printf("3. Entorse (torção)\n");
    printf("4. Fratura\n");
    printf("5. Queimadura\n");
    printf("6. Luxação (deslocamento articular)\n");
    printf("7. Picada de inseto ou mordida de animal\n");
    printf("8. Ferida infeccionada\n");
    printf("9. Lesão por esforço repetitivo (LER)\n");
    printf("===== Se não se encaixa em nenhum, digite 0 =====\n");
    printf("Opção: ");

    scanf("%d", &tipo_lesao);

    switch (tipo_lesao) {
        case 1:
            causas();
            printf("\nCorte ou laceração // Sangramento, dor local, ferida aberta.\n");
            printf("// Causa: objetos cortantes, quedas, acidentes domésticos.\n");
            printf("// Cuidados: limpar com água e sabão, aplicar antisséptico e cobrir com gaze.\n");
            printf("// Se for profundo ou sangrar muito, procurar pronto atendimento.\n");
            continua();
            break;

        case 2:
            causas();
            printf("\nContusão (hematoma) // Mancha roxa, dor, inchaço.\n");
            printf("// Causa: batida, impacto, queda.\n");
            printf("// Cuidados: aplicar gelo por 15 minutos, repousar o local e evitar esforço.\n");
            printf("// Procurar médico se houver dor intensa ou dificuldade de movimento.\n");
            continua();
            break;

        case 3:
            causas();
            printf("\nEntorse // Dor, inchaço e dificuldade para movimentar.\n");
            printf("// Causa: torção em articulação (ex: tornozelo, punho).\n");
            printf("// Cuidados: gelo, elevação e repouso.\n");
            printf("// Se o inchaço for grande ou a dor não melhorar, procurar ortopedista.\n");
            continua();
            break;

        case 4:
            causas();
            printf("\nFratura // Dor forte, deformidade, inchaço, incapacidade de mover.\n");
            printf("// Causa: quedas, pancadas ou acidentes.\n");
            printf("// Cuidados: não movimentar o membro, imobilizar e procurar hospital imediatamente.\n");
            printf("// Pode haver fratura exposta (osso visível) — emergência médica!\n");
            continua();
            break;

        case 5:
            causas();
            printf("\nQueimadura // Vermelhidão, bolhas ou carbonização.\n");
            printf("// Causa: calor, eletricidade, produtos químicos.\n");
            printf("// Cuidados: resfriar com água corrente (nunca gelo!), não estourar bolhas.\n");
            printf("// Queimaduras graves ou extensas: procurar atendimento urgente.\n");
            continua();
            break;

        case 6:
            causas();
            printf("\nLuxação // Articulação fora do lugar, dor intensa e deformidade.\n");
            printf("// Causa: quedas, impactos, esportes.\n");
            printf("// Cuidados: não tentar recolocar, imobilizar o local e buscar atendimento.\n");
            continua();
            break;

        case 7:
            causas();
            printf("\nPicada de inseto ou mordida de animal // Vermelhidão, coceira, dor ou inchaço.\n");
            printf("// Causa: insetos (mosquito, abelha) ou mordida (cachorro, gato).\n");
            printf("// Cuidados: lavar o local, aplicar compressa fria.\n");
            printf("// Procurar médico se houver alergia, infecção ou o animal não estiver vacinado.\n");
            continua();
            break;

        case 8:
            causas();
            printf("\nFerida infeccionada // Vermelhidão, calor, dor e presença de pus.\n");
            printf("// Causa: contaminação por bactérias em cortes ou feridas mal cuidadas.\n");
            printf("// Cuidados: limpeza, uso de antisséptico, e avaliação médica se persistir.\n");
            continua();
            break;

        case 9:
            causas();
            printf("\nLesão por esforço repetitivo (LER/DORT) // Dor muscular, formigamento, perda de força.\n");
            printf("// Causa: movimentos repetitivos, má postura, esforço excessivo.\n");
            printf("// Cuidados: alongamento, pausas, correção ergonômica.\n");
            printf("// Procurar fisioterapia se a dor persistir.\n");
            continua();
            break;

        case 0:
            printf("\nSem registro de lesão específica.\n");
            continua();
            break;

        default:
            printf("Valor inválido! Tente de 1 a 9 novamente!");
    }
}

void causas () {
    printf("\n Causa - doenca provavel // Sintomas adicionais comuns \n // O que fazer inicialmente");
}

    void continua() {
    int stop;
    printf("\n=====DIGITE 1 PARA CONTINUAR=====\n");
    scanf("%d",&stop);
}

void limpar_buffer_entrada() {
    int c;
    // Lê e descarta caracteres do buffer de entrada
    // até encontrar um '\n' (Enter) ou o fim do arquivo (EOF).
    while ((c = getchar()) != '\n' && c != EOF);
}