#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int main() {
	//Queue Data
	Queue* queue = new Queue;

	//Interface Data
	int option = -1;
	int dequeuedValue = 0;
	int value = 0;

	while (option != 0) {


		printf("Select queue operation: [1] Enqueue [2] Dequeue [3] Display Queue [4] Get Queue Size [0] Quit \n");
		scanf("%d", &option);

		switch (option)
		{

		case 0:
			//Close Program
			printf("Thank you for using the queue!");
			break;
		case 1:
			//Enqueue
			printf("Value to enqueue: ");
			scanf("%d", &value);
			queue->enqueue(value);
			break;
		case 2:
			//Dequeue
			if (queue->getSize() > 0) {
				dequeuedValue = queue->dequeue();
				printf("Value Dequeued: %d\n", dequeuedValue);
			}
			else {
				printf("Queue is empty!\n");
			}
			break;
		case 3:
			//Display
			printf("Current Queue: ");
			queue->display();
			printf("\n");
			break;
		case 4:
			//Size
			value = queue->getSize();
			printf("Current Size: %d\n", value);
			value = queue->getCapacity();
			printf("Current Capacity: %d\n", value);
			break;
		default:
			//Invalid Operation
			printf("Please input a valid operation.");
			break;
		}
	}
}