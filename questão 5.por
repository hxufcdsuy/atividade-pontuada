programa {
  funcao inicio() { 
    //variável da questão 5
    
    inteiro resultado, numeroum,numerodois
    caracter operacao
     

    
  escreva("digite uma operação + - / *:")
  leia(operacao)


  escreva("digite o primeiro valor:")
  leia(numeroum)
    
escreva("digite o segundo valor:")
leia(numerodois)






escolha(operacao) {

caso "+":

resultado=numeroum+numerodois
escreva ("\nResultado da soma é:",resultado)

  
pare


caso "-":
resultado=numeroum - numerodois
escreva("\nResultado da soma é:",resultado)


pare

caso "*" :
resultado=numeroum*numerodois
escreva("\n O valor da multiplicação é:",resultado)

pare


caso "/" :
resultado=numeroum/numerodois
escreva("\n O valor da divisão é:",resultado)

pare

caso contrario :
escreva("operação inválida.")










}

  }
}
