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
void menu_inchaco();
void menu_dificuldades_respiratorias();
void menu_nausea();
void menu_pressao();
void menu_tontura();
void menu_mau_estar();
void causas();
void continua();
void limpar_buffer_entrada();
void limpa_tela();

int main()  {
    // Leitura de Caracteres Especiais no Windows
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
        setlocale(LC_ALL, ".UF8");
    // Leitura de Caracteres especiais em Linux/MacOS
    #else
        setlocale(LC_ALL, "Portuguese");
    #endif

    // Variável para armazenar a opção do menu
    int decisao=0;

    // Loop principal do programa
    do {
        limpa_tela();

        // Exibe menu de sintomas principais
        printf(" \n =======Informe os Sintomas abaixo======= \n");
        printf("1.Febre \n");
        printf("2.Lesões \n");
        printf("3.Dor no corpo \n");
        printf("4.Inchaço \n");
        printf("5.Dificuldade Respiratórias \n");
        printf("6.Naúseas \n");
        printf("7.Pressão \n");
        printf("8.Tontura \n");
        printf("9.Mau estar \n");
        printf("10.Sair\n");
        printf("=====Informe uma Opção=====1\n");
        printf("Opção: ");

        // Lê a opção do usuário
        if (scanf("%d", &decisao) != 1) {
            decisao = -1;
        }

        limpa_tela();
        limpar_buffer_entrada();

        // Chama a função correspondente ao sintoma selecionado
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
                menu_inchaco();
                break;
            case 5:
                menu_dificuldades_respiratorias();
                break;
            case 6:
                menu_nausea();
                break;
            case 7:
                menu_pressao();
                break;
            case 8:
                menu_tontura();
                break;
            case 9:
                menu_mau_estar();
                break;
            case 10:
                printf("Encerrando a operação... ");
                break;
            default:
                printf("Opção Inválida! Tente um número de 1 a 10\n");
                continua();
                break;
        }
    } while (decisao != 10);
    return 0;
}

void menu_febre() {

    // Variáveis para armazenar temperatura e decisão do usuário
    float temperatura;
    int decisao_temperatura = 0;

    printf("Informe sua temperatura \n");
    scanf("%f",&temperatura);

    // Verifica se a febre é moderada
    if (temperatura >=37 && temperatura < 39 ) {
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
        printf("===== Se não se encaixa em nenhum, digite 0 =====\n");
        printf("Opção:");
        scanf("%d", &decisao_temperatura);

        // Fornece informações sobre possíveis causas baseado na seleção
        switch (decisao_temperatura) {
            case 1:
                causas();
                printf("\n Gripe ou resfriado comum // Dor de garganta, tosse, dor no corpo, coriza \n // Repouso, hidratacao, antitermico como paracetamol ou dipirona\n");
                printf("\n Dengue (fase inicial) // Dor atras dos olhos, manchas vermelhas, dor muscular intensa, fraqueza \n // Hidratacao intensa, evitar AAS e ibuprofeno, procurar medico se piorar \n");
                printf("\n Covid-19 // Tosse seca, falta de ar, perda de olfato - paladar, fadiga \n // Isolamento, hidratacao e monitorar respiracao\n");
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
             case 5:
        		causas();
        		printf("\n Doenças renais // Inchaço, fadiga, alterações urinárias \n // Busca por avaliação médica e tratamento específico\n");
        		printf("\n Problemas hepáticos // Icterícia, dor abdominal, cansaço \n // Atendimento médico e exames complementares \n");
        		continua();
        		break;        		
        	case 6:
        		causas();
        		printf("\n Distúrbios gastrointestinais // Náusea, vômitos, dor abdominal \n // Hidratação, dieta leve, avaliação médica se necessário \n");
        		printf("\n Intoxicação alimentar // Vômitos, diarreia, cólicas \n // Repouso, hidratação adequada \n");
        		continua();
        		break;        		
        	case 7:
        		causas();
       			printf("\n Reação alérgica // Erupções cutâneas, coceira, inchaço \n // Antialérgicos, evitar alérgenos, procurar atendimento se agravamento \n");
        		printf("\n Infecção generalizada // Febre alta, mal-estar intenso \n // Atendimento urgente \n");
        		continua();
        		break;        		
        	case 8:
        		causas();
        		printf("\n Condições neurológicas // Cefaleia intensa, confusão, convulsões \n // Procure ajuda médica imediata \n");
        		continua();
       			break;
       		case 9:
        		causas();
        		printf("\n Emergências clínicas // Dor no peito, dificuldade respiratória grave \n // Atendimento médico imediato \n");
        		continua();
        		break;
            case 0:
                printf("\nSem registro de sintoma específico.\n");
                printf("\nMantenha acompanhamento médico.\n");
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
    } else if (temperatura < 35){
        printf("\n===== TEMPERATURA MUITO BAIXA (Hipotermia) =====\n");
        printf("Procure atendimento médico de urgência imediatamente!\n");
        printf("Mantenha-se aquecido, evite movimentar-se excessivamente\n");
        printf("Se estiver em casa, vá para um local quente e cubra-se com cobertores.\n");
        printf("Não tente aquecer rapidamente com água quente ou fontes de calor direto.\n");
        continua();
    } else {
        printf("\n ========== TEMPERATURA NORMAL =========== \n");
        printf("\n Continue se cuidando \n");
        continua();
    }
}

void menu_lesao() {
    // Variável para armazenar tipo de lesão
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

    // Fornece informações sobre cuidados conforme tipo de lesão
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
    // Variável para armazenar tipo de dor
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

    // Fornece informações sobre possíveis causas conforme tipo de dor
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
            continua();
            break;
    }
}

