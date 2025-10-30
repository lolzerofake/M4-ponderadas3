# M4-ponderadas3  
Ponderada 3 do módulo 4  

## Descrição  
Este projeto implementa um **semáforo com Arduino**, controlando três LEDs (vermelho, amarelo e verde) com temporização definida em código.  

## Arquivos  
- `ponderada3.ino`: código do semáforo.  
- `ponderada3.mp4`: vídeo demonstrando o funcionamento, o código e as conexões.  

## Montagem  
- O **cátodo** dos LEDs está conectado aos **resistores** ligados ao **negativo da protoboard**.  
- O **ânodo** dos LEDs está conectado **diretamente à placa** nos pinos correspondentes.  
- O **GND** da placa está conectado ao **negativo da protoboard**.  

## Código  
O código utiliza **ponteiros**, passando o **endereço das variáveis** ao chamar a função e acessando seus **valores com `*`** dentro dela.  

A função `temp(int n, byte *COLOR)`:
- Recebe um tempo `n` e uma cor `COLOR`.
- Liga o LED da cor especificada por `n` segundos.  

Essa função é usada para acionar:
- **Vermelho** por 6 segundos.
- **Amarelo** por 2 segundos.
- **Verde** por 4 segundos.  
