# Gustavo Domenech de Souza - Turma M1

# Most Profit Assigning Work
Você tem n empregos e m trabalhadores. Você recebe três matrizes: dificuldade, lucro e trabalhador, onde:

dificuldade[i] e lucro[i] são a dificuldade e o lucro do i-ésimo trabalho, e trabalhador[j] é a habilidade do j-ésimo trabalhador (ou seja, o j-ésimo trabalhador só pode completar um trabalho com dificuldade no máximo trabalhador[j]).
Cada trabalhador pode ser designado no máximo para um trabalho, mas um trabalho pode ser concluído várias vezes.

Por exemplo, se três trabalhadores tentarem o mesmo trabalho que paga $ 1, o lucro total será de $ 3. Se um trabalhador não puder concluir nenhum trabalho, seu lucro será de $ 0.
Retorne o lucro máximo que podemos obter após atribuir os trabalhadores aos trabalhos.

# Casos Testados:
difficulty = [2,4,6,8,10], profit = [10,20,30,40,50], worker = [4,5,6,7]

difficulty = [85,47,57], profit = [24,66,99], worker = [40,25,25]

difficulty = [2,4,6,8,10], profit = [10,20,30,40,50], worker = [4,5,6,11]

# Problemas em Aula
Estava com problemas pra fazer o cálculo exato, eu estava pegando o trabalho mais díficil que o trabalhador conseguia fazer, mas nem sempre ele era o que dava mais lucro,
meu código também esta dando Time Limit no último teste.
