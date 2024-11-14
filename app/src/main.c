#include "jesd204b.h"
#include <stdio.h>

int main() {
	int qntAmostras = 65536;
	tmode mode = ADC_DAC;
	char inputOption;

	while (1) {
		printf(
				"MODES:\n\t0 - ADC\n\t1 - DAC_DDS\n\t2 - DAC_DMA\n\t3 - ADC_DAC\nChoose one option:");
		inputOption = getchar();
		printf("%c\n", inputOption);
		getchar();

		mode = ((int) inputOption) - 48;
		if (mode < 0 || mode >= END_MODE)
			mode = 0;

		init_jesd204b(qntAmostras, mode);

		switch (mode) {
		case ADC:
			printf(
					"------------------------------- runnig ADC mode -------------------------------\n");
			adc();
			break;
		case DAC_DDS:
			printf(
					"----------------------------- runnig DAC_DDS mode -----------------------------\n");
			break;
		case DAC_DMA:
			printf(
					"----------------------------- runnig DAC_DMA mode -----------------------------\n");
			while (1)
				dac();
			break;
		case ADC_DAC:
			printf(
					"----------------------------- runnig ADC_DAC mode -----------------------------\n");
			while (1)
				adc_dac();
			break;
		default:
			printf(
					"------------------------------- Invalid option --------------------------------\n");
			printf("Invalid option");
			break;
		}

		clear_jesd204b();
	}

	return 0;
}
