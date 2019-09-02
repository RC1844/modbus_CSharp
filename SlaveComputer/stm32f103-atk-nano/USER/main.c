#include <stdlib.h>
//#include <stdio.h>
#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "adc.h"
#include "beep.h"
#include "timer.h"
#include "exti.h"

/************************************************
 ALIENTEK NANO STM32������ʵ��4
 ����ʵ��
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 �������������ӿƼ����޹�˾
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/

int main(void)
{
    Stm32_Clock_Init(9); //ϵͳʱ������
    delay_init(72);	     //��ʱ��ʼ��
    uart_init(72,115200);//���ڳ�ʼ��Ϊ115200
    LED_Init();		  	 //��ʼ����LED���ӵ�Ӳ���ӿ�
    BEEP_Init();
    Adc_Init();
    EXTIX_Init();
    TIM2_Init(4999, 7199);
    TIM3_Init(4999, 7199);
    TIM4_Init(4999, 7199);
    while(1)
    {

    }
}
