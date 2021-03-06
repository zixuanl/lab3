// GlobalCanstant.h: declares the global variables and constants we will use
//
// Authors: Tianyi Huang <tianyih@andrew.cmu.edu>
//          Zixuan Liu <zixuanl@andrew.cmu.edu>
//	    Jianan Lu <jiananl@andrew.cmu.edu>
// Date:    10/23/2013

#ifndef GLOBALCONSTANT_H
#define GLOBALCONSTANT_H

#define VECTORTABLE_SWI_ENTRY 0x08		// swi entry address: 0x08
#define VECTORTABLE_IRQ_ENTRY 0x18
#define PC_CURRENTADDR_OFFSET 8			// pc_addr = current_addr + 8
#define LOAD_PC_PC_4_ENCODING 0xe51ff004	// encoding of 'ldr pc, [pc, #-4]'
#define MAXINPUTSIZE 8192			// maximum input size on STDIN

uint32_t *iaddr_1;					// address of the first instruction we altered
uint32_t *iaddr_2;					// address of the second instruction we altered
uint32_t instruction1;				// content of the first instruction we altered
uint32_t instruction2;				// content of the second instruction we altered
uint32_t *irq_iaddr_1;				// address of the first instruction we altered (for IRQ)
uint32_t *irq_iaddr_2;				// address of the second instruction we altered (for IRQ)
uint32_t irq_instruction1;				// content of the first instruction we altered (for IRQ)
uint32_t irq_instruction2;				// content of the second instruction we altered (for IRQ)
extern uint32_t oldspsr;				// stores the old svc spsr
extern uint32_t oldsp;				// stores the old svc sp
extern uint32_t link;				// stores the old svc link register, which has the address of next instruction after calling user app in kernel
extern int32_t value;				// stores return value of syscall
extern int32_t ExitStatus;				// stores exit status from user app to kernel to system

extern uint64_t system_time;

void S_Handler(int);				// declares S_Handler
void Usermode(int argc, char *argv[]);		// declares Usermode which prepares for and runs user app
void restore();					// restores some svc registers
void exit(int);					// restores link register and returns ExitStatus to kernel

void IRQ_Handler();

#endif


