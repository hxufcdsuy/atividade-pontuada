programa {
  funcao inicio() { 
    //vari�vel da quest�o 5
    
    inteiro resultado, numeroum,numerodois
    caracter operacao
     

    
  escreva("digite uma opera��o + - / *:")
  leia(operacao)


  escreva("digite o primeiro valor:")
  leia(numeroum)
    
escreva("digite o segundo valor:")
leia(numerodois)






escolha(operacao) {

caso "+":

resultado=numeroum+numerodois
escreva ("\nResultado da soma �:",resultado)

  
pare


caso "-":
resultado=numeroum - numerodois
escreva("\nResultado da soma �:",resultado)


pare

caso "*" :
resultado=numeroum*numerodois
escreva("\n O valor da multiplica��o �:",resultado)

pare


caso "/" :
resultado=numeroum/numerodois
escreva("\n O valor da divis�o �:",resultado)

pare

caso contrario :
escreva("opera��o inv�lida.")










}

  }
}
