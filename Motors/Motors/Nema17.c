#include "Nema17.h"

void m17_init1(void)
{
	// Nema17 ����� ��� STEP � DIR ��� OUTPUT
	NEMA_DDR  |= 1 << STEP1;
	NEMA_DDR  |= 1 << DIR1;

	// ��������� �������� Nema17
	NEMA_PORT |= (1 << STEP1); // ������������� 1
	NEMA_PORT &= ~(1 << DIR1); // ������������� 0
}

void m17_left1(void)
{
	// ����������� ��������
	NEMA_PORT |= (1 << DIR1); // ������������� 1
	
	// ������� 1 ������
	for(int j = 0; j < STEP_ROUND; j++) 
	{
		NEMA_PORT |= (1 << STEP1); // ������������� 1
		TIME;
		NEMA_PORT &= ~(1 << STEP1); // ������������� 0
		TIME;	
	}
}

void m17_right1(void)
{
	// ����������� ��������
	NEMA_PORT &= ~(1 << DIR1); // ������������� 0
	
	// ������� 1 ������
	for(int j = 0; j < STEP_ROUND; j++) 
	{
		NEMA_PORT |= (1 << STEP1); // ������������� 1
		TIME;
		NEMA_PORT &= ~(1 << STEP1); // ������������� 0
		TIME;
	}
}

void m17_init2(void)
{
	// Nema17 ����� ��� STEP � DIR ��� OUTPUT
	NEMA_DDR  |= 1 << STEP2;
	NEMA_DDR  |= 1 << DIR2;

	// ��������� �������� Nema17
	NEMA_PORT |= (1 << STEP2); // ������������� 1
	NEMA_PORT &= ~(1 << DIR2); // ������������� 0
}

void m17_left2(void)
{
	// ����������� ��������
	NEMA_PORT |= (1 << DIR2); // ������������� 1
	
	// ������� 1 ������
	for(int q = 0; q < STEP_ROUND; q++) 
	{
		NEMA_PORT |= (1 << STEP2); // ������������� 1
		TIME;
		NEMA_PORT &= ~(1 << STEP2); // ������������� 0
		TIME;	
	}
}

void m17_right2(void)
{
	// ����������� ��������
	NEMA_PORT &= ~(1 << DIR2); // ������������� 0
	
	// ������� 1 ������
	for(int q = 0; q < STEP_ROUND; q++) 
	{
		NEMA_PORT |= (1 << STEP2); // ������������� 1
		TIME;
		NEMA_PORT &= ~(1 << STEP2); // ������������� 0
		TIME;
	}
}

void m17_init3(void)
{
	// Nema17 ����� ��� STEP � DIR ��� OUTPUT
	NEMA_DDR  |= 1 << STEP3;
	NEMA_DDR  |= 1 << DIR3;

	// ��������� �������� Nema17
	NEMA_PORT |= (1 << STEP3); // ������������� 1
	NEMA_PORT &= ~(1 << DIR3); // ������������� 0
}

void m17_left3(void)
{
	// ����������� ��������
	NEMA_PORT |= (1 << DIR3); // ������������� 1
	
	// ������� 1 ������
	for(int w = 0; w < STEP_ROUND; w++) 
	{
		NEMA_PORT |= (1 << STEP3); // ������������� 1
		TIME;
		NEMA_PORT &= ~(1 << STEP3); // ������������� 0
		TIME;
	}
}

void m17_right3(void)
{
	// ����������� ��������
	NEMA_PORT &= ~(1 << DIR3); // ������������� 0
		
	// ������� 1 ������
	for(int w = 0; w < STEP_ROUND; w++) 
	{
		NEMA_PORT |= (1 << STEP3); // ������������� 1
		TIME;
		NEMA_PORT &= ~(1 << STEP3); // ������������� 0
		TIME;
	}
}	