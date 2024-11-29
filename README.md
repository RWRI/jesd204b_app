<div align="center">
    <img src="https://cdn.worldvectorlogo.com/logos/unifei-1.svg" alt="Logo UNIFEI" width="150">
    <h1>Aplicação Controle JESD204B</h1>
</div>

Este repositório faz parte do trabalho final de graduação do curso de Engenharia de Computação da Universidade Federal de Itajubá. Além disso, visa-se organizar os arquivos referentes a aplicação bare metal de controle do [hardware](https://github.com/rwriPS/jesd204) que implementa o protocolo JESD204B.

Assim, ressalta-se que o arquivo [jesd204b.xsa](/jesd204b.xsa) é o binário do hardware desenvolvido. Também, este é o arquivo utilizado para criar a plataforma no Vitis, a qual fornece a base para criar a aplicação de controle.

Além disso, a pasta [app/src](/app/src) é a que organiza todos os códigos em C que foram desenvolvidos para controle das camadas do protocolo. 

E, por fim, o arquivo [main.c](/app/src/main.c) possui os modos de operação que foram criados, sendo esses:
 - **ADC:** realiza um aquisição da quantidade de amostras definidas.
 - **DAC_DDS:** configura o chip DAC para utilizar o DDS como fonte de envio do sinal, enviando um onda senoidal.
 - **DAC_DMA:** configura o hardware para enviar os dados da memória para o DAC, possibilitando o envio de um sinal personalizado.
 - **ADC_DAC:** configura o sistema como um repetidor, pois o sinal que é inserido na entrada do ADC é gravado na memória e, em seguida, enviado pelo DAC.
