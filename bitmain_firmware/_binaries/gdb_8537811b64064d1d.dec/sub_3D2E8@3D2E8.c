int sub_3D2E8()
{
  sub_53648(
    "exec-wrapper",
    0,
    &dword_471BA4,
    "Set a wrapper for running programs.\nThe wrapper prepares the system and environment for the new program.",
    "Show the wrapper for running programs.",
    0,
    0,
    0,
    &dword_47475C,
    &dword_47474C);
  sub_5329C("exec-wrapper", 0, sub_3D0F4, "Disable use of an execution wrapper.", &dword_474794);
  return sub_535E0(
           "startup-with-shell",
           4,
           &dword_46D538,
           "Set use of shell to start subprocesses.  The default is on.",
           "Show use of shell to start subprocesses.",
           0,
           0,
           sub_3D0E4,
           &dword_47475C,
           &dword_47474C);
}
