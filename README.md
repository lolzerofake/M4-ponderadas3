# M4-ponderada 3 
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


## Lista de Materiais

- **6 Jumpers Fêmea-Macho** 
- **3 Leds de cores vermelho, amarelo e verde**
- **3 Resistores de 220 Ohms**
- **1 Placa Arduino Uno**
- **1 Maquete de madeira de semáforo**
## Avaliação de pares:

Revisão do Felipe Viana: 
Pendente

Revisão do Leonardo Lameda:
A montagem está descrita corretamente, com LEDs ligados à protoboard, resistores no negativo e GND conectado à placa, mostrando compreensão do circuito. O código atende à lógica exigida (6s vermelho, 4s verde, 2s amarelo) e ainda utiliza ponteiros, o que demonstra domínio técnico acima do básico.
No entanto, não ficou claro se o autor aparece no vídeo conforme solicitado.
Pontos positivos: funcionamento correto, lógica implementada, boa estrutura de código.
A melhorar:  contextualizar mais a introdução da documentação e mostrar presença do autor no vídeo.
Nota sugerida: 9.5/10
