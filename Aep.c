#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Permitir a leitura de caracteres especiais em diferentes Sistemas Operacionais
#ifdef _WIN32
    #include <windows.h>
#endif

void menu_febre();
void menu_lesao();
void menu_dorcorpo();
void inchaco();
void causas();
void continua();
void limpar_buffer_entrada();

int main() {
    // Leitura de Caracteres Especiais no Windows
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
        setlocale(LC_ALL, ".UF8");
    //Leitura de Caracteres speciais em Linux/MacOS
    #else
        setlocale(LC_ALL, "Portuguese");
    #endif
    int decisao=0;
    

    do {
        system("cls");
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
                menu_dorcorpo();
                break;
            case 4:
                inchaco();
                break;
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
                break;
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
                break;
            case 3:
                causas();
                printf("\n Gripe ou resfriado comum // Dor de garganta, dor no corpo, tosse, dor de cabeça, coriza \n // Repouso, hidratação, antitérmico (paracetamol/dipirona) \n");
                printf("\n Dengue (fase inicial) // Dor muscular intensa, fraqueza, manchas vermelhas, dor atrás dos olhos \n // Hidratação intensa, evitar AAS/ibuprofeno, buscar muito médico se sinais de alarme\n");
                printf("\n Covid-19 // Tosse seca, dor de cabeça, falta de ar, perda de olfato/paladar \n // Isolamento, monitorar sintomas, hidratação \n");
                printf("\n Sinusite // Dor ou pressão facial, congestão nasal, secreção espessa, cansaço \n // Analgésico, inalação, hidratação; procurar médico se não melhorar");
                printf("\n Meningite (grave) // Febre alta, dor de cabeça intensa, rigidez na nuca, vômitos, apatia \n // Procurar atendimento médico urgente\n");
                printf("\n Desidratação // Tontura, fadiga, confusão mental, boca seca \n // Beber água, repouso, evitar esforço \n");
                continua();
                break;
            case 4:
                causas();
                printf("\n Infecção viral ou bacteriana // Calafrios, suores, mal-estar, dor muscular, fadiga \n // Repouso, hidratação, antitérmico (paracetamol ou dipirona); procurar médico se persistir \n");
                printf("\n Desidratação // Tontura, boca seca, queda de pressão, fraqueza \n // Ingerir bastante água e reidratar-se com soro ou bebidas isotônicas \n");
                printf("\n Estresse, ansiedade ou fadiga // Tremores, suor frio, respiração acelerada \n // Respirar fundo, sentar e descansar; evitar cafeína e esforços \n");
                printf("\n Doenças cardíacas (taquiarritmias) // Palpitações, dor no peito, falta de ar, tontura \n // Procurar atendimento médico urgente, especialmente se o pulso for irregular \n");
                printf("\n Infecções graves (sepse) // Febre alta, tremores, confusão mental, queda de pressão, fraqueza extrema \n // Atendimento hospitalar imediato \n");
                printf("\n Doenças endócrinas (hipertireoidismo) // Suor excessivo, perda de peso, irritabilidade, mãos trêmulas \n // Consulta médica e exames hormonais \n");
                continua();
                break;
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

void menu_dorcorpo() {
    int tipo_dor = 0;

    printf("\n===== Informe o Tipo de Dor no Corpo =====\n");
    printf("1. Dor no corpo\n");
    printf("2. Dor atrás dos olhos\n");
    printf("3. Dor generalizada\n");
    printf("4. Dor nas articulações\n");
    printf("5. Tensão muscular\n");
    printf("6. Dor muscular localizada\n");
    printf("7. Mal-estar\n");
    printf("8. Queimação\n");
    printf("9. Dor lombar\n");
    printf("===== Se não se encaixa em nenhum, digite 0 =====\n");
    printf("Opção: ");

    scanf("%d", &tipo_dor);
    switch (tipo_dor) {
        case 1: 
            causas();
            printf("\n \n Gripe e resfriado // Febre, dor de cabeça, cansaço \n // Repouso, hidratação, antitérmicos. \n");
            printf("\n // A dor no corpo na gripe e no resfriado é causada principalmente pela resposta exagerada \n // do sistema imunológico ao vírus. \n");
            continua();
        break;
        case 2:
            causas();
            printf("\n \n Dengue // Febre alta, manchas vermelhas, náuseas \n // Buscar atendimento médico urgente. \n");
            printf("\n // A dengue causa dor no corpo principalmente por ser uma doença viral sistêmica que afeta o \n // sistema muscular e articular.");
            continua();
        break;
        case 3:
            causas();
            printf("\n \n Fibromialgia // Fadiga, distúrbios do sono, ansiedade \n // Consulta médica, fisioterapia. \n");
            printf("\n // A fibromialgia é uma doença caracterizada principalmente por dor difusa e persistente no \n // corpo, que pode ser descrita como dor nos músculos, nos ossos ou ao redor das articulações, \n // embora não envolva inflamação articular verdadeira.");
            continua();
        break;
        case 4:
            causas();
            printf("\n \n Artrite reumatoide // Inchaço, rigidez, fadiga \n // Avaliação médica especializada. \n");
            printf("\n // A artrite reumatoide é uma doença inflamatória crônica autoimune que afeta principalmente as \n // articulações, causando dor, inchaço, rigidez e sensibilidade, principalmente nas mãos, punhos, \n // joelhos, tornozelos e pés. ");
            continua();
        break;
        case 5:
            causas();
            printf("\n \n Estresse e ansiedade // Insônia, irritabilidade, palpitações \n // Técnicas relaxamento, psicoterapia. \n");
            printf("\n // Estresse e ansiedade são respostas naturais do corpo a situações percebidas como desafiadoras \n // ou ameaçadoras, mas quando se tornam excessivos ou crônicos podem causar sintomas físicos e emocionais \n // significativos.");
            continua();
        break;
        case 6:
            causas();
            printf("\n \n Esforço físico/muscular // Rigidez, inchaço, espasmos \n // Repouso, compressas, hidratação. \n");
            printf("\n // A dor no corpo relacionada ao esforço físico/muscular ocorre principalmente por causa de microlesões \n // nas fibras musculares geradas por exercícios intensos, repetitivos ou realizados por pessoas sedentárias \n // que voltam a praticar atividade.");
            continua();
        break;
        case 7:
            causas();
            printf("\n \n Doença viral não específica // Náuseas, tosse, dor de garganta \n // Repouso, hidratação, monitorar sintomas. \n");
            printf("\n // Doença viral não específica se refere a uma infecção causada por vírus que não é atribuída a um vírus \n // específico ou não identificado, apresentando sintomas comuns a diversas viroses.");
            continua();
        break;
        case 8:
            causas();
            printf("\n \n Neuropatia periférica // Formigamento, dormência, fraqueza \n // Avaliação médica, fisioterapia. \n");
            printf("\n // A neuropatia periférica ocorre quando os nervos periféricos que transmitem informações entre o sistema \n // nervoso central e o resto do corpo são danificados. ");
            continua();
        break;
        case 9:
            causas();
            printf("\n \n Má postura // Rigidez cervical, dor entre ombros \n // Correção postural, fisioterapia. \n ");
            printf("\n // A má postura ocorre quando o corpo mantém uma posição inadequada por longos períodos, causando desequilíbrio \n // entre músculos, ossos e articulações, principalmente da coluna vertebral.");
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

void inchaco(){
    int tipo_inchaço = 0;

    printf("\n===== Informe o Local ou Tipo de Inchaço que você tem =====\n");
    printf("1. Inchaço nas pernas e pés\n");
    printf("2. Inchaço nas mãos e braços\n");
    printf("3. Inchaço no rosto e pescoço\n");
    printf("4. Inchaço abdominal\n");
    printf("5. Inchaço articular (joelhos, cotovelos, pulsos)\n");
    printf("6. Inchaço devido a inflamação local\n");
    printf("7. Inchaço generalizado no corpo\n");
    printf("8. Inchaço com vermelhidão e calor\n");
    printf("===== Se não se encaixa em nenhum, digite 0 =====\n");
    printf("Opção: ");

    if (scanf("%d", &tipo_inchaço) != 1) {
        tipo_inchaço = 0;
        limpar_buffer_entrada();
    }

    switch (tipo_inchaço) {
        case 1:
            causas();
            printf("\nInchaço nas pernas e pés // Dor, peso, dificuldade para caminhar, manchas roxas.\n");
            printf("// Problemas circulatórios, insuficiência renal, inflamação, repouso prolongado.\n");
            printf("// Elevar as pernas, usar meias de compressão, movimentar-se regularmente.\n");
            printf("// Procurar médico se persistir ou vier com dor no peito ou falta de ar.\n");
            continua();
            break;

        case 2:
            causas();
            printf("\nInchaço nas mãos e braços // Dor, formigamento, dificuldade para movimentar, vermelhidão.\n");
            printf("// Inflamação, retenção de líquidos, problemas circulatórios, síndrome do túnel do carpo.\n");
            printf("// Elevar os membros, aplicar gelo, fazer alongamentos e descansar.\n");
            printf("// Procurar médico se o inchaço não diminuir ou vier com adormecimento.\n");
            continua();
            break;

        case 3:
            causas();
            printf("\nInchaço no rosto e pescoço // Dor, dificuldade para engolir, respiração prejudicada.\n");
            printf("// Alergia, inflamação das glândulas, infecção, reação a medicamentos.\n");
            printf("// Não apertar o pescoço, manter em repouso, evitar alérgenos conhecidos.\n");
            printf("// Procurar atendimento médico se houver dificuldade para respirar ou engolir.\n");
            continua();
            break;

        case 4:
            causas();
            printf("\nInchaço abdominal // Dor, desconforto, sensação de plenitude, dificuldade para respirar.\n");
            printf("// Gases, má digestão, retenção de líquidos, problemas no fígado ou rins.\n");
            printf("// Evitar alimentos gordurosos, beber água regularmente, fazer caminhadas leves.\n");
            printf("// Procurar médico se o inchaço persistir mais de 3 dias ou for acompanhado de dor intensa.\n");
            continua();
            break;

        case 5:
            causas();
            printf("\nInchaço articular (joelhos, cotovelos, pulsos) // Dor, limitação de movimento, calor local.\n");
            printf("// Artrite, gota, inflamação por esforço, infecção, lesão articular.\n");
            printf("// Aplicar gelo, elevar a articulação, tomar anti-inflamatório recomendado.\n");
            printf("// Procurar ortopedista se não melhorar ou houver deformidade.\n");
            continua();
            break;

        case 6:
            causas();
            printf("\nInchaço com inflamação local // Vermelhidão, calor, dor e sensibilidade no local.\n");
            printf("// Trauma, inflamação, infecção de ferida, reação alérgica.\n");
            printf("// Aplicar compressa fria, evitar mexer no local, manter higiene.\n");
            printf("// Procurar médico se piorar, apresentar sinais de infecção ou não melhorar em dias.\n");
            continua();
            break;

        case 7:
            causas();
            printf("\nInchaço generalizado no corpo // Fadiga, dificuldade para respirar, ganho de peso, dor muscular.\n");
            printf("// Problemas renais, hepáticos, cardíacos, desnutrição, reação alérgica severa.\n");
            printf("// Aumentar ingestão de água, reduzir sal, descansar e evitar esforço.\n");
            printf("// Procurar atendimento médico urgente para investigação.\n");
            continua();
            break;

        case 8:
            causas();
            printf("\nInchaço com vermelhidão e calor // Dor, coceira, possível pus ou secreção.\n");
            printf("// Infecção bacteriana, inflamação aguda, alergia, reação a picada de inseto.\n");
            printf("// Limpeza com água e sabão, aplicar antisséptico, evitar coçar.\n");
            printf("// Procurar médico se houver febre, aumento rápido do inchaço ou sinais de infecção.\n");
            continua();
            break;

        case 0:
            printf("\nSem registro de inchaço específico.\n");
            continua();
            break;

        default:
            printf("Valor inválido! Tente de 1 a 8 novamente!");
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