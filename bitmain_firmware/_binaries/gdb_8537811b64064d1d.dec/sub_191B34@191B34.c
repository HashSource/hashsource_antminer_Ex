int sub_191B34()
{
  int v0; // r0

  v0 = sub_5329C(
         "interpreter-exec",
         4,
         (int)&loc_19187C,
         (int)"Execute a command in an interpreter.  It takes two arguments:\n"
              "The first argument is the name of the interpreter to use.\n"
              "The second argument is the command to execute.\n",
         (int **)&dword_474744);
  return sub_53274(v0, 1643032);
}