void menu_inchaco(){
    // Variável para armazenar tipo de inchaço
    int tipo_inchaco = 0;

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

    // Fornece informações sobre possíveis causas conforme tipo de inchaço
    if (scanf("%d", &tipo_inchaco) != 1) {
        tipo_inchaco = -1;
        limpar_buffer_entrada();
    }

    switch (tipo_inchaco) {
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
            printf("Valor inválido! Tente de 1 a 8 novamente!\n");
            continua();
            break;
    }
}

void menu_dificuldades_respiratorias(){

    // Variável para armazenar tipo de dificuldade respiratória
    int tipo_resp = 0;

    printf("\n===== Informe o Tipo de Dificuldade ao respirar =====\n");
    printf("1. Chiado no peito\n");
    printf("2. Dispneia progressiva\n");
    printf("3. Febre alta\n");
    printf("4. Dor no corpo\n");
    printf("5. Sensação de sufocamento\n");
    printf("6. Falta de ar ao deitar\n");
    printf("7. Fadiga e cansaço\n");
    printf("8. Falta súbita de ar\n");
    printf("9. Dificuldade respiratória aguda\n");
    printf("===== Se não se encaixa em nenhum, digite 0 =====\n");
    printf("Opção: ");

    // Fornece informações sobre possíveis causas conforme tipo de dificuldade respiratória
    scanf("%d", &tipo_resp);
    switch (tipo_resp) {
        case 1:
            causas();
            printf("\n \n Asma // Tosse, aperto no peito, dificuldade respiratória \n // Uso de medicamentos prescritos, evitar gatilhos, procurar socorro em crise. \n");
            printf("\n // A asma é uma doença pulmonar crônica caracterizada pela inflamação e estreitamento das vias aéreas, o que dificulta \n // a passagem do ar.");
            continua();
            break;
        case 2:
            causas();
            printf("\n \n Doença Pulmonar Obstrutiva Crônica (DPOC) \n // Tosse com catarro, fadiga, infecções respiratórias \n // Parar de fumar, tratamento médico especializado. \n");
            printf("\n // A Doença Pulmonar Obstrutiva Crônica (DPOC) é uma condição pulmonar progressiva e irreversível que causa obstrução das vias aéreas, \n // dificultando a respiração.");
            continua();
            break;
        case 3:
            causas();
            printf("\n \n Pneumonia // Tosse produtiva, dor torácica, fadiga \n // Consulta médica urgente, uso de antibióticos se indicado. \n");
            printf("\n // A pneumonia é uma infecção nos pulmões que provoca inflamação dos alvéolos, os pequenos sacos de ar, dificultando a respiração e causando \n // sintomas variados.");
            continua();
            break;
        case 4:
            causas();
            printf("\n \n Gripe // Febre, tosse, coriza, fadiga \n // Repouso, hidratação, antitérmicos. \n");
            printf("\n // A gripe é uma infecção viral causada pelo vírus Influenza, que afeta o sistema respiratório.");
            continua();
            break;
        case 5:
            causas();
            printf("\n \n Ansiedade / Crise de Pânico // Palpitações, sudorese, tremores \n // Técnicas de respiração, apoio psicológico, medicação se necessário. \n");
            printf("\n // A ansiedade e a crise de pânico são transtornos relacionados, mas com características distintas.");
            causas();
            break;
        case 6:
            causas();
            printf("\n \n Insuficiência Cardíaca // Inchaço, fadiga, tosse seca \n // Avaliação cardiológica e tratamento adequado. \n");
            printf("\n // A insuficiência cardíaca é uma condição em que o coração não consegue bombear sangue de maneira eficiente para atender às necessidades do corpo.");
            continua();
            break;
        case 7:
            causas();
            printf("\n \n Anemia // Palidez, tontura, falta de ar ao esforço \n // Identificação e correção da causa da anemia. \n");
            printf("\n // A anemia é uma condição caracterizada pela redução da quantidade ou qualidade dos glóbulos vermelhos no sangue, comprometendo o transporte de \n // oxigênio para os tecidos do corpo.");
            continua();
            break;
        case 8:
            causas();
            printf("\n \n Embolia Pulmonar // Dor no peito, tosse com sangue \n // Atendimento médico urgente. \n");
            printf("\n // A embolia pulmonar é uma obstrução súbita de uma artéria pulmonar causada por um coágulo de sangue que geralmente se origina em veias profundas \n // das pernas (trombose venosa profunda).");
            continua();
            break;
        case 9:
            causas();
            printf("\n \n Obstrução das vias aéreas // Tosse, engasgo, ruídos respiratórios \n // Atendimento emergencial imediato. \n");
            printf("\n // A obstrução das vias aéreas é a interrupção parcial ou total do fluxo de ar pelas vias respiratórias, que pode ocorrer em qualquer parte do sistema \n // respiratório, desde o nariz até os pulmões.");
            continua();
            break;
        case 0:
            printf("\nSem registro de dificuldade respitatória específico.\n");
            continua();
    default:
            printf("Valor inválido! Tente de 1 a 9 novamente!");
            continua();
            break;
    }
}

