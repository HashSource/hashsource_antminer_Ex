int sub_B1960()
{
  dword_4781EC = sub_1CD13C();
  dword_4781E8 = sub_183670();
  sub_1B8BF8(719716);
  sub_1B9664(719820);
  sub_539B4("tasks", (int)sub_B164C, (int)"Provide information about all known Ada tasks");
  return sub_5329C(
           "task",
           0,
           (int)sub_B0C3C,
           (int)"Use this command to switch between Ada tasks.\n"
                "Without argument, this command simply prints the current task ID",
           (int **)&dword_474744);
}
