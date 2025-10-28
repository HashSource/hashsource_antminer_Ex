int __fastcall sub_153A1C(int a1)
{
  __sighandler_t v1; // r0

  v1 = signal(a1, (__sighandler_t)sub_153A1C);
  sub_1580AC(v1);
  return sub_15319C((_DWORD *)dword_487680);
}
