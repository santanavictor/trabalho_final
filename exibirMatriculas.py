import pandas as pd

filename = input ("Nome do arquivo onde estão as matrículas: ")

data = pd.read_csv (filename)

data.set_option ('max_rows',none)

print (data)

