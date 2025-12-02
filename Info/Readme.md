# Tipuri de date structurate
## Date
- Cifre
- Litere
- Șir de caractere
## Tip de date
### Mulțime de valori și o mulțime de operații care pot fi efectuate cu valorile respective

### În cazul în care se fac operații de copiere, mutare, etc, se fac nu doar la nivelul de caracter, dar și la nivel de cuvânt, propoziție, paragraf, ș.a.m.d

### Literele sunt reprezentate sub tip de date char iar cuvintele sunt structurate tipul de date string

### Tipurile de date simple pot fi structurate în tipuri de date structurate

### Deși aceste tabele reprezintă date structurate formate din int/float este prezent tipul de date tablou unidimensional/bidimensional
### În calculator aceste tabele se reprezintă cu un anum tip special de date structurate denumite tablouri.
#### Pentru tabloul unidimensional am folosit un singur indice, pentru bidimensional se folosesc doi indici, ș.a.m.d
#### Datele formate din agregarea a unor date simple se numesc date structurate
### Alte date structurate sunt: Tablou, String, Struct, Set, Fișier, Pointer

## Tablouri unidimensionale 
- Vectori/Arrays
## Rețineți
- Numărarea într-un tablou începe de la 0
- Un tablou este un șir de elemente int/float
- Tabloul poate conține elemente de același tip[]()

### Într-un tablou pot fi păstrate mai multe date cu același nume, și el poate fi parcurs de mai multe ori folosind instrucțiuni ciclice

### Pentru a citi tabloul, a atribui valori elementelor dintr-un tablou, a scrie elementel folosim elemente ciclice
### Tablourile lineare în C/C++. Tablourile reprezintă o succesiune indexată de date, de același tip, indexarea poate fi făcută cu un singur indice, în cazul dat tabloul se va numi vector, cu doi indici se va numi tablou bidimensional (matrice), cu trei indici, tabloul se numește tridimensional

### Dacă am declarat n <= 20, rezultă că trebuie să declarăm cu un element mai mult. 
### Citirea, scrierea, parcurgerea, are loc în felul următor

### Algoritm de parcurgere a tabloului. Fie ca avem un tablou int A[100] cu elementele A[0]...A[n-1]
### Pentru inversarea unui tablou unidimensional
' for(i = 0; i <= (n-1)/2; i++) {swap/mem(A[i],A[n-i-1])}' 

### Sortarea tablourilor
A[i] <= A[i+1], pentru orice i =0, n-2 Ordine crescătoare\
A[i] < A[i+1], pentru orice i =0, n-2 Ordine strict crescătoare\
A[i] >= A[i+1], pentru orice i =0, n-2 Ordine descătoare\
A[i] > A[i+1], pentru orice i =0, n-2 Ordine strict descătoare

### Algoritmi 
#### Pentru verificarea dacă ordinea este crescătoare
i = 0 
while(i = n-2 && A[i] >= A[i+1]) i++
if (i == n-1) 

### Sortare
#### Metode de sortare
- Selection
- Insertion
- The bubble method
- Quick Sort
- Merge Sort
- Heap Sort

#### Selectia
Selectia este o metoda de sortate care parcurge secventa de elemente nesortate, determina elementul minim/maxim si il aduce la inceputul secventei\
`for (i=0; i<= n-2; i++)` \
`   for(j=i+1; j<n-1; j++)` \
`       if(A[j]<A[i] swap(A[i], A[j]))`
##### Selectia V2
`
#include <iostream>
using namespace std;
int main()
{

int arr[100], i,n,k,minn,j;\
cin>>n;\
for(i=0; i <= n; i++)\
{\
cin>>arr[i];\
}\
for(i=0; i<= n-2; i++)\
{\
minn = arr[i];\
k = i;\
        for(j=i+1;j<=n-1; j++)\
                {\
                if(arr[j]<minn)\
                        {\
                                minn=arr[j], k=j;\
                        }\
                }\
if (k!=i)\
        {\
        swap(arr[i],arr[k]);\
        }\
}
for(i=0; i<=n; i++)
{
cout<<arr[i]; `
               
#### Insertia
Insertia opereaza cu elemente deja aranjate si un element din cele nearanjate, compara si gaseste pozitia si il insereza
    for ( i=1;  i<=n-1; i++) \
                                       {   x=A[i];   j=I -1;\
                                           while (j>=0  &&  x<A[j]) {  A\[j+1]= A[j];   j- - }\
                                          A[j+1]=x;\
                                      }


## Tablouri bidimeansionale 
Se declara ca arr[x][y] unde x este nr. de linii si y este nr. de coloane \
Datele sunt de acelasi tip, indexate pe linii si coloane 



# Informatia

## Cantitatea de informatie
Fie ca o sursa emite un mesaj
Cantitatea de informatie ce se contine intr-un mesaj se calcualeaza sub forma `i = loga(n)` unde `a` e o constanta (baza) si `n` este numarul de mesaje. `a` depinde de unitatea etalon aleasa pentru masurarea informatiei. Cantitatea de informatie care se contine intr-un mesaj cu doare 2 mesaje posible se numeste `bit`
 
kb = 2^10 b\
mb = 2^20 b\
gb = 2^30 b\

B = 8*b\
KB = 2^10 B\
MB = 2^20 B\
GB = 2^30 B\
TB = 2^40 B\
PB = 2^50 B\
EB = 2^60 B\

b = bit\
B = byte

Daca `n` = 1 avem 2 mesaje\
Daca `n` = 2 avem 4 mesaje\
nr. mesaj = 2 ^ n


## Imaginea
Rastru  
Discretizarea in spatiu - descompunerea img in microzone \
Cantitatea se calculeaza dupa formula `i = mx * my * log2(n)` (pentru monocrom) sau `i = 3 * mx * my * log2(n)` si ` n = nr. de nuante`

## Filmul
`V = f * I * T` (bits)\
Unde `f` e frecventa cadrelor pe sec. (25 FPS la TV/24 FPS la Cinema)\
`I` - cantitatea de info in bits.\
`T` - timpul in sec.

### Prob 1
`T` = 2,5h\
`f` = 25 FPS\
`I` = 3xy (x = 2048 y = 1024)\
`n` = 512\
`V` - ? 

### Prob 2 
`I` = 3 col (x = 2048, y = 4096)\
`f` = 25 FPS\
`n` = 512\
`T` = 2.5h



# Sisteme de numerare
## Pozitionale
### Sist. zecimal
`0,1,2,3,4,5,6,7,8,9,0`
### Sist. Binar
`0,1`
## Hexazecimal
`0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F`
(Resturile de la n%16)
## Nepozitinale
### Sist. roman
`I, V, X, L, C, M`

## Conversia numerelor
### Nr.zecimale
Pentru a converti un nr. zecimal in alte baze, convertim partea intreaga la baza data si dupa inmultim partea zecimala cu baza, notam numarul intreg, repetam pana cand numarul se apropie de 0.


### Prob 1
381.0625 = 10111101

## Conversia directa din baza 2 in baza 4 8 16 si invers
011/110/011/011/110.011/010/001/111
Base4 = 2313033.122033
Base8 = 36336.3217






