import pandas as pd

filename = input ("O nome do arquivo onde estão as matrículas: ")

data = pd.read_csv (filename)

print ("Opções de filtragem: \n")
print ("A. Ano de Ingresso\n")
print ("B. Ano de Nascimento do aluno\n")
print ("C. Período do Aluno\n")

opcao = input ("Qual tipo de filtragem deseja realizar?: ")

if opcao == 'A':
    ano = input ("Qual o ano de ingresso a ser usado para a filtragem:: ")
    ano = int(ano)

    filtro_ano = data[["Ano de Ingresso"] == ano]
    print (filtro_ano)

if opcao == 'B':
    birth = input ("Qual ano de nascimento usado para a filtragem?: ")
    birth = int(birth)

    filtro_birth = data[["Ano de Nascimento"] == birth]
    print (filtro_birth)

if opcao == 'C':
    periodo = input ("Qual periodo usado para a filtragem?: ")
    periodo = int(periodo)

    filtro_periodo = data[["Periodo"] == periodo]