void menu_nausea(){
    // Variável para armazenar tipo de náusea
    int tipo_nausea = 0;

    printf("\n===== Informe o Tipo de Nausea =====\n");
    printf("1. Náusea e vômito\n");
    printf("2. Náusea após refeições\n");
    printf("3. Náusea antes ou durante a dor\n");
    printf("4. Náusea matinal\n");
    printf("5. Náusea súbita após refeição\n");
    printf("6. Náusea relacionada ao emocional\n");
    printf("7. Náusea com vertigem\n");
    printf("8. Náusea como efeito colateral\n");
    printf("9. Náusea persistente\n");
    printf("===== Se não se encaixa em nenhum, digite 0 =====\n");
    printf("Opção: ");
    scanf("%d", &tipo_nausea);

    // Fornece informações sobre possíveis causas conforme tipo de náusea
    switch (tipo_nausea) {
        case 1:
            causas();
            printf("\n \n Gastroenterite (infecção intestinal) // Diarreia, dor abdominal, febre \n // Hidratação oral, repouso, evitar alimentos pesados, procurar médico se piorar. \n");
            printf("\n // A gastroenterite, também conhecida como infecção intestinal, é uma inflamação do estômago e intestinos geralmente causada por vírus, bactérias ou parasitas.");
            continua();
            break;
        case 2:
            causas();
            printf("\n \n Refluxo gastroesofágico \n // Azia, queimação, dor no peito \n // Evitar alimentos gordurosos, elevar a cabeceira, uso de antiácidos sob orientação. \n");
            printf("\n // O refluxo gastroesofágico (DRGE) é uma condição crônica caracterizada pelo retorno do conteúdo ácido do estômago para o esôfago, gerando sintomas \n // incômodos e podendo causar complicações.");
            break;
        case 3:
            causas();
            printf("\n \n Enxaqueca // Dor de cabeça unilateral, sensibilidade à luz e som \n // Repouso em ambiente escuro, hidratação, analgésicos prescritos. \n");
            printf("\n // A enxaqueca é uma doença neurológica que se manifesta principalmente por uma dor de cabeça intensa, latejante (pulsátil) e geralmente unilateral, \n // que pode durar de 4 a 72 horas.");
            continua();
            break;
        case 4:
            causas();
            printf("\n \n Gravidez // Vômitos, cansaço, aumento da frequência urinária \n // Alimentação fracionada, evitar cheiros fortes, hidratação. \n");
            printf("\n // Os sintomas mais comuns da gravidez geralmente surgem nas primeiras semanas após a concepção e podem variar entre as mulheres.");
            continua();
            break;
        case 5:
            causas();
            printf("\n \n Intoxicação alimentar // Vômitos, diarreia, cólica abdominal \n // Hidratação, repouso, evitar alimentos sólidos por algumas horas. \n");
            printf("\n // A intoxicação alimentar ocorre após o consumo de alimentos ou bebidas contaminadas por bactérias, vírus, parasitas ou toxinas.");
            causas();
            break;
        case 6:
            causas();
            printf("\n \n Ansiedade / Estresse // Palpitações, sudorese, tremores, desconforto abdominal \n // Técnicas de relaxamento, apoio psicológico. \n");
            printf("\n // Ansiedade e estresse são respostas normais do corpo a situações desafiadoras, mas quando excessivos podem causar sintomas físicos, emocionais e \n // comportamentais que prejudicam a qualidade de vida.");
            continua();
            break;
        case 7:
            causas();
            printf("\n \n Distúrbio vestibular (labirintite) // Tontura, desequilíbrio, zumbido \n // Repouso, evitar movimentos bruscos, procurar avaliação otorrinolaringológica. \n");
            printf("\n // O distúrbio vestibular, conhecido popularmente como labirintite, é uma condição que afeta o sistema vestibular do ouvido interno, responsável pelo equilíbrio e orientação espacial.");
            continua();
            break;
        case 8:
            causas();
            printf("\n \n Uso de medicamentos // Fadiga, dor abdominal, alteração no apetite \n // Consultar médico para ajuste ou troca de medicação. \n");
            printf("\n // O uso de certos medicamentos pode causar dificuldade respiratória como efeito colateral. Isso pode ocorrer por diferentes mecanismos, incluindo reações alérgicas, \n // inflamação pulmonar, fibrose, broncoespasmo ou toxicidade direta nos pulmões.");
            continua();
            break;
        case 9:
            causas();
            printf("\n \n Doenças do fígado ou vesícula // Dor abdominal no quadrante superior direito, icterícia \n // Avaliação médica urgente, exames complementares. \n");
            printf("\n // Doenças do fígado e da vesícula podem ser causadas por diversos fatores, incluindo infecções, inflamações, problemas metabólicos, cálculos biliares e efeitos de medicamentos.");
            continua();
            break;
        case 0:
            printf("\nSem registro de naúsea específica.\n");
            continua();
    default:
            printf("Valor inválido! Tente de 1 a 9 novamente!");
            continua();
        break;
    }
}

