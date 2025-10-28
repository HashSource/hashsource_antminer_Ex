int __fastcall sub_4DFF4(int a1)
{
  int v2; // r6
  int i; // r4
  int j; // r4
  int result; // r0
  _DWORD v6[5]; // [sp+54h] [bp-D8h] BYREF
  int v7; // [sp+94h] [bp-98h] BYREF
  _BYTE v8[4]; // [sp+114h] [bp-18h] BYREF
  _BYTE v9[20]; // [sp+118h] [bp-14h] BYREF

  ((void (__fastcall *)(int *, int))loc_1DD5C0)(&v7, a1);
  v2 = sub_98F90(&v7);
  if ( ptrace(PTRACE_GETFPXREGS, v2, 0, &v7) < 0 )
    sub_258B2C("Unable to fetch WMMX registers.");
  for ( i = 26; i != 42; ++i )
  {
    if ( ((int (__fastcall *)(int, int))loc_1DD928)(a1, i) == 1 )
      ((void (__fastcall *)(int, int, int *))loc_1DEBD4)(a1, i, &v7 + 2 * i - 52);
  }
  if ( ((int (__fastcall *)(int, int))loc_1DD928)(a1, 44) == 1 )
    ((void (__fastcall *)(int, int, _BYTE *))loc_1DEBD4)(a1, 44, v8);
  if ( ((int (__fastcall *)(int, int))loc_1DD928)(a1, 45) == 1 )
    ((void (__fastcall *)(int, int, _BYTE *))loc_1DEBD4)(a1, 45, v9);
  for ( j = 50; j != 54; ++j )
  {
    if ( ((int (__fastcall *)(int, int))loc_1DD928)(a1, j) == 1 )
      ((void (__fastcall *)(int, int, _DWORD *))loc_1DEBD4)(a1, j, &v6[j]);
  }
  result = ptrace(PTRACE_SETFPXREGS, v2, 0, &v7);
  if ( result < 0 )
    sub_258B2C("Unable to store WMMX registers.");
  return result;
}
