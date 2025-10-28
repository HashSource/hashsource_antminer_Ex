int __fastcall sub_45044(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r0
  _DWORD v9[4]; // [sp+18h] [bp-14h] BYREF

  v9[0] = ps_getpid_0(&dword_4878EC);
  sub_324160(dword_472134, sub_41908, v9);
  v9[1] = a1;
  v9[2] = a2;
  v9[3] = a3;
  v3 = ((int (*)(void))loc_41A9C)();
  if ( off_47218C )
    off_47218C();
  *(_DWORD *)(v3 + 20) = 1;
  v4 = sub_23EDDC(dword_4878EC, dword_4878F0, dword_4878F4, a1, a2, a3);
  return sub_1DDD1C(v4);
}
