import csv

print ("Você escolheu a opção de cadastrar novo aluno")
print ("Digite o que se pede")

f = open ('tabela.csv', 'a')
try:
    writer = csv.writer (f)
    nome = input ("Digite o nome do aluno: ")
    dre = input ("Digite o DRE do aluno: ")
    periodo = input ("Digite o periodo do aluno: ")
    writer.writerow ( (nome, dre, periodo) )

finally:
    f.close()

print (open ('tabela.csv', 'r').read ())

input ()

try:
    leitor = csv.reader (f)
    for linha in leitor:
        print (linha)
finally:
    f.close ()
