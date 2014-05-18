#include <semaphore.h>

typedef unsigned long QueueElem; 

typedef struct { 
	QueueElem *v;
	unsigned int first;
	unsigned int last;
	unsigned int capacity;	//	What for?
	sem_t empty;
	sem_t full;
	pthread_mutex_t mutex;	//	What for?
} CircularQueue;

void queue_init(CircularQueue **q, unsigned int capacity);

void queue_put(CircularQueue *q, QueueElem value);

QueueElem queue_get(CircularQueue *q); 

void queue_destroy(CircularQueue *q);