void menu_pressao() {
    // Variável para armazenar tipos de pressão e a decisão dos sintomas
    int pas = 0, pad = 0;
    int decisao_pressao;

    printf("Informe a sua Pressão Arterial Sistólica\n");
    scanf("%d", &pas);
    printf("Informe a sua Pressão Arterial Diastólica\n");
    scanf("%d", &pad);

    if (pas < 90 || pad < 60) {
        printf("\nSua pressão está BAIXA - HIPOTENSÃO\n");
        printf("=====Informe sintomas que voce esta tendo juntamente a sua pressão baixa=====\n");
        printf("1.Tontura ou desmaio iminente\n");
        printf("2.Fadiga extrema\n");
        printf("3.Falta de ar\n");
        printf("4.Visão escura ou manchas\n");
        printf("5.Boca e pele seca\n");
        printf("6.Dor de cabeça ou confusão mental\n");
        printf("7.Frio e tremores\n");
        printf("8.Dor no peito\n");
        printf("===== Se não se encaixa em nenhum, digite 0 =====\n");
        printf("Opção:");
        scanf("%d", &decisao_pressao);

        // Fornece informações possíveis causas de pressão baixa ou alta
        switch (decisao_pressao) {
            case 1:
                causas();
                printf("\n Desidratação severa // Boca seca, urina escura, fadiga extrema \n // Beber água ou soro fisiológico lentamente, procurar médico\n");
                printf("\n Queda rápida de pressão // Levantamento rápido da posição deitada, desmaio iminente \n // Deitar imediatamente, levantar lentamente, evitar esforço\n");
                printf("\n Hemorragia interna // Palidez, suor frio, confusão, fraqueza progressiva \n // Procurar atendimento médico urgente - AMBULÂNCIA\n");
                printf("\n Choque séptico ou infecção grave // Febre alta anterior, confusão, pulso rápido, pele fria \n // Atendimento hospitalar imediato\n");
                continua();
                break;
            case 2:
                causas();
                printf("\n Anemia // Palidez, dificuldade de concentração, unhas frágeis, falta de ar \n // Aumentar ingestão de ferro, exames laboratoriais urgentes\n");
                printf("\n Subnutrição ou falta de vitaminas // Perda de peso, fraqueza muscular, queda de cabelo \n // Aumentar aporte nutricional, suplementação orientada por médico\n");
                printf("\n Depressão ou problemas psicológicos // Desânimo, falta de interesse, isolamento \n // Apoio psicológico, terapia, avaliação médica\n");
                printf("\n Hipotireoidismo // Ganho de peso, queda de cabelo, pele seca, depressão \n // Exames hormonais, reposição de hormônio tireoidiano\n");
                continua();
                break;
            case 3:
                causas();
                printf("\n Anemia moderada a grave // Palidez, taquicardia, fadiga ao fazer esforço \n // Exames de sangue urgentes, suplementação de ferro\n");
                printf("\n Problema pulmonar ou cardíaco // Falta de ar ao fazer esforço, desconforto no peito \n // Avaliação cardiológica e pulmonar urgente\n");
                printf("\n Hiperventilação ou pânico // Respiração rápida e superficial, tremores, suor \n // Respirar lentamente, técnicas de calma, descanso\n");
                continua();
                break;
            case 4:
                causas();
                printf("\n Queda muito rápida de pressão // Risco de desmaio, confusão, tontura severa \n // Deitar com pernas elevadas, procurar médico urgentemente\n");
                printf("\n Hipoglicemia // Tremores, suor frio, dificuldade de concentração, visão nublada \n // Consumir açúcar ou carboidrato simples, procurar médico se persistir\n");
                printf("\n Sangramento interno // Palidez, suor frio, confusão, progressão dos sintomas \n // AMBULÂNCIA imediatamente\n");
                continua();
                break;
            case 5:
                causas();
                printf("\n Desidratação severa // Urina escura, boca pegajosa, fadiga extrema \n // Beber água em pequenas quantidades frequentemente, soro fisiológico\n");
                printf("\n Diarréia ou vômito prolongado // Perda excessiva de líquidos e eletrólitos \n // Reidratação oral com soro, procurar médico se piorar\n");
                printf("\n Falta de sal (hiponatremia) // Confusão, câimbras, fraqueza \n // Ingerir água com sal, alimentos salgados controladamente\n");
                continua();
                break;
            case 6:
                causas();
                printf("\n Hipoglicemia severa // Confusão mental, dificuldade de fala, sudorese \n // Consumir açúcar imediatamente, procurar médico\n");
                printf("\n Infecção ou sepse // Febre anterior, confusão, desorienta ção, tremores \n // Atendimento hospitalar imediato\n");
                printf("\n Intoxicação ou overdose // Confusão, pupilas anormais, dificuldade respiratória \n // AMBULÂNCIA - Intoxicações são emergências\n");
                continua();
                break;
            case 7:
                causas();
                printf("\n Choque hipovolêmico // Sangramento, palidez, suor frio, confusão \n // AMBULÂNCIA imediatamente, procurar causa do sangramento\n");
                printf("\n Hipotermia // Tremores progressivos, confusão, letargia \n // Aquecer gradualmente, não aquecer muito rápido, procurar médico\n");
                printf("\n Infecção generalizada (sepse) // Febre anterior, confusão, pulso rápido, tremores \n // Atendimento hospitalar urgente\n");
                continua();
                break;
            case 8:
                causas();
                printf("\n Infarto ou isquemia cardíaca // Dor no peito irradiada, falta de ar, náusea, suor frio \n // AMBULÂNCIA imediatamente - provável emergência coronariana\n");
                printf("\n Embolia pulmonar // Dor no peito ao respirar, falta de ar súbita, tosse \n // AMBULÂNCIA imediatamente\n");
                printf("\n Tamponamento cardíaco // Dor no peito, falta de ar, desconforto ao deitar \n // Atendimento de emergência urgente\n");
                continua();
                break;
            case 0:
                printf("\nApesar da pressão baixa, sem sintomas adicionais reportados.\n");
                printf("\nOrientações para hipotensão:\n");
                printf("- Aumente a ingestão de água e sal gradualmente\n");
                printf("- Evite mudanças de posição rápidas\n");
                printf("- Descanse adequadamente\n");
                printf("- Procure um médico para avaliação completa\n");
                continua();
                break;
            default:
                printf("Valor inválido! Tente de 1 a 8 novamente!");
        }
    } else if (pas < 129 && pad < 84){
        printf("\nSua pressão está normal!\n");
        continua();
    } else if (pas < 139 && pad < 89){
        printf("\nSua pressão está ELEVADA\n");
        printf("=====Informe sintomas que voce esta tendo juntamente a sua pressão elevada=====\n");
        printf("1.Dor de cabeça\n");
        printf("2.Tontura ou vertigem\n");
        printf("3.Falta de ar\n");
        printf("4.Visão embaçada\n");
        printf("5.Ansiedade ou nervosismo\n");
        printf("6.Rubor facial\n");
        printf("7.Palpitações\n");
        printf("8.Dor no peito leve\n");
        printf("===== Se não se encaixa em nenhum, digite 0 =====\n");
        printf("Opção:");
        scanf("%d", &decisao_pressao);

        switch (decisao_pressao) {
            case 1:
                causas();
                printf("\n Estresse ou ansiedade // Nervosismo, insônia, irritabilidade, dor muscular \n // Técnicas de relaxamento, reduzir cafeína, exercícios regularmente\n");
                printf("\n Aumento de sódio na alimentação // Inchaço, retenção de líquidos, aumento de peso \n // Reduzir sal, aumentar consumo de potássio, hidratação adequada\n");
                printf("\n Falta de atividade física // Sedentarismo, ganho de peso, fraqueza \n // Iniciar exercícios moderados, caminhadas diárias\n");
                continua();
                break;
            case 2:
                causas();
                printf("\n Desidratação // Boca seca, fadiga, urina escura \n // Beber mais água, evitar diuréticos\n");
                printf("\n Movimento rápido ao levantar // Tontura ao trocar de posição bruscamente \n // Levantar lentamente, esperar alguns segundos antes de se mover\n");
                printf("\n Anemia // Palidez, fadiga, falta de ar, unhas frágeis \n // Aumentar ingestão de ferro, procurar médico para exames\n");
                continua();
                break;
            case 3:
                causas();
                printf("\n Excesso de peso ou sedentarismo // Fadiga ao fazer esforço, cansaço rápido \n // Iniciar atividade física gradualmente, perder peso controlado\n");
                printf("\n Problema respiratório // Dificuldade ao respirar, asma, bronquite \n // Procurar avaliação médica, evitar alérgenos\n");
                printf("\n Ansiedade ou pânico // Respiração rápida, tremores, suor \n // Técnicas de respiração profunda, descanso\n");
                continua();
                break;
            case 4:
                causas();
                printf("\n Ressecamento ocular // Incômodo visual, lacrimejação, vermelhidão \n // Piscar mais frequentemente, usar colírio se necessário\n");
                printf("\n Problemas oftalmológicos // Dificuldade de foco, dor nos olhos \n // Consulta com oftalmologista\n");
                continua();
                break;
            case 5:
                causas();
                printf("\n Transtorno de ansiedade // Insônia, irritabilidade, palpitações, suor frio \n // Técnicas de relaxamento, meditação, procurar psicólogo\n");
                printf("\n Excesso de cafeína // Tremores, aceleração cardíaca, insônia \n // Reduzir consumo de café, chá e bebidas energéticas\n");
                printf("\n Estresse crônico // Fadiga, dores musculares, dificuldade de concentração \n // Atividades relaxantes, yoga, exercício físico\n");
                continua();
                break;
            case 6:
                causas();
                printf("\n Vasodilatação // Sensação de calor no rosto, vermelhidão \n // Evitar alimentos apimentados, álcool, temperaturas altas\n");
                printf("\n Alergias ou inflamação de pele // Coceira, descamação, sensibilidade \n // Limpeza suave com água morna, hidratar a pele\n");
                continua();
                break;
            case 7:
                causas();
                printf("\n Arritmia ou taquicardia // Coração acelerado, desconforto no peito, tontura \n // Reduzir cafeína, procurar cardiologista\n");
                printf("\n Ansiedade ou medo // Respiração rápida, suor, tremores \n // Técnicas de calma, descanso, evitar estresse\n");
                printf("\n Falta de condicionamento físico // Aceleração cardíaca ao fazer esforço \n // Aumentar atividade física gradualmente\n");
                continua();
                break;
            case 8:
                causas();
                printf("\n Inflamação ou infecção // Dor torácica, tosse, falta de ar \n // Repouso, anti-inflamatório se recomendado, procurar médico\n");
                printf("\n Ansiedade ou pânico // Dor no peito, respiração acelerada, suor frio \n // Técnicas de respiração, descanso, apoio psicológico\n");
                continua();
                break;
            case 0:
                printf("\nSem sintomas reportados. Mantenha acompanhamento médico.\n");
                continua();
                break;
            default:
                printf("Valor inválido! Tente de 1 a 8 novamente!");
        }
    } else if (pas< 159 && pad >= 90) {
        printf("\nVoce tem HIPERTENSÃO ESTÁGIO 1\n");
        printf("=====Informe sintomas que voce esta tendo juntamente a sua hipertensão=====\n");
        printf("1.Dor de cabeça persistente\n");
        printf("2.Tontura frequente\n");
        printf("3.Dor no peito\n");
        printf("4.Falta de ar ao fazer esforço\n");
        printf("5.Fadiga extrema\n");
        printf("6.Visão turva ou embaçada\n");
        printf("7.Zumbido nos ouvidos\n");
        printf("8.Hemorragia nasal\n");
        printf("===== Se não se encaixa em nenhum, digite 0 =====\n");
        printf("Opção:");
        scanf("%d", &decisao_pressao);

        switch (decisao_pressao) {
            case 1:
                causas();
                printf("\n Hipertensão descontrolada // Pressão arterial elevada mantida, risco de acidente vascular \n // Procurar médico urgentemente para avaliar medicação e hábitos\n");
                printf("\n Problemas renais ou endócrinos // Inchaço, ganho de peso, fadiga \n // Exames laboratoriais, consulta com especialista\n");
                printf("\n Stress emocional // Tensão muscular, insônia, irritabilidade \n // Técnicas de relaxamento, meditação, terapia\n");
                continua();
                break;
            case 2:
                causas();
                printf("\n Desidratação ou falta de nutrientes // Fraqueza, fadiga, boca seca \n // Aumentar ingestão de água e alimentos nutritivos\n");
                printf("\n Medicação anti-hipertensiva não ajustada // Hipotensão relativa, tontura ao levantar \n // Procurar médico para avaliar dosagem\n");
                printf("\n Problemas no labirinto ou ouvido interno // Tontura ao virar a cabeça, náusea \n // Consulta com otorrinolaringologista\n");
                continua();
                break;
            case 3:
                causas();
                printf("\n Sobrecarga do coração // Falta de ar, desconforto prolongado, fadiga \n // Repouso, procurar atendimento médico urgente\n");
                printf("\n Espasmo coronariano // Dor no peito ao fazer esforço, alívio com repouso \n // Procurar cardiologista imediatamente\n");
                printf("\n Ansiedade ou pânico // Dor tipo aperto, respiração acelerada, suor \n // Descanso, técnicas de respiração, apoio psicológico\n");
                continua();
                break;
            case 4:
                causas();
                printf("\n Insuficiência coronariana // Dor ou pressão no peito ao fazer esforço, fadiga \n // Procurar avaliação cardiológica urgente\n");
                printf("\n Condicionamento físico inadequado // Cansaço rápido ao fazer atividade \n // Aumentar atividade física gradualmente, exercícios de cardio\n");
                printf("\n Problemas respiratórios // Asma, bronquite, deficiência de oxigenação \n // Avaliação pulmonar, tratamento adequado\n");
                continua();
                break;
            case 5:
                causas();
                printf("\n Falta de controle medicamentoso // Pressão descontrolada causa exaustão \n // Procurar médico para avaliar medicação\n");
                printf("\n Anemia ou falta de ferro // Palidez, dificuldade de concentração, unhas frágeis \n // Aumentar ingestão de ferro, exames laboratoriais\n");
                printf("\n Distúrbio do sono // Insônia, má qualidade de sono, cansaço diurno \n // Higiene do sono, exercício regular, apoio médico\n");
                continua();
                break;
            case 6:
                causas();
                printf("\n Retinopatia hipertensiva // Alterações na visão, necessidade de óculos \n // Procurar oftalmologista e cardiologista urgentemente\n");
                printf("\n Problemas oftalmológicos // Miopia, astigmatismo, presbiopia \n // Consulta com oftalmologista para verificar refração\n");
                continua();
                break;
            case 7:
                causas();
                printf("\n Hipertensão acusando efeitos no ouvido // Zumbido constante relacionado a pressão \n // Procurar otorrinolaringologista e cardiologista\n");
                printf("\n Inflamação de ouvido ou acúmulo de cera // Incômodo auditivo, sensação de plenitude \n // Limpeza adequada do ouvido, consulta com especialista\n");
                continua();
                break;
            case 8:
                causas();
                printf("\n Pressão arterial muito elevada // Ruptura de pequenos vasos nasais \n // Procurar médico urgentemente para controlar pressão\n");
                printf("\n Trauma ou ressecamento nasal // Incômodo, coceira, sangramentos ocasionais \n // Umidificar ambiente, evitar trauma nasal\n");
                continua();
                break;
            case 0:
                printf("\nSem sintomas reportados. Mantenha acompanhamento médico regular.\n");
                continua();
                break;
            default:
                printf("Valor inválido! Tente de 1 a 8 novamente!");
        }
    } else if (pas >= 179 || pad >= 109) {
        printf("\n===== CRÍTICO! HIPERTENSÃO ESTÁGIO 2 - PROCURE UM MÉDICO IMEDIATAMENTE!!! =====\n");
        printf("\n -----Orientações Básicas-----\n");
        printf("\n Busque atendimento médico imediato sempre que a pressão arterial estiver acima de 140/90 mmHg, \n especialmente se persistir ou vier acompanhada de dor intensa no peito, falta de ar grave, confusão mental, vômitos, \n dificuldade de fala, fraqueza em um lado do corpo, dor de cabeça severa ou alterações visuais. \n");
        printf("\n Em casa, mantenha-se em repouso e evite esforço físico.\n");
        printf("\n Deite-se em local fresco e bem ventilado.\n");
        printf("\n Evite movimentos bruscos e situações estressantes.\n");
        printf("\n Beba água em pequenas quantidades se conseguir.\n");
        printf("\n Não se automedique. Aguarde orientação médica.\n");
        printf("\n=====Procure o Pronto Socorro ou Ambulância Imediatamente=====\n");
        continua();
    }
}

void menu_tontura() {

    // Variável para armazenar tipo de tontura
    int tipo_tontura = 0;

    printf("\n===== Tipos de Tontura =====\n");
    printf("1. Tontura ao levantar rápido (postural)\n");
    printf("2. Tontura com sensação de desmaio iminente\n");
    printf("3. Tontura giratória (vertigem)\n");
    printf("4. Tontura associada a enjoo\n");
    printf("5. Tontura com fraqueza\n");
    printf("6. Tontura persistente por dias\n");
    printf("7. Tontura acompanhada de sintomas neurológicos (visão dupla, fala arrastada)\n");
    printf("===== Se não se encaixa em nenhum, digite 0 =====\n");
    printf("Opção: ");

    // Fornece informações sobre possíveis causas conforme tipo de tontura
    if (scanf("%d", &tipo_tontura) != 1) {
        tipo_tontura = 0;
        limpar_buffer_entrada();
    }

    switch (tipo_tontura) {
        case 1:
            causas();
            printf("\nHipotensão postural // Tontura ao levantar da cama ou se abaixar rapidamente\n// Sentar imediatamente, levantar devagar, hidratar\n");
            continua();
            break;
        case 2:
            causas();
            printf("\nHipoglicemia // Suor frio, tremores, fome\n// Ingerir alimentos doces se não for diabético\n");
            printf("\nDesidratação // Sede intensa, boca seca, pouca urina\n// Beber água e repousar\n");
            continua();
            break;
        case 3:
            causas();
            printf("\nVertigem (labirintite) // Sensação giratória, dificuldade de andar, náusea\n// Sentar, evitar movimentos bruscos; procurar otorrino se persistir\n");
            continua();
            break;
        case 4:
            causas();
            printf("\nInfecção viral ou virose // Febre, mal estar, enjoo\n// Repouso, hidratar, observar evolução\n");
            printf("\nLabirintite // Zumbido, perda de equilíbrio\n// Marcar consulta, evitar dirigir\n");
            continua();
            break;
        case 5:
            causas();
            printf("\nAnemia // Palidez, fraqueza, cansaço\n// Procurar avaliação médica, alimentar-se bem\n");
            printf("\nProblemas cardíacos // Palpitação, dor no peito\n// Buscar atendimento médico urgente se sintomas graves\n");
            continua();
            break;
        case 6:
            causas();
            printf("\nDistúrbios do labirinto ou infecções // Tontura prolongada, náusea, falta de equilíbrio\n// Procurar avaliação médica\n");
            continua();
            break;
        case 7:
            causas();
            printf("\nAcidente Vascular Cerebral (AVC) // Dificuldade de falar, perda de força, visão dupla\n// Atendimento médico emergencial imediado\n");
            continua();
            break;
        case 0:
            printf("\nSem registro de tontura específica.\n");
            continua();
            break;
        default:
            printf("Valor inválido! Tente de 1 a 7 novamente!");
    }
}

void menu_mau_estar() {
    // Variável para armazenar tipo de mau estar
    int tipo_mauestar = 0;

    printf("\n===== Tipos de Mau Estar =====\n");
    printf("1. Sensação de desmaio/tontura\n");
    printf("2. Náusea ou vontade de vomitar\n");
    printf("3. Fraqueza súbita\n");
    printf("4. Sudorese fria\n");
    printf("5. Palpitação\n");
    printf("6. Mal estar associado a dor no peito\n");
    printf("7. Mal estar sem causa aparente\n");
    printf("===== Se não se encaixa em nenhum, digite 0 =====\n");
    printf("Opção: ");

    if (scanf("%d", &tipo_mauestar) != 1) {
        tipo_mauestar = 0;
        limpar_buffer_entrada();
    }

    // Fornece informações sobre possíveis causas conforme tipo de mau estar
    switch (tipo_mauestar) {
        case 1:
            causas();
            printf("\nHipotensão (pressão baixa) // Tontura ao levantar rápido, palidez, fraqueza\n// Sentar, elevar as pernas, hidratar com água\n");
            printf("\nHipoglicemia // Suor frio, tremor, fome, fraqueza\n// Comer algo doce se a pessoa não for diabética\n");
            printf("\nDesidratação // Boca seca, pouca urina, cansaço, pele seca\n// Beber água, repousar\n");
            continua();
            break;
        case 2:
            causas();
            printf("\nGastrite ou problemas digestivos // Queimação, dor abdominal, náuseas após comer\n// Alimentação leve, evitar frituras, hidratar\n");
            printf("\nInfecção viral // Febre, mal estar, enjoo\n// Hidratar, repousar, observar quadro\n");
            printf("\nGravidez (em mulheres) // Náuseas pela manhã, atraso menstrual\n// Procurar orientação médica\n");
            continua();
            break;
        case 3:
            causas();
            printf("\nAnemia // Cansaço extremo, palidez, falta de ar\n// Procurar avaliação médica\n");
            printf("\nInfecção aguda // Febre, prostração, dores\n// Repouso, hidratar, monitorar sintomas\n");
            printf("\nCrise de ansiedade // Falta de ar, sensação de morte, sudorese\n// Técnicas de respiração, ambiente calmo\n");
            continua();
            break;
        case 4:
            causas();
            printf("\nHipoglicemia ou estresse // Suor frio, tremores, irritação\n// Ingerir carboidratos, descansar\n");
            printf("\nEmergência cardíaca // Suor frio associado a dor torácica\n// Procurar atendimento médico urgente\n");
            continua();
            break;
        case 5:
            causas();
            printf("\nArritmia cardíaca // Palpitações, sensação de pulso acelerado ou irregular\n// Sentar e repousar, procurar atendimento se persistir\n");
            printf("\nAnsiedade // Palpitação associada a agitação, insônia, medo\n// Técnicas de relaxamento, respiração profunda\n");
            continua();
            break;
        case 6:
            causas();
            printf("\nInfarto agudo do miocárdio // Mal estar intenso, dor no peito, irradiação para o braço, suor frio\n// Atendimento médico emergencial imediato\n");
            printf("\nCrise de angina // Dor em pressão ao esforço, melhora ao repousar\n// Parar atividades e buscar atendimento\n");
            continua();
            break;
        case 7:
            causas();
            printf("\nCausas diversas (estresse, virose, má alimentação) // Mal estar sem sintomas localizados\n// Repouso, hidratação, observar a evolução dos sintomas\n");
            continua();
            break;
        case 0:
            printf("\nSem registro de mal estar específico.\n");
            continua();
            break;
        default:
            printf("Valor inválido! Tente de 1 a 7 novamente!");
    }
}

// Exibe o cabeçalho de informações sobre causas
void causas() {
    printf("\n Causa - doenca provavel // Sintomas adicionais comuns \n // O que fazer inicialmente");
}

// Aguarda o usuário pressionar Enter para continuar
void continua(){
    limpar_buffer_entrada();
    printf("\nPressione Enter para continuar... \n");
    getchar();
}

// Limpa a tela do console
void limpa_tela(){
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Limpa o buffer de entrada do programa
void limpar_buffer_entrada() {
    int c;

    // Lê e descarta caracteres do buffer de entrada
    // até encontrar um '\n' (Enter) ou o fim do arquivo (EOF).
    while ((c = getchar()) != '\n' && c != EOF);
}
