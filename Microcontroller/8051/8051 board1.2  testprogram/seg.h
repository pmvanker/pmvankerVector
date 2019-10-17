#define DLY 1
#define SEGS P0

//#define  SEL  P2
sbit     dsel1=P2^0;
sbit     dsel2=P2^1;
sbit     dsel3=P2^2;
sbit     dsel4=P2^3;
#define INIT_SEGS_OFF  dsel1=dsel2=dsel3=dsel4=1

code char LUT[10]=
{
 0x3f,0x06,0x5b,0x4f,0x66,
 0x6d,0x7d,0x07,0x7f,0x6f
};

void dispi_mux_segs(unsigned int i)
{
//   SEL=0x0f;

   SEGS=~LUT[i/1000];
   dsel1=0;
   delay_ms(DLY);
   dsel1=1;


   SEGS=~LUT[(i/100)%10];
   dsel2=0;
   delay_ms(DLY);
   dsel2=1;

   SEGS=~LUT[(i%100)/10];
   dsel3=0;
   delay_ms(DLY);
   dsel3=1;

   SEGS=~LUT[i%10];
   dsel4=0;
   delay_ms(DLY);
   dsel4=1;

}

void dispf_mux_segs(float f)
{
   int i=f,j;
   float t2;

   if(i<10)
   {
   t2=(f-i)*1000;
   j=t2;
 
   SEGS=~(LUT[i]|0x80);
   dsel1=0;
   delay_ms(DLY);
   dsel1=1;


   SEGS=~(LUT[(j/100)]);
   dsel2=0;
   delay_ms(DLY);
   dsel2=1;

   SEGS=~(LUT[(j%100)/10]);
   dsel3=0;
   delay_ms(DLY);
   dsel3=1;

   SEGS=~LUT[j%10];
   dsel4=0;
   delay_ms(DLY);
   dsel4=1;
   }
   else if(i>10 && i<100)
   {

   t2=(f-i)*100;
   j=t2;
 
   SEGS=~(LUT[i/10]);
   dsel1=0;
   delay_ms(DLY);
   dsel1=1;


   SEGS=~(LUT[(i%10)]|0x80);
   dsel2=0;
   delay_ms(DLY);
   dsel2=1;

   SEGS=~(LUT[j/10]);
   dsel3=0;
   delay_ms(DLY);
   dsel3=1;

   SEGS=~LUT[j%10];
   dsel4=0;
   delay_ms(DLY);
   dsel4=1;
   }
   else if(i>100)
   {

   t2=(f-i)*10;
   j=t2;
 
   SEGS=~(LUT[i/100]);
   dsel1=0;
   delay_ms(DLY);
   dsel1=1;


   SEGS=~(LUT[(i%100)/10]);
   dsel2=0;
   delay_ms(DLY);
   dsel2=1;

   SEGS=~(LUT[i%10]|0x80);
   dsel3=0;
   delay_ms(DLY);
   dsel3=1;

   SEGS=~LUT[j];
   dsel4=0;
   delay_ms(DLY);
   dsel4=1;
   
   }

   
}


