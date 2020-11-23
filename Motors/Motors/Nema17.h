/*
 * Motors Nema17HS4401 and Nema17HS4023
 */ 

#ifndef NEMA17_H_
#define NEMA17_H_

#include "main.h"

// ���� � ddr ��� ������
#define NEMA_PORT PORTA
#define NEMA_DDR DDRA

// ���� ��� ����������� ��������� STEP, DIR 1 �����
#define STEP1 PINA0
#define DIR1 PINA1

// ���� ��� ����������� ��������� STEP, DIR 2 �����
#define STEP2 PINA2
#define DIR2 PINA3

// ���� ��� ����������� ��������� STEP, DIR 3 �����
#define STEP3 PINA4
#define DIR3 PINA5

// ���������� ����� �� 1 ������
#define STEP_ROUND 200

// ������������ ��������
#define TIME _delay_ms(100)

void m17_init1(void);
void m17_left1(void);
void m17_right1(void);

void m17_init2(void);
void m17_left2(void);
void m17_right2(void);

void m17_init3(void);
void m17_left3(void);
void m17_right3(void);

#endif /* NEMA17_H_ */