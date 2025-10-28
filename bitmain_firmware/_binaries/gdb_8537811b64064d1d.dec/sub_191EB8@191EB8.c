int __fastcall sub_191EB8(int *a1, _DWORD *a2, int a3)
{
  _DWORD *v4; // r4
  int v6; // r6
  _DWORD savedregs[6]; // [sp+0h] [bp-14h] BYREF

  v4 = (_DWORD *)*a2;
  if ( !*a2 )
    return sub_160F08(a1, a3);
  v6 = sub_1DD5B4(*v4);
  if ( ((int (*)(void))loc_166EC4)() <= a3 )
    return ((int (__fastcall *)(int, _DWORD, int))loc_166CE0)(v6, *v4, a3);
  ((void (__fastcall *)(int, int))loc_1DD448)(v6, a3);
  if ( sub_1DDE94(*v4, a3, savedregs) == 1 )
    return sub_161058(a1, a3, savedregs);
  else
    return sub_160F08(a1, a3);
}
