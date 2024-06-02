#include<stdio.h>
#include<stdlib.h>
typedef int dataType;

typedef struct NodeType
{
		dataType data;
		struct NodeType *next;
}nodeType;

typedef struct sLinkedListType
{
		nodeType *start;
		unsigned int count;	
}sLinkedListType;

sLinkedListType creat(void);
sLinkedListType insertAtBeg(sLinkedListType list, dataType data);
sLinkedListType insertAtEnd(sLinkedListType list, dataType data);
sLinkedListType insertAtDesiredLocation(sLinkedListType list, dataType data);
nodeType* getpred(sLinkedListType list);
sLinkedListType insertAtSortedOrder(sLinkedListType list, dataType data);
sLinkedListType sort(sLinkedListType list);

