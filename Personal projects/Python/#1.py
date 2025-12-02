f = open("lista.txt", 'w')
f.write("Lapte")
f.close()

f = open("lista.txt", 'r')
print(f.read())
f.close()

f = open("lista.txt", 'a')
f.write("Paine"+ "\n")
f.write("Oua" +"\n")
f.close()

import os
if os.path.exists("lista.txt") == True:
    print("fisierul exista")
else:
    print("fisierul nu exista")

f = open("tabla.txt", 'w')
for i in range(10):
    for j in range(10):
        f.write(str(i) + "x" + str(j) + "=" + str(i*j)+ "\n")
f.close()

f = open("linii.txt" , 'w')
for i in range(100):
    f.write(str(i)+ "\n")
f.close()

f = open("squares.txt", 'w')
for i in range(1,50):
    f.write(str(i**2) + "\n")



