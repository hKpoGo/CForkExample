

#define debug(task) if (debugging) task

#define string char*

#define MAX_COMMAND 10
#define MAX_ARGS 20

#define foreach(item, array) \
    for(int keep = 1, \
            count = 0,\
            size = sizeof (array) / sizeof *(array); \
        keep && count != size; \
        keep = !keep, count++) \
      for(item = (array) + count; keep; keep = !keep)

struct Command{
    string toString;
    string progName;
    string args[MAX_ARGS];
};

struct Program{
    struct Command command[MAX_COMMAND];
    int size;
};

struct ChildProcess{
    clock_t startTime;
    clock_t endTime;
    pid_t pid;
    int status;
    bool exitedWithError;
    string task;
};

string readInput(void);