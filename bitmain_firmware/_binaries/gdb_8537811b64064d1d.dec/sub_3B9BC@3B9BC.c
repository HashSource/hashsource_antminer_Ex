int sub_3B9BC()
{
  ((void (__fastcall *)(char **))loc_1FDCC8)(&off_34E400);
  return sub_535E0(
           "remoteflow",
           -1,
           &dword_471B94,
           "Set use of hardware flow control for remote serial I/O.",
           "Show use of hardware flow control for remote serial I/O.",
           "Enable or disable hardware flow control (RTS/CTS) on the serial port\nwhen debugging using remote targets.",
           0,
           sub_3B4C0,
           &dword_47475C,
           &dword_47474C);
}
