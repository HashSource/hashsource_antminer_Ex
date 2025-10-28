int sub_672B0()
{
  int v0; // r0
  int v1; // r0

  sub_535E0(
    "mi-async",
    0,
    (int)&dword_474860,
    "Set whether MI asynchronous mode is enabled.",
    "Show whether MI asynchronous mode is enabled.",
    "Tells GDB whether MI should be in asynchronous mode.",
    (int)sub_62F6C,
    (int)sub_62EE4,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  v0 = sub_5474C((int)"target-async", (unsigned __int8 *)"mi-async", 0, 0, &dword_47475C);
  sub_532D0(v0, (int)"set mi-async");
  v1 = sub_5474C((int)"target-async", (unsigned __int8 *)"mi-async", 0, 0, &dword_47474C);
  return sub_532D0(v1, (int)"show mi-async");
}
