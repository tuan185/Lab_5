/*
 * LList.h
 *
 *  Created on: Nov 16, 2023
 *      Author: Admin
 */

#ifndef INC_LLIST_H_
#define INC_LLIST_H_
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

typedef void (*CALLBACK)(void);

typedef struct{
	CALLBACK callback;

	uint16_t Delay;

	uint16_t Period;

	uint8_t Runme;

	uint32_t taskID;

}Task_TypeDef_t;

#define SCH_MAX_TASKS			40
#define NO_TASK_ID				0

struct Node{
	Task_TypeDef_t data;
	struct Node* nextNode;
};

struct Node* createNode(Task_TypeDef_t data);
void addTask(struct Node** head, Task_TypeDef_t data);
void deleteTask(struct Node** head);
void deleteTaskID(struct Node** head, uint8_t taskID);
void clearList(struct Node* head);
//uint8_t findTask(CALLBACK callback);

#endif /* INC_LLIST_H_ */
