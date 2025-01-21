// Casos em que o KMP se destaca:
// 1. Padrões com alta redundância (muitos prefixos que são sufixos). 
//    O KMP evita retrocessos desnecessários utilizando sua tabela de prefixo-sufixo.
//    Exemplo: Texto: "abababababababab", Padrão: "abababab".

// 2. Busca em textos muito longos com padrões que possuem repetições internas.
//    O KMP é eficiente em lidar com padrões que aparecem parcialmente várias vezes no texto.
//    Exemplo: Texto: "aaaaaaaaaaaaaaa", Padrão: "aaaaaa".

// Casos em que o BMH se destaca:
// 1. Padrões que começam com caracteres muito raros no texto.
//    O BMH faz grandes deslocamentos quando o caractere do final do padrão aparece raramente
//    no texto, reduzindo comparações. O padrão é encontrado apenas no final.
//    Exemplo: Texto: "aaaaaaaaaaaaaabaaaaaaa", Padrão: "baaaaaaa".

// 2. Busca em textos com muitos caracteres diferentes e padrões curtos.
//    O BMH pode realizar grandes saltos devido à baixa repetição de caracteres no texto.
//    Exemplo: Texto: "abcdeabcdeabcde", Padrão: "cde".
