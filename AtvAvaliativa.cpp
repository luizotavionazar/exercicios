#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <iomanip>
using namespace std;
void linha(){//Apresenta uma "linha"
    cout<<"---------------------------------------------------------------------------------"<<endl;}
void linhad(){//Apresenta uma "linha dupla"
    cout<<"================================================================================="<<endl;}
void spc(){//Salta uma linha
    cout<<endl;}
void clstel(int sis,int& param1){//Limpa a tela
    if (param1==2){
        if (sis==1){
        system("cls");}
        else if (sis==2){
            system("clear");}}}
void config(int sis,int& param1){//Menu Parâmetros do Sistema
    spc();
    linhad();
    cout<<"                            Parâmetros do Sistema"<<endl;
    linhad();
    cout<<"Parâmetros para configuração do sistema:"<<endl;
    spc();
    cout<<" 1- Habilitar histórico? 1-Sim/2-Não: ";
    cin>>param1;
    clstel(sis,param1);}
void menu(){//Menu de opções
    spc();
    linhad();
    cout<<"                              Atividade Avaliativa 1"<<endl;
    cout<<"                         Algoritmos e Estruturas de Dados"<<endl;
    cout<<"                             Luiz Otávio Nazar, ADS 2"<<endl;
    linhad();
    cout<<"Escolha de 1 a 20 qual atividade será apresentada para execução:"<<endl;
    spc();
    cout<<" 1- Questão  1   |   11- Questão 11   |   "<<endl;
    cout<<" 2- Questão  2   |   12- Questão 12   |   "<<endl;
    cout<<" 3- Questão  3   |   13- Questão 13   |   "<<endl;
    cout<<" 4- Questão  4   |   14- Questão 14   |   "<<endl;
    cout<<" 5- Questão  5   |   15- Questão 15   |   21- Configurações"<<endl;
    cout<<" 6- Questão  6   |   16- Questão 16   |   22- Sair"<<endl;
    cout<<" 7- Questão  7   |   17- Questão 17   |   "<<endl;
    cout<<" 8- Questão  8   |   18- Questão 18   |   "<<endl;
    cout<<" 9- Questão  9   |   19- Questão 19   |   "<<endl;
    cout<<"10- Questão 10   |   20- Questão 20   |   "<<endl;
    spc();
    linha();
    spc();
    cout<<"Informe a opção desejada: ";}
