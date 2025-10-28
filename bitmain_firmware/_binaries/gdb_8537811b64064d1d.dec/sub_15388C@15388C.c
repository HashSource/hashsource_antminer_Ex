__sighandler_t __fastcall sub_15388C(int a1)
{
  sub_15319C((_DWORD *)dword_487674);
  return signal(a1, (__sighandler_t)sub_15388C);
}
