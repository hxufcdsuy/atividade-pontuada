programa {
  funcao inicio() {
//variavel

caracter cor
inteiro preco


 //dados
 escreva(" \t=== listas ===\t")
 escreva ("\n1-Verde:10,00 R$\t")
  escreva ("\n2-Azul:20,00 R$\t")
escreva("\n3-Amarelo:30,00 R$\t")
escreva("\n4-Vermelho:40,00 R$\t")

//solicitação ao usuário

escreva("\nescolha uma cor entre 1,2,3,4 :")
leia(cor)

escolha(cor) {
 caso  "1" :

 escreva  ("verde no valor de 10,00 R$")


 pare
 caso "2":
 escreva ("azul no valor de 20,00 R$")
 pare

caso "3":
escreva ("amarelo no valor de 30,00 R$")

pare

caso "4":
escreva("vermelho no valor de 40,00 R$")

pare
caso contrario:
escreva("cor inválida")


}
    
  }
}
