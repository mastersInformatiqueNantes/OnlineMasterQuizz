#ifndef __QUESTION_H__
#define __QUESTION_H__

typedef struct _Question Question;
struct _Question{
	char text[256];
	char goodAnswer[256];
};

#endif