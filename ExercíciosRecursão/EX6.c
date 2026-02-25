#include <stdio.h>

/* Torre de Han´oi Circular (Regra Direcional)
Considere trˆes hastes dispostas em formato circular, denominadas A, B
e C. Um conjunto de n discos de tamanhos distintos encontra-se inicialmente empilhado na haste A, em ordem crescente do maior (na base) para
o menor (no topo). O objetivo ´e transferir todos os discos da haste A para
a haste C.
Neste problema, al´em das regras cl´assicas da Torre de Han´oi, existe uma
restri¸c˜ao adicional chamada Regra Direcional. De acordo com essa
regra, um disco s´o pode ser movido no sentido hor´ario entre as hastes,
obedecendo a sequˆencia:
A → B → C → A → · · ·
Ou seja:
• da haste A, s´o ´e permitido mover discos para B;
• da haste B, s´o ´e permitido mover discos para C;
• da haste C, s´o ´e permitido mover discos para A.
Al´em disso, valem as regras tradicionais:
• Apenas um disco pode ser movido por vez.
• Um disco s´o pode ser movido se estiver no topo de uma das hastes.
• Nenhum disco pode ser colocado sobre um disco menor.
1
Com base no problema, fa¸ca o que se pede abaixo:
1. Reescreva a estrat´egia de solu¸c˜ao do problema original em termos recursivos, considerando a restri¸c˜ao direcional.
2. Determine o n´umero m´ınimo de movimentos necess´ario para resolver o
problema.
3. Implemente uma fun¸c˜ao recursiva que mostre na tela cada movimento
realizado, respeitando o sentido hor´ario obrigat´orio.*/
