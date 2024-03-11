programa {
  funcao inicio() { // variavel questão 4
 cadeia fruta
  inteiro quantidademorango,quantidademaca ,quantidade
  real preco,desconto,precomorango,precomaca,
//dados
escreva("digite as frutas:")
leia(fruta)
escreva("o kg do morango:")
leia(quantidademorango)
escreva("o kg da maca:")
leia(quantidademaca)


 //calculo
 se( quantidademorango <= 5 ) {

precomorango = quantidademorango * 2.50}

  senao {

    precomorango = quantidademorango *  2.20 

}
se (  quantidademaca  <= 5){

precomaca= quantidademaca *1.80



}

senao{

precomaca = quantidademaca*1.50




}
 se(preco >25 ou quantidade >= 8 ){
  quantidade = quantidademaca + quantidademorango
   preco = quantidade *0.10
 escreva ("10 % de desconto no valor de:",preco)





 }
 senao { escreva("valor sem desconto")}





}




}


    
  
