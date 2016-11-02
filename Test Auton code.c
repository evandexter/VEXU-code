bool goForwards();
bool goBackwards();

int timeList[] =
{
  10000,
  20000
};

const int taskNum = sizeof(timeList) / sizeof(timeList[0]);
const int FORWARDS = 1;
const int BACKWARDS = 2;

int taskList[] =
{
  FORWARDS,
  BACKWARDS
};

bool waitList[] =
{
  false,
  false
};

bool doneList[taskNum];

task main()
{
  clearTimer(T1);
  while(true)
  {
    // other code
    for (int i = 0; i < taskNum; i++)
    {
      if (timeList[i] <= time1[T1] && !doneList[i] && (i == 0 || (!waitList[i] || doneList[i - 1])))
      {
        switch(taskList[i])
        {
        	case FORWARDS:
        		doneList[i] = goForwards();

        	case BACKWARDS:
        		doneList[i] = goBackwards();
        }
        // other tasks
      }
    }
  }
}

// Task #1
bool goForwards()
{
  return true;
}

// Task #2
bool goBackwards()
{
  return true;
}
