import pandas as pd

filename = input ("Nome do arquivo onde estão as matrículas: ")

data = pd.read_csv ("tabela.csv")

name = input ("Nome do Aluno que deseja achar?: ")

busca = data[["Nome"] == name]

print (busca)
