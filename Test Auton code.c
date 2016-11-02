bool task1();

int timeList[] =
{
  1000,
  2000
};

const int taskNum = sizeof(timeList) / sizeof(timeList[0]);

int taskList[] =
{
  1,
  1
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
        if (taskList[i] == 1)
        {
          doneList[i] = task1();
        }
        // other tasks
      }
    }
  }
}

// Task #1
bool task1()
{
  return true;
}
