int __fastcall sub_1EF5B4(char *a1)
{
  int v2; // r0
  _BOOL4 v3; // r4
  int v4; // r0
  int v5; // r0
  int v7; // [sp+4h] [bp-Ch] BYREF
  __int64 v8; // [sp+8h] [bp-8h]

  v2 = sub_16F67C((int)a1);
  ((void (__fastcall *)(int))loc_1E2798)(v2);
  dword_4878EC = dword_475848;
  qword_4878F0 = qword_47584C;
  sub_1EF488((int)&v7, a1);
  if ( v7 == dword_475848 && v8 == qword_47584C )
  {
    v3 = 1;
    v7 = dword_488C70[0];
    v8 = *(_QWORD *)&dword_488C70[1];
  }
  else
  {
    v3 = ((int (__fastcall *)(int))loc_1E21C0)(72) != 1;
  }
  v4 = ps_getpid_0((int)&v7);
  sub_1EC4FC(v3, v4, -1, 1);
  v5 = ((int (__fastcall *)(int, _DWORD, _DWORD))loc_23FAB4)(v7, v8, HIDWORD(v8));
  return sub_23F90C(v5);
}
