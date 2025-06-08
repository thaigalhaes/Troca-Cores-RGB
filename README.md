# Troca Cores RGB

Este projeto Arduino permite controlar a cor de um LED RGB utilizando um potenciômetro. Conforme você gira o botão do potenciômetro, a cor da luz muda entre vermelho, verde, azul ou desliga completamente, com base no valor analógico lido.

---

## Materiais Utilizados

- 1x Arduino Uno (ou compatível)  
- 1x LED RGB (cátodo comum)  
- 3x resistores de 220Ω  
- 1x Potenciômetro  
- Jumpers  
- Protoboard  

---

## Funcionamento

O programa lê o valor analógico do potenciômetro (entre 0 e 1023) e muda a cor do LED RGB com base nos seguintes intervalos:

| Valor Lido (A0) | Cor do LED   |
|------------------|---------------|
| 0 – 256          | LED Apagado   |
| 257 – 512        | Vermelho      |
| 513 – 768        | Verde         |
| 769 – 1023       | Azul          |

---

## Ligações

| Pino Arduino | Componente           |
|--------------|----------------------|
| 7            | LED RGB - Vermelho   |
| 6            | LED RGB - Verde      |
| 5            | LED RGB - Azul       |
| A0           | Potenciômetro (meio) |
| 5V / GND     | Potenciômetro (lados) e GND dos LEDs |

---
## Estágios do LED RGB

Abaixo estão as fotos de cada estágio do LED RGB conforme a leitura do potenciômetro:

<p align="center">
  <img src="https://raw.githubusercontent.com/thaigalhaes/Troca-Cores-RGB/main/apagado.jpg" width="200" alt="LED Apagado"/>
  <img src="https://raw.githubusercontent.com/thaigalhaes/Troca-Cores-RGB/main/vermelho.jpg" width="200" alt="LED Vermelho"/>
  <img src="https://raw.githubusercontent.com/thaigalhaes/Troca-Cores-RGB/main/verde.jpg" width="200" alt="LED Verde"/>
  <img src="https://raw.githubusercontent.com/thaigalhaes/Troca-Cores-RGB/main/azul.jpg" width="200" alt="LED Azul"/>
</p>


