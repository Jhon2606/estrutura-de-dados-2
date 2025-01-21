// Força Bruta:
// O algoritmo de Força Bruta utiliza dois laços aninhados. 
// O laço externo percorre todas as posições possíveis do texto onde o padrão pode começar, 
// enquanto o laço interno compara cada caractere do padrão com os caracteres correspondentes no texto. 
// Caso ocorra uma correspondência completa, o padrão é encontrado; caso contrário, 
// o laço externo avança para a próxima posição. Apesar de ser simples, o algoritmo pode ser ineficiente, 
// especialmente em casos onde há muitas sobreposições entre o padrão e o texto, já que ele sempre volta ao início 
// do padrão após uma falha. Sua complexidade no pior caso é O(m * n), onde m é o tamanho do padrão e n é o tamanho do texto.

// KMP (Knuth-Morris-Pratt):
// O KMP otimiza a busca por padrões ao evitar comparações redundantes. 
// Ele utiliza um vetor de prefixo-sufixo (também chamado de vetor de falhas ou de prefixos) 
// que é pré-processado a partir do padrão. Esse vetor armazena informações sobre a posição a ser retomada 
// no padrão após uma falha, permitindo que o algoritmo avance sem retroceder no texto. 
// Essa abordagem é mais eficiente porque o algoritmo utiliza o conhecimento obtido durante as comparações anteriores 
// para evitar trabalho redundante. Sua complexidade é O(m + n), sendo O(m) o custo do pré-processamento do vetor 
// e O(n) o custo da busca.

// BMH (Boyer-Moore-Horspool):
// O BMH é uma simplificação do algoritmo de Boyer-Moore que utiliza uma tabela de deslocamento 
// baseada nos caracteres do texto e no último caractere do padrão. Durante a busca, o algoritmo começa comparando 
// o padrão do fim para o início. Caso ocorra uma falha, o deslocamento é determinado pela tabela de salto, 
// que informa o quanto o padrão pode avançar sem realizar comparações desnecessárias. 
// Isso faz com que, na prática, o BMH seja muito eficiente para textos longos e padrões curtos, 
// embora seu desempenho no pior caso ainda seja O(m * n). Em cenários favoráveis, 
// ele realiza menos comparações que o Força Bruta e o KMP.
