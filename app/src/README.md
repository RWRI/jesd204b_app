<div align="center">
    <img src="https://pssolucoes.app.br:5055/images/somenteLogo-PS.png" alt="Logo PS Soluções" width="150">
    <h1>Aplicação - Códigos Fontes</h1>
</div>

Esta pasta organiza os algoritmos em C que compõem a aplicação de controle. Deste modo são apresentados a seguir as funcionalidades de cada parte:

- [ad9144.h](/app/src/ad9144.h) e [ad9144.c](/app/src/ad9144.c): realizar a configuração do conversor DAC por meio do spi;
- [ad9523.h](/app/src/ad9523.h) e [ad9523.c](/app/src/ad9523.c): realizar a configuração do clock device através do spi;
- [ad9680.h](/app/src/ad9680.h) e [ad9680.c](/app/src/ad9680.c): realizar a configuração do conversor ADC por meio do spi;
- [adc_core.h](/app/src/adc_core.h) e [adc_core.c](/app/src/adc_core.c): realizar a configuração de alguns parâmetros da camada de
transporte do ADC por meio do AXI;
- [dac_buffer.h](/app/src/dac_buffer.h) e [dac_buffer.c](/app/src/dac_buffer.c): realizar a gravação na memória de um sinal presente em um vetor, dado um endereço inicial recebido como parâmetro;
- [dac_core.h](/app/src/dac_core.h) e [dac_core.c](/app/src/dac_core.c): realizar a configuração de alguns parâmetros da camada de transporte do DAC por meio do AXI;
- [dmac_core.h](/app/src/dmac_core.h) e [dmac_core.c](/app/src/dmac_core.c): realizar a configuração dos parâmetros da recepção e transmissão dos dados
pelo AXI DMA, além de funções para habilitar o DMA do ADC e/ou do DAC;
- [jesd204b.h](/app/src/jesd204b.h) e [jesd204b.c](/app/src/jesd204b.c): organizar as funções de configuração e habilitação do protocolo jesd204b;
- [jesd_core.h](/app/src/jesd_core.h) e [jesd_core.c](/app/src/jesd_core.c): realizar a configuração de alguns parâmetros da camada de link por meio do AXI;
- [main.c](/app/src/main.c): arquivo principal que realiza os modos de operações;
- [platform_drivers.h](/app/src/platform_drivers.h) e [platform_drivers.c](/app/src/platform_drivers.c): realizar as comunicações por meio do SPI e do GPIO;
- [xcvr_core.h](/app/src/xcvr_core.h) e [xcvr_core.c])(/app/src/xcvr_core.c): realizar a configuração de alguns parâmetros da camada física por
meio do AXI;
- [xilinx_qpll.h](/app/src/xilinx_qpll.h) e [xilinx_qpll.c](/app/src/xilinx_qpll.c): realizar a configuração da qpll presente na camada física;
- [xilinx_xcvr_channel.h](/app/src/xilinx_xcvr_channel.h) e [xilinx_xcvr_channel.c](/app/src/xilinx_xcvr_channel.c): realizar a configuração da pll presente na camada física.