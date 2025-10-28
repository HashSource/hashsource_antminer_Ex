int sub_B738C()
{
  sub_1B9664(sub_B7368);
  return sub_53514(
           "agent",
           0,
           (int)off_46BC00,
           (int)off_46BBFC,
           "Set debugger's willingness to use agent as a helper.",
           "Show debugger's willingness to use agent as a helper.",
           "If on, GDB will delegate some of the debugging operations to the\n"
           "agent, if the target supports it.  This will speed up those\n"
           "operations that are supported by the agent.\n"
           "If off, GDB will not use agent, even if such is supported by the\n"
           "target.",
           (int)sub_B7314,
           (int)sub_B7358,
           (int **)&dword_47475C,
           (int **)&dword_47474C);
}
