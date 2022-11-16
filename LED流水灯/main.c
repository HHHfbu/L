#include <REGX52.H>
#include <INTRINS.H>
void Delay(unsigned int xms)
	{
		unsigned char i,j;
		_nop_();
		while(xms--)
		{
		i=2;
		j=239;
		do
		{
		while(--j);}
		while(--i);
}
}

void main(){
   while(1)
	 {
		 P2=0xFE;
	 Delay(500);
		 P2=0xFD;
	 Delay(400);
		 P2=0xFB;
	 Delay(300);
		 P2=0xF7;
	 Delay(200);
		 P2=0xEF;
	 Delay(150);
		 P2=0xDF;
	 Delay(100);
	 P2=0xBF;
	 Delay(50);
		 P2=0x7F;
	 Delay(10);
		 
	 }


}


