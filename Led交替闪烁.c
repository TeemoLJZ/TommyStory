#include <reg52.h>

unsigned int i;

void main(){
	while(1){
		P1=0xff;
		i=65535;
		while(i--);
		P1=0;
		i=65535;				
		while(i--);
		P1=0xff;
	}

}