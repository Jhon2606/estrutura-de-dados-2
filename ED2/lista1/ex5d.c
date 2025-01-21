// Árvore Trie:
// 1. Não depende da ordem de inserção das chaves, mas apenas de seus valores (balanceamento natural).
// 2. Complexidade de busca, inserção e exclusão é O(AK), onde A é o tamanho do alfabeto e K é o comprimento da chave.
// 3. Pode apresentar caminhos longos de um único descendente quando as chaves compartilham prefixos significativos.
// 4. Inspeciona todos os bits/caracteres da chave, independentemente do número de registros na árvore.
// 5. Requer mais espaço devido à presença de nós intermediários com apenas um descendente.
// 6. É ideal para aplicações que precisam de busca rápida baseada em prefixos, como dicionários e preenchimento automático de palavras.

// Árvore Patrícia:
// 1. Representação compacta de uma Trie, eliminando nós com um único descendente ao agrupar esses nós com seus predecessores.
// 2. Estritamente binária, utilizando apenas bits binários como base para bifurcação, o que reduz o espaço usado.
// 3. Complexidade também é O(K), mas economiza memória ao armazenar apenas a posição do primeiro bit que difere entre subárvores.
// 4. Durante a busca, é necessário realizar uma comparação completa de chave apenas no nó índice para confirmar a correspondência.
// 5. Mais eficiente em termos de espaço para grandes conjuntos dispersos de dados.
// 6. Aplicada em contextos onde o uso eficiente da memória é crítico e o conjunto de dados é esparso.