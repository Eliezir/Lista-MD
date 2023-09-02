# Lista-MD


1. Escrever um programa que determina se um dado número inteiro é primo ou não.

        ENTRADA:

        * 1 linha contendo o valores do num primo
        
        SAÍDA: 
        * Determina se o número é ou não primo

        #EXEMPLO

        ENTRADA: 
        7

        SAÍDA:
        O número 7 não é Primo
   
2. Escrever um programa para listar números primos sequencialmente. Você deve
otimizar o programa para que ele liste o maior número possível de primos em 60
segundos.
        
        SAÍDA: 
        * Valor máximo de números primos dados num intervalo de 60 SEGUNDOS

        #EXEMPLO

        SAÍDA:
        75000000
   
3. Escrever um programa para decompor um determinado número inteiro em seus
fatores primos.

        ENTRADA:

        * 1 linha contendo o valor do número a ser decomposto
        
        SAÍDA: 
        * Passo a passo da decomposição do número em seus fatores primos

        #EXEMPLO

        ENTRADA: 
        660

        SAÍDA:
        660 / 2 = 330
        330 / 2 = 165
        165 / 3 = 55
        55 / 5 = 11
        11 / 11 = 1


4. Escrever um programa para determinar o mdc e o mmc de dois inteiros com base
em seus fatores primos.

         ENTRADA:

        * 1 linha contendo os valores de a e b separadas por 1 espaço 
        
        SAÍDA: 
        * MDC E MMC do número com base em seus fatores primos
   
        #EXEMPLO

        ENTRADA: 
        60 6

        SAÍDA:
        MDC: 6
        MMC: 60
        
5. Escrever um programa para determinar o mdc de dois números com base no Al-
goritmo de Euclides.

        ENTRADA:

        * 1 linha contendo os valores de a e b separadas por 1 espaço 
        
        SAÍDA: 
        * MDC dos dois números com base no algarismo de Euclides
   
        #EXEMPLO

        ENTRADA: 
        500 10

        SAÍDA:
        MDS(500, 10) = 10



6. Escrever um programa para encontrar os coeficientes s e t da combinação linear
mdc(a, b) = s · a + t · b.

        ENTRADA:

        * 1 linha contendo os valores de a e b separadas por 1 espaço 
        
        SAÍDA: 
        *Combinação linear do mdc(a,b), seguido pelos valores de s e t 

        #EXEMPLO

        ENTRADA: 
        11 70

        SAÍDA:
        mdc(70, 11) = (3) . 70 + (-19) . 11
        s = -19 | t = 3

7. Escrever um programa para encontrar o inverso de a mod b.

        ENTRADA:

        *1 linha contendo os valores de a e m separadas por 1 espaço 
        
        SAÍDA: 
        *Valor(es) do inverso de a

        #EXEMPLO

        ENTRADA: 
        3 7

        SAÍDA:
        A congruência possui 1 solução(ões) entre 0 e m
        a^-1 = 5

8. Escrever um programa para encontrar a solução de uma congruência do tipo ax ≡
b mod m.

        ENTRADA:

        *1 linha contendo os valores de a, b e m separadas por 1 espaço 
        
        SAÍDA: 
        *Valor(es) de X que satisfaça a  congruência (Caso possível)

        #EXEMPLO

        ENTRADA: 
        33 38 280

        SAÍDA:
        A congruência possui 1 solução(ões)
        X[1] = 86


9. Escrever um programa para encontrar a solução única de três congruências usando
o Teorema Chinês do Resto. (Lembre-se de verificar se os módulos são coprimos).

        ENTRADA:

        *3 linhas contendo os valores de r e m separadas por 1 espaço 
        
        SAÍDA: 
        *Valor da solução única

        #EXEMPLO

        ENTRADA: 
        2 3
        4 5
        6 7

        SAÍDA:
        ## Solução: 104
        




10. **Generalize o programa da questão anterior para funcionar com n congruências ao
invés de somente 3, onde n será dado pelo usuário.**

        ENTRADA:

        *Quantidade das n congruências (0 < n <= 100) 
        *n linhas com os valores b e m separados por um espaço 

        SAÍDA: 
        *Valor de X que satisfaça as congruências (Se esse X existir)

        #EXEMPLO 

        ENTRADA: 
        3 
        2 3 
        4 5 
        6 7

        SAÍDA:
        X = 104

        
