bool task();
int taskNum = 2;

int timeList[taskNum] =
{
  1000,
  2000
};

int taskList[taskNum] =
{
  1,
  1
};

bool doneList[taskNum];

task main()
{
  ClearTimer(T1);
  while(true)
  {
    // other code
    for (int i = 0; i < taskNum; i++)
    {
      if (timeList[i] <= time1[T1] && doneList[i] == false)
      {
        if (taskList[i] == 1)
        {
          doneList[i] = task();
        }
        // other tasks
      }
    }
  }
}

// Task #1
bool task()
{
  return true;
}
