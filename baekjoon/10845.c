#include <stdio.h>
#include <string.h>
#define SIZE 10001

int queue[SIZE];
int start = -1, end = -1;

void push(int data) {
    queue[++end] = data;
}

int pop() {
    if (start == end) {
        return -1;
    }
    else {
        return queue[++start];
    }
}

int size() {
    return end - start;
}

int empty() {
    if (start == end) {
        return 1;
    }
    else {
        return  0;
    }
}

int front() {
    if (start == end) {
        return -1;
    }
    else {
        return queue[start + 1];
    }
}

int rear() {
    if (start == end) {
        return -1;
    }
    else {
        return queue[end];
    }
}

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        char options[10];
        scanf("%s", options);

        if (!strcmp(options, "push")) {
            int input;
            scanf("%d", &input);
            push(input);
        }
        else if (!strcmp(options, "pop")) {
            printf("%d\n", pop());
        }
        else if (!strcmp(options, "size")) {
            printf("%d\n", size());
        }
        else if (!strcmp(options, "empty")) {
            printf("%d\n", empty());
        }
        else if (!strcmp(options, "front")) {
            printf("%d\n", front());
        }
        else {
            printf("%d\n", rear());
        }
    }

    return 0;
}