void atv1(int& sis,int& param1){
//Programa calculador de média ponderada
//Recebe 3 notas, calcula e mostra a média ponderada e o conceito de um aluno
//Autor: Luiz Otávio Nazar, 06-10-2023
    char conce;
    int nota1,nota2,nota3;
    double media;
    spc();
    linhad();
    cout<<"                          Ponderação de Notas do Luiz"<<endl;
    linhad();
    cout<<"Informe 3 notas para que eu calcule a média e o conceito do aluno:"<<endl;
    linha();
    cout<<" Trabalho de laboratório...: ";
    cin>>nota1;
    cout<<" Avaliação semestral.......: ";
    cin>>nota2;
    cout<<" Exame final...............: ";
    cin>>nota3;
    media=((nota1*2)+(nota2*3)+(nota3*5))/(10);//Calcula a media
    if (media>=8&&media<=10){//Define o conceito
        conce='A';}
        else if (media>=7&&media<=7.9){
            conce='B';}
        else if (media>=6&&media<=6.9){
            conce='C';}
        else if (media>=5&&media<=5.9){
            conce='D';}
        else if (media>=0&&media<=4.9){
            conce='E';}
    linha();
    cout<<"Resultado:"<<endl;
    cout<<"     Média do aluno........: "<<media<<endl;
    cout<<"     Conceito obtido.......: "<<conce<<endl;
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu...";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv2(int& sis,int& param1){
//Programa decompor um valor em Notas e Moedas
//Recebe um valor e realiza sua decomposição em Notas e Moedas
//Autor: Luiz Otávio Nazar, 08-10-2023
    double valor;
    double notas[]={100.0,50.0,20.0,10.0,5.0,2.0};// Define os valores das notas e moedas
    double moedas[]={1.0,0.5,0.25,0.1,0.05,0.01};
    spc();
    linhad();
    cout<<"                  Calculadora de decomposição de grana do Luiz"<<endl;
    linhad();
    cout<<"Informe um valor para que seja realizada a decomposição em notas e moedas:"<<endl;
    linha();
    cout<<"  Valor...: R$";
    cin>>valor;
    linha();
    cout<<"Resultado:"<<endl;
    cout<<"     Quantidade de Notas:"<<endl;
    for (int i=0;i<6;i++){// Calcula as notas
        int quantnotas=valor/notas[i];
        valor-=quantnotas*notas[i];
        cout<<"       "<<quantnotas<<" nota(s) de R$"<<fixed<<setprecision(2)<<notas[i]<<endl;}
    cout<<"     Quantidade de Moedas:"<<endl;
    for (int i=0;i<6;i++){// Calcula as moedas
        int quantmoedas=valor/moedas[i];
        valor-=quantmoedas*moedas[i];
        cout<<"       "<<quantmoedas<<" moeda(s) de R$"<<fixed<<setprecision(2)<<moedas[i]<<endl;}
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu...";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv3(int& sis,int& param1){
//Programa calculador do Salário a Receber
//Recebe o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras e calcula o salário a receber
//Autor: Luiz Otávio Nazar, 07-10-2023
    int htraba,hextra;
    double vlsalmi,vlrsalre,vlsalba,vlsalbr,vlrtraba,vlrhextra,vlhtraba,vlhextra,imposto;
    spc();
    linhad();
    cout<<"                     Calculadora de Salário a Receber do Luiz"<<endl;
    linhad();
    cout<<"Informe as informações solicitadas para que o cálculo seja realizado:"<<endl;
    linha();
    cout<<" Valor do salário mínimo...............................: R$";
    cin>>vlsalmi;
    cout<<" Número de horas trabalhadas pelo funcionário..........: ";
    cin>>htraba;
    cout<<" Número de horas extras trabalhadas pelo funcionário...: ";
    cin>>hextra;
    vlhtraba=vlsalmi/8;
    vlhextra=vlsalmi/4;
    vlsalba=htraba*vlhtraba;
    vlrhextra=hextra*vlhextra;
    vlsalbr=vlsalba+vlrhextra;
    imposto=vlsalbr*0.085;
    vlrsalre=vlsalbr-imposto;
    linha();
    cout<<"Resultado:"<<endl;
    cout<<"     O valor total do Salário a Receber é de: R$"<<vlrsalre<<endl;
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv4(int& sis,int& param1){
//Programa calculador de Dosagem e gotagem
//Recebe a idade e peso de uma pessoa e calcula a dosagem de um certo medicamento
//Autor: Luiz Otávio Nazar, 07-10-2023
    int idade,dose,gotas;
    float peso;
    spc();
    linhad();
    cout<<"                         Calculadora de Dosagem do Luiz"<<endl;
    linhad();
    cout<<"Informe a idade e peso da pessoa para que a o cálculo seja realizado:"<<endl;
    linha();
    cout<<" Idade.................................: ";
    cin>>idade;
    cout<<" Peso..................................: ";
    cin>>peso;
    if (idade>=12){//Define a dosagem para pessoas acima de 12 anos
        if (peso>=60){
            dose=1000;}
        else {
            dose=875;}}
    else {//Define a dosagem para pessoas abaixo de 12 anos
        if (peso>30){
            dose=750;}
        else if (peso > 24){
            dose=500;}
        else if (peso > 16){
            dose=375;}
        else if (peso > 9){
            dose=250;}
        else if (peso > 5){
            dose=125;}}
    gotas=(dose/500)*20;
    linha();
    cout<<"Resultado:"<<endl;
    cout<<"     A dose do medicamento será de.....: "<<dose<<" mg"<<endl;
    cout<<"     O que corresponde a um total de...: "<<gotas<<" gotas"<<endl;
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv5(int& sis,int& param1){
//Programa calculador do custo total de uma reforma baseando em informações especificas
//Recebe várias informações sobre a reforma e realiza vários cálculos para encontrar o custo total
//Autor: Luiz Otávio Nazar, 08-10-2023
    spc();
    linhad();
    cout<<"                     Calculadora de Custo da Reforma do Luiz"<<endl;
    linhad();
    cout<<"Informe as informações para realizar o cálculo do custo total da Reforma:"<<endl;
    linha();
    double dimensaoa,dimensaob, dimensaoc,custototal;
    int tipopiso,tipotintaint,tiptintaext;
    cout<<"Informe a dimensao A da sala(em metros)...: ";//Leitura das dimensões da sala
    cin>>dimensaoa;
    cout<<"Informe a dimensao B da sala(em metros)...: ";
    cin>>dimensaob;
    cout<<"Informe a dimensao C da sala(em metros)...: ";
    cin>>dimensaoc;
    spc();
    cout<<"Tipos do piso:"<<endl;//Leitura dos tipos de piso e tintas
    cout<<" Tipo 1 - R$24,00 p/m2"<<endl;
    cout<<" Tipo 2 - R$31,00 p/m2"<<endl;
    cout<<" Tipo 3 - R$55,00 p/m2"<<endl;
    cout<<"Selecione o tipo do piso..................:";
    cin>>tipopiso;
    spc();
    cout<<"Tipo da tinta Interna:"<<endl;
    cout<<" Tipo 1 - R$22,00 p/litro"<<endl;
    cout<<" Tipo 2 - R$47,00 p/litro"<<endl;
    cout<<"Selecione o tipo da tinta interna.........:";
    cin>>tipotintaint;
    spc();
    cout<<"Tipo da tinta Externa:"<<endl;
    cout<<" Tipo 1 - R$22,00 p/litro"<<endl;
    cout<<" Tipo 2 - R$47,00 p/litro"<<endl;
    cout<<"Selecione o tipo da tinta externa.........:";
    cin>>tiptintaext;
    double precopis[]={0,24.00,31.00,55.00};//Tabela de preços
    double precotintaint[]={0,22.00,47.00};
    double precotintaext[]={0,22.00,47.00};
    double areaparint=2*(dimensaoa+dimensaob)*dimensaoc;//Calcula a área das paredes internas e externas
    double areaparext=2*((dimensaoa+dimensaob)*dimensaoc+(dimensaoa*dimensaob));
    double custopis=precopis[tipopiso]*(dimensaoa*dimensaob);//Calcula o custo do piso e tintas
    double custtintaint=precotintaint[tipotintaint]*(areaparint/2);
    double custtintaext=precotintaext[tiptintaext]*(areaparext/2);
    custototal=custopis+custtintaint+custtintaext;//Calcula o custo total do piso e tintas
    linha();
    cout<<"Resultado:"<<endl;
    cout<<"     Custo total da reforma..............: R$ "<<custototal<< endl;
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv6(int& sis,int& param1){
//Programa calculador do Preço do produto
//Recebe o valor do produto e escolhe a opção de pagamento com condições possuindo desconto ou acreścimo
//Autor: Luiz Otávio Nazar, 07-10-2023
    int opcao;
    double vlrprod;
    spc();
    linhad();
    cout<<"                     Calculador de Preço por Condição do Luiz"<<endl;
    linhad();
    cout<<"Informe o valor do produto e a Opção de Pagamento:"<<endl;
    linha();
    cout<<" Valor tabelado do produto...........: R$";
    cin>>vlrprod;
    linha();
    cout<<"Escolha a Opção de pagamento desejada:"<<endl;
    spc();
    cout<<" 1- À vista  |Dinheiro ou  Cheque |10% de Desconto"<<endl;
    cout<<" 2- À vista  |Cartão de  Débito   |7,5% de Desconto"<<endl;
    cout<<" 3- À vista  |Cartão de Crédito   |5% de Desconto"<<endl;
    cout<<" 4- À prazo  |2 Parcelas          |Sem Desconto/Acrécsimo"<<endl;
    cout<<" 5- À prazo  |4 Parcelas          |9,5% de Acréscimo"<<endl;
    spc();
    cout<<"Opção de pagamento...................:";
    cin>>opcao;
    linha();
    if (opcao==1){//Define a opção de pagamento
        vlrprod=vlrprod-(vlrprod*0.10);}
        else if (opcao==2){
            vlrprod=vlrprod-(vlrprod*0.075);}
        else if (opcao==3){
            vlrprod=vlrprod-(vlrprod*0.05);}
        else if (opcao==5){
            vlrprod=vlrprod+(vlrprod*0.095);}
    cout<<"Resultado:"<<endl;
    cout<<"     O valor total do Produto será de: R$"<<vlrprod<<endl;
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv7(int& sis,int& param1){
//Programa calculador do Preço do produto considerando aumento e definidor de classficação
//Recebe o valor do produto, define o percetual de aumento com base no seu valor e define uma classificação
//Autor: Luiz Otávio Nazar, 07-10-2023
    string classi;
    double vlrprod;
    spc();
    linhad();
    cout<<"                   Calculador de Preço e Classificador do Luiz"<<endl;
    linhad();
    cout<<"Informe o valor do produto para que seja calculado o aumento e a classificação:"<<endl;
    linha();
    cout<<" Valor do produto........................: R$";
    cin>>vlrprod;
    if (vlrprod<=50){//Define o percentual do aumento
        vlrprod=vlrprod+(vlrprod*0.05);}
        else if (vlrprod>50&&vlrprod<=100){
            vlrprod=vlrprod+(vlrprod*0.10);}
        else if (vlrprod>100){
            vlrprod=vlrprod+(vlrprod*0.15);}
    if (vlrprod<=80){//Define a classificação do produto
        classi="Barato";}
        else if (vlrprod>80&&vlrprod<=120){
            classi="Normal";}
        else if (vlrprod>120&&vlrprod<=200){
            classi="Caro";}
        else if (vlrprod>200){
            classi="Muito Caro";}
    linha();
    cout<<"Resultado:"<<endl;
    cout<<"     O valor final do Produto será de...: R$"<<vlrprod<<endl;
    cout<<"     A classificação do produto é.......: "<<classi<<endl;
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv8(int& sis,int& param1){
//Programa calculador do MMC entre dois números
//Recebe dois valores e calcula o MMC entre os mesmos
//Autor: Luiz Otávio Nazar, 07-10-2023
    int num1,num2,mmc,mdc;
    spc();
    linhad();
    cout<<"                           Calculador do MMC do Luiz"<<endl;
    linhad();
    cout<<"Informe dois números para que seja calculado o MMC entre os dois:"<<endl;
    linha();
    cout<<"Informe o primeiro número...: ";
    cin>>num1;
    cout<<"Informe o segundo número....: ";
    cin>>num2;
    int a,b,temp;
    a=num1;
    b=num2;
    while (b!=0){
        temp=b;
        b=a%b;
        a=temp;}
    mdc=a;
    mmc=(num1*num2)/mdc;
    linha();
    cout<<"Resultado:"<<endl;
    cout<<"     O MMC entre "<<num1<<" e "<<num2<<" é...: "<<mmc<<endl;
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv9(int& sis,int& param1){
//Programa calculador do MDC entre dois números
//Recebe dois valores e calcula o MDC entre os mesmos
//Autor: Luiz Otávio Nazar, 07-10-2023
    int num1,num2,mdc;
    spc();
    linhad();
    cout<<"                           Calculador do MDC do Luiz"<<endl;
    linhad();
    cout<<"Informe dois números para que seja calculado o MDC entre os dois:"<<endl;
    linha();
    cout<<"Informe o primeiro número...: ";
    cin>>num1;
    cout<<"Informe o segundo número....: ";
    cin>>num2;
    int a,b,temp;
    a=num1;
    b=num2;
    while (b!=0){
        temp=b;
        b=a%b;
        a=temp;}
    mdc=a;
    linha();
    cout<<"Resultado:"<<endl;
    cout<<"     O MDC entre "<<num1<<" e "<<num2<<" é...: "<<mdc<<endl;
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv10(int& sis,int& param1){
//Programa calculador de tempo para crescimento de duas cidades, comparando a sua população
//Calcula o tempo necessário para a cidade A ser maior ou igual a cidade B de acordo com uma taxa definida
//Autor: Luiz Otávio Nazar, 07-10-2023
    int anos,cidade1,cidade2;
    anos=0;
    cidade1=80000;
    cidade2=200000;
    spc();
    linhad();
    cout<<"                Calculadora de tempo para Crescimento de cidadas"<<endl;
    linhad();
    cout<<"Considerando uma taxa de crescimento de 3% para a Cidade A e 1,5% para a Cidade B"<<endl;
    linha();
    while (cidade2>=cidade1){//Calcula o tempo em anos
        cidade1=cidade1+(cidade1*0.03);
        cidade2=cidade2+(cidade2*0.015);
    anos=anos+1;}
    cout<<"Resultado:"<<endl;
    cout<<"     Em "<<anos<<" anos, a cidade A ultrapassará a cidade B!"<<endl;
    cout<<"     População Cidade A...: "<<cidade1<<" habitantes."<<endl;
    cout<<"     População Cidade B...: "<<cidade2<<" habitantes."<<endl;
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv11(int& sis,int& param1){
//Programa calculador de graos
//Calcula o número de graos de trigo na última casa
//Autor: Luiz Otávio Nazar, 07-10-2023
    double graos,control;
    control=1;
    graos=1;
    spc();
    linhad();
    cout<<"                      Calculadora de graos do Luiz"<<endl;
    linhad();
    cout<<"Considerando 64 casas onde o número de graos de trigo na casa dobre a cada casa:"<<endl;
    linha();
    while (control!=64){
        graos=graos*2;
        control=control+1;}
    cout<<"Resultado:"<<endl;
    cout<<"     Na 64º casa terá um Total de ...: "<<graos<<" grãos de trigo!"<<endl;
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv12(int& sis,int& param1){
//Programa calculador de número perfeito
//Recebe um valor e verifica se ele é perfeito a partir da soma de seus divisores
//Autor: Luiz Otávio Nazar, 08-10-2023
    int n;
    int somadiv=0;
    spc();
    linhad();
    cout<<"                     Verificador de número perfeito do Luiz"<<endl;
    linhad();
    cout<<"Informe um número inteiro e positivo para que eu verifique se é perfeito:"<<endl;
    linha();
    cout<<"  Número...: ";
    cin>>n;
    linha();
    cout<<"Resultado:"<<endl;
    for (int i=1;i<=n/2;i++){//Encontra os divisores do número
        if (n%i==0){
            somadiv+=i;}}
    if (somadiv==n){//Verifica se o número é perfeito
        cout<<"     "<<n<<" é um número perfeito."<<endl;}
    else {
        cout<<"     "<<n<<" não é um número perfeito."<<endl;}
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv13(int& sis,int& param1){
//Programa tabuada 1 a 10
//Apresenta a tabuada completa de 1 a 10
//Autor: Luiz Otávio Nazar, 08-10-2023
    spc();
    linhad();
    cout<<"                                Tabuada 1 a 10 do Luiz"<<endl;
    linhad();
    cout<<"Tabuada completa de 1 a 10:"<<endl;
    linha();
    cout<<"Resultado:"<<endl;
    for (int multiplicador=1;multiplicador<=10;multiplicador++){
        cout<<"   Tabuada do "<<multiplicador<<":"<<endl;
        cout<<"     ";
        for (int multiplicando=1;multiplicando<=10;multiplicando++){//Calcula os resultados em looping
            int resultado=multiplicador*multiplicando;
            cout<<""<<multiplicador<<"x"<< multiplicando<<"="<<resultado<<" ";}
        spc();}
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv14(int& sis,int& param1){
//Programa para calcular resultado de uma certa entrevista que ocorreu em Parcatu
//Recebe a resp de 20 entrevistados e calcula os valores totais
//Autor: Luiz Otávio Nazar, 08-10-2023
    int totsim=0,totnao=0;
    int msim=0;
    int hsim=0,hnao=0;
    double porch;
    spc();
    linhad();
    cout<<"                            Entrevista em Paracatu do Luiz"<<endl;
    linhad();
    cout<<"Preencha os dados dos 20 entrevistados para que os calculos sejam realizados:"<<endl;
    linha();
    spc();
    for (int i=0;i<20;i++){//Preenchimento dos dados
        char sexo,resp;
        cout<<(i+1)<<"º Entrevistado:"<<endl;
        cout<<"Sexo (M/F).................: ";
        cin>>sexo;
        cout<<"Gostou do produto? (S/N)...: ";
        cin>>resp;
        if (resp=='S'||resp=='s'){//Abastece as variaveis de acordo com a resposta
            totsim++;
            if (sexo=='F'||sexo=='f'){
                msim++;} 
            else if (sexo=='M'||sexo=='m'){
                hsim++;}}
        else if (resp=='N'||resp=='n') {
            totnao++;
            if (sexo=='M'||sexo=='m'){
                hnao++;}}
        spc();}
    if (hsim+hnao>0){//Calcula a porcentagem de Homens
        porch=(static_cast<double>(hnao)/(hsim+hnao))*100.0;
    linha();
    cout<<"Resultado:"<<endl;//Apresenta os resultados
    cout<<"     Pessoas que responderam SIM.................: " <<totsim<<endl;
    cout<<"     Pessoas que responderam NÃO.................: " <<totnao<<endl;
    cout<<"     Mulheres que responderam SIM................: "<<msim<<endl;
    cout<<"     Porcentagem de homens que responderam NÃO...: "<<porch<<"%"<<endl;}
    else{
        linha();
        cout<<"Resultado:"<<endl;
        cout<<"     Pessoas que responderam SIM.................: " <<totsim<<endl;
        cout<<"     Pessoas que responderam NÃO.................: " <<totnao<<endl;
        cout<<"     Mulheres que responderam SIM................: "<<msim<<endl;
        cout<<"     Nenhum homem respondeu à pesquisa!"<<endl;}
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv15(int& sis,int& param1){
//Programa para calcular o resultado de uma certa pesquisa
//Recebe informações de uma pesquisa e com base nos resultado calcula a quantiades, media e porcentagens especificas
//Autor: Luiz Otávio Nazar, 08-10-2023
    int idade,pesvel,totalpes,pesazul,ruisolhazul;
    double peso,altura,sidademen150,midademen150,porcenazul;
    string corolho,corcab;
    spc();
    linhad();
    cout<<"                      Calculadora de Resultado de Pesquisa do Luiz"<<endl;
    linhad();
    cout<<"Informe as informações solicitadas para que seja realizada a pesquisa:"<<endl;
    linha();
    pesvel=0;
    totalpes=0;
    pesazul=0;
    ruisolhazul=0;
    sidademen150=0;
    while (true){//Inicia a pesquisa
        cout<<"Informe a idade ou 0 para encerrar...................................: ";
        cin>>idade;
        if (idade==0){//Encerra a pesquisa
            break;}
        cout<<"Informe o peso em kg.................................................: ";
        cin>>peso;
        cout<<"Informe a altura em metros...........................................: ";
        cin>>altura;
        cout<<"Informe a cor dos olhos(azul, preto, verde, castanho)................: ";
        cin>>corolho;
        cout<<"Informe a cor dos cabelos(preto, castanho, louro, ruivo).............: ";
        cin>>corcab;
        spc();
        totalpes++;
        if (idade>50&&peso<60){
            pesvel++;}
        if (altura<1.50){
            sidademen150 += idade;}
        if (corolho=="azul"){
            pesazul++;}
        if (corcab=="ruivo"&&corolho!="azul"){
            ruisolhazul++;}}
    midademen150=sidademen150/totalpes;
    porcenazul=(static_cast<double>(pesazul)/totalpes)*100;
    linha();
    cout<<"Resultado:"<<endl;
    cout<<"     Pessoas com idade superior a 50 anos e peso inferior a 60kg.....: "<<pesvel<<endl;
    cout<<"     Média das idades das pessoas com altura inferior a 1,50m........: "<<midademen150<<" anos" << endl;
    cout<<"     Porcentagem de pessoas com olhos azuis entre todas as pessoas...: "<<porcenazul<<"%"<< endl;
    cout<<"     Quantidade de pessoas ruivas e que não possuem olhos azuis......: "<<ruisolhazul<<endl;
    linha();
    spc();
    cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu....";
    getchar();
    getchar();
    clstel(sis,param1);}
void atv16(int& sis,int& param1){
    }
void atv17(int& sis,int& param1){
    }
void atv18(int& sis,int& param1){
    }
void atv19(int& sis,int& param1){
    }
void menuatv20(int&sis,int& param1,int&opcao){
//Menu da Questão 20
    spc();
    linhad();
    cout<<"                      Super calculadora de valores do Luiz"<<endl;
    linhad();
    cout<<"Escolha de 1 a 3 o que deseja calcular:"<<endl;
    spc();
    cout<<" 1- Novo salário      |"<<endl;
    cout<<" 2- Férias"<<"            |   4- Retornar ao Menu Principal"<<endl;;
    cout<<" 3- Décimo terceiro   |"<<endl;
    spc();
    linha();
    spc();
    cout<<"Informe a opção desejada: ";
    cin>>opcao;
    clstel(sis,param1);}
void atv20(int& sis,int& param1){
//Programa para calcular valores do Salário de um funcionário
//Recebe valores para calcular novo salário com aumento, valor das ferias e valor do 13º de um funcionário
//Autor: Luiz Otávio Nazar, 08-10-2023
    int opcao=0;
    do{
        switch (opcao){
        case 0:
            menuatv20(sis,param1,opcao);
            break;
        case 1://Calcula o aumento do Salário de acordo com o valor informado
            spc();
            linhad();
            cout<<"                      Super calculadora de valores do Luiz"<<endl;
            linhad();
            cout<<"Informe o salário do funcionário para que seja calculado o novo valor:"<<endl;
            linha();
            double salf;
            cout<<" Salário atual do funcionário...: R$";
            cin>>salf;
            if (salf<=600){//Determina qual será o aumento
                salf=salf+(salf*0.15);}
                else if (salf>=600&&salf<=1200){
                    salf=salf+(salf*0.1);}
                else if (salf>1200){
                    salf=salf+(salf*0.05);}
            linha();
            cout<<"Resultado:"<<endl;
            cout<<"     O novo salário será de.....: R$"<<salf<<endl;
            linha();
            spc();
            opcao=0;
            cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu da questão....";
            getchar();
            getchar();
            clstel(sis,param1);
            break;
        case 2://Calcula o valor das Ferias de acordo com o Salário informado
            spc();
            linhad();
            cout<<"                      Super calculadora de valores do Luiz"<<endl;
            linhad();
            cout<<"Informe o salário do funcionario para que seja calculado o valor das ferias:"<<endl;
            linha();
            double vlfer;
            cout<<" Salário atual do funcionário.....: R$";
            cin>>salf;
            vlfer=salf+(salf/3);//Calcula o valor das Ferias
            linha();
            cout<<"Resultado:"<<endl;
            cout<<"     O valor das ferias será de...: R$"<<vlfer<<endl;
            linha();
            spc();
            opcao=0;
            cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu da questão....";
            getchar();
            getchar();
            clstel(sis,param1);
            break;
        case 3://Calcula o 13º a partir do Salário e Meses trabalhados informados
            spc();
            linhad();
            cout<<"                      Super calculadora de valores do Luiz"<<endl;
            linhad();
            cout<<"Informe o salário do funcionario para que seja calculado o valor das ferias:"<<endl;
            linha();
            cout<<" Salário atual do funcionário.....: R$";
            cin>>salf;
            int meses;
            double dterc;
            cout<<" Número de meses trabalhados......: ";
            cin>>meses;
            while (meses>12){
                cout<<"O número máximo de meses é 12, tente novamente..."<<endl;
                cout<<" Número de meses trabalhados......: ";
                cin>>meses;}
            dterc=(salf*meses)/12;//Calcula o 13º
            linha();
            cout<<"Resultado:"<<endl;
            cout<<"     O valor do 13º será de......: R$"<<dterc<<endl;
            linha();
            spc();
            opcao=0;
            cout<<"Fim de execução! Tecle 'Enter' para retornar ao Menu da questão....";
            getchar();
            getchar();
            clstel(sis,param1);
            break;
        case 4://Retorna ao Menu Principal
            break;
        default:
            cout<<endl<<"Opção inválida! Tecle 'Enter' e selecione novamente...";
            cin.ignore();
            cin.ignore();
            menuatv20(sis,param1,opcao);
            break;}}
        while (opcao!=4);}
int main(){//Principal
    int param1,opcao,sis;
    param1=2;
    setlocale(LC_ALL,"portuguese");
    //=====Identifica o sistema operacional=====
    #if defined(_WIN32)||defined(_WIN64)
        sis=1;
    #elif defined(__linux__)
        sis=2;
    #endif
    //==========================================
    clstel(sis,param1);
    do {
        menu();
        cin>>opcao;
        switch (opcao){//Direcionamento de opções
        case 1:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv1(sis,param1);
            break;
        case 2:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv2(sis,param1);
            break;
        case 3:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv3(sis,param1);
            break;
        case 4:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv4(sis,param1);
            break;
        case 5:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv5(sis,param1);
            break;
        case 6:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv6(sis,param1);
            break;
        case 7:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv7(sis,param1);
            break;
        case 8:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv8(sis,param1);
            break;
        case 9:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv9(sis,param1);
            break;
        case 10:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv10(sis,param1);
            break;
        case 11:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv11(sis,param1);
            break;
        case 12:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv12(sis,param1);
            break;
        case 13:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv13(sis,param1);
            break;
        case 14:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv14(sis,param1);
            break;
        case 15:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv15(sis,param1);
            break;
        case 16:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv16(sis,param1);
            break;
        case 17:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv17(sis,param1);
            break;
        case 18:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv18(sis,param1);
            break;
        case 19:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv19(sis,param1);
            break;
        case 20:
            clstel(sis,param1);
            cout<<"Iniciando a execução...";
            atv20(sis,param1);
            break;
        case 21:
            clstel(sis,param1);
            config(sis, param1);
            break;
        case 22:
            spc();
            cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
            cout<<"                                 Até a próxima!"<<endl;
            spc();
            break;
        default:
            cout<<endl<<"Opção inválida! Tecle 'Enter' e selecione novamente...";
            cin.ignore();
            cin.ignore();
            clstel(sis,param1);
            break;}
    }while (opcao !=22);}