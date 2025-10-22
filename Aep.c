#include <stdio.h>
#include<locale.h>
void menu1();
void causas();
void continua();
int decisao=0;
float temperatura;
int decisao1;
int main() {

    setlocale(LC_ALL, "Portuguese");
    do {
        printf(" \n =======Informe os Sintomas abaixo======= \n");
        printf("1.febre \n");
        printf("2.Lesoes \n");
        printf("3.dor no corpo \n");
        printf("4.inchaco \n");
        printf("5.Dificuldade Respiratorias \n");
        printf("6 Nauseas \n");
        printf("7.Fadiga \n");
        printf("8.Tontura \n");
        printf("9.Mau estar \n");
        printf("10.Sair\n");
        printf("/////informe uma opcao/////\n");
        scanf("%d",&decisao);
        if (decisao != 10) {
            menu1();
        }
    }while (decisao != 10);
    return 0;
}

    void menu1() {
    setlocale(LC_ALL, "Portuguese");
    switch (decisao) {
        case 1:
            printf("informe sua temperatura \n");
            scanf("%f",&temperatura);

            if (temperatura >=37 && temperatura < 39 ) {
                printf("\n=====Informe sintomas que voce esta tendo juntamente a sua febre=====\n");
                printf("1.Mal estar geral\n");
                printf("2.Fadiga e cansaso\n");
                printf("3.Dor de cabeca\n");
                printf("4.Arrepios\n");
                printf("5.Aumento da frequencia cardiaca\n");
                printf("6.Suor e Frio\n");
                printf("7.Suldorese\n");
                printf("8.Perda de apetite\n");
                printf("9.Vermelidao no rosto\n");
                printf("=====Se seu caso nao se encaixa nos sintomas acima digite 0 =====\n");
                printf("/////informe uma opcao///// \n");
                scanf("%d", &decisao1);

            }else if (temperatura >=39){
                printf("\n ===== GRAVISSIMO FEBRE ACIMA DE 39C PROCURE UM MEDICO IMEDIATAMENTE =====\n");
                printf("\n -----Orientacoes Basicas-----\n");
                printf("\n Busque atendimento médico imediato sempre que uma febre estiver acima de 39°C, \n especialmente se persistir ou vier acompanhada de dor intensa, convulsões, confusão mental, vômitos, manchas vermelhas, falta de ar, \n dificuldade para acordar ou rigidez na nuca. \n");
                printf("\n Em casa, mantenha-se hidratado e em repouso.");
                printf("\n Use apenas antitérmicos comuns (paracetamol ou dipirona) segundo orientação, evitando automedicação excessiva.");
                printf("\n Evite banhos frios/gelados, pois podem causar queda rápida da pressão.");
                printf("\n Não se automedique com antibióticos ou corticoides.");
                printf("\n=====Procure medico imediatamente=====\n");
                continua();
            }


            if (decisao1 == 1) {
                causas();
                printf("\n Gripe ou resfriado comum // Dor de garganta, tosse, dor no corpo, coriza \n // Repouso, hidratacao, antitermico como paracetamol ou dipirona\n");
                printf("\n Dengue (fase inicial) // Dor atras dos olhos, manchas vermelhas, dor muscular intensa, fraqueza \n // Hidratacao intensa, evitar AAS e ibuprofeno, procurar medico se piorar \n");
                printf("\n Covid‑19 // Tosse seca, falta de ar, perda de olfato - paladar, fadiga \n // Isolamento, hidratacao e monitorar respiracao\n");
                printf("\n Infeccao de garganta (amigdalite/faringite) // Dor para engolir, vermelhidao na garganta, ínguas no pescoco \n //  Gargarejos com agua morna e sal, analgesico leve, avaliação medica se persistir\n");
                printf("\n Exaustao, estresse ou ansiedade // Tremores, calor interno, insonia, palpitacao \n // Descanso, respiracao profunda, evitar cafeina, observar melhora\n");
                continua();
            }

            if (decisao1 == 2) {
                causas();
                printf("\n Gripe ou resfriado comum // Dor de garganta, dor no corpo, tosse, dor de cabeça, coriza \n // Repouso, hidratação, antitérmico (paracetamol/dipirona) \n");
                printf("\n Dengue (fase inicial) // Dor muscular intensa, fraqueza, manchas vermelhas, dor atrás dos olhos \n // Hidratação intensa, evitar AAS/ibuprofeno, buscar muito médico se sinais de alarme\n");
                printf("\n Covid-19 // Tosse seca, dor de cabeça, falta de ar, perda de olfato/paladar \n // Isolamento, monitorar sintomas, hidratação \n");
                printf("\n Mononucleose ou outras viroses // Dor de garganta, inchaço dos gânglios, dor no corpo, sudorese \n // Repouso, hidratação, evitar esforço \n");
                printf("\n Doenças bacterianas (amigdalite/pneumonia) // Dor para engolir, tosse, dor torácica, sinais respiratórios \n // Procurar avaliação médica");
                printf("\n Doenças autoimunes // Dor nas articulações, vermelhidão, perda de peso, sintomas digestivos \n // Procurar reumatologista, exames específico \n");
                printf("\n Estresse, ansiedade ou exaustão // Palpitação, insônia, irritabilidade \n // Descanso, técnicas de relaxamento, evitar cafeína \n");
                continua();

            }

            if (decisao1 == 3) {
                causas();
                printf("\n Gripe ou resfriado comum // Dor de garganta, dor no corpo, tosse, dor de cabeça, coriza \n // Repouso, hidratação, antitérmico (paracetamol/dipirona) \n");
                printf("\n Dengue (fase inicial) // Dor muscular intensa, fraqueza, manchas vermelhas, dor atrás dos olhos \n // Hidratação intensa, evitar AAS/ibuprofeno, buscar muito médico se sinais de alarme\n");
                printf("\n Covid-19 // Tosse seca, dor de cabeça, falta de ar, perda de olfato/paladar \n // Isolamento, monitorar sintomas, hidratação \n");
                printf("\n Sinusite // Dor ou pressão facial, congestão nasal, secreção espessa, cansaço \n // Analgésico, inalação, hidratação; procurar médico se não melhorar");
                printf("\n Meningite (grave) // Febre alta, dor de cabeça intensa, rigidez na nuca, vômitos, apatia \n // Procurar atendimento médico urgente\n");
                printf("\n Desidratação // Tontura, fadiga, confusão mental, boca seca \n // Beber água, repouso, evitar esforço \n");
                continua();
            }

            if (decisao2 == 4) {
                causas();
                printf("\n Infecção viral ou bacteriana // Calafrios, suores, mal-estar, dor muscular, fadiga \n // Repouso, hidratação, antitérmico (paracetamol ou dipirona); procurar médico se persistir \n");
                printf("\n Desidratação // Tontura, boca seca, queda de pressão, fraqueza \n // Ingerir bastante água e reidratar-se com soro ou bebidas isotônicas \n");
                printf("\n Estresse, ansiedade ou fadiga // Tremores, suor frio, respiração acelerada \n // Respirar fundo, sentar e descansar; evitar cafeína e esforços \n");
                printf("\n Doenças cardíacas (taquiarritmias) // Palpitações, dor no peito, falta de ar, tontura \n // Procurar atendimento médico urgente, especialmente se o pulso for irregular \n");
                printf("\n Infecções graves (sepse) // Febre alta, tremores, confusão mental, queda de pressão, fraqueza extrema \n // Atendimento hospitalar imediato \n");
                printf("\n Doenças endócrinas (hipertireoidismo) // Suor excessivo, perda de peso, irritabilidade, mãos trêmulas \n // Consulta médica e exames hormonais \n");
                continua();
            }
            break;
    }
}

    void causas () {
    setlocale(LC_ALL, "Portuguese");
    printf("\n Causa - doenca provavel // Sintomas adicionais comuns \n //   O que fazer inicialmente");
}

    void continua() {
    int stop;
    printf("\n=====DIGITE 1 PARA CONTINUAR=====\n");
    scanf("%d",&stop);
}