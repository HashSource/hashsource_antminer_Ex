int __fastcall sub_1105AC(_DWORD *a1, int a2)
{
  int result; // r0
  int v5; // r6
  int (__fastcall *v6)(int, int); // r3
  int v7; // [sp+4h] [bp-4h] BYREF

  v7 = sub_15DE3C(a2);
  result = ((int (__fastcall *)(int *, _DWORD))loc_1103B0)(&v7, 0);
  if ( result )
  {
    if ( *(_BYTE *)(*(_DWORD *)result + 65) )
      return *a1 == 4;
    v5 = sub_15ECDC(a2);
    v6 = *(int (__fastcall **)(int, int))(((int (__fastcall *)(int, int))loc_16ECB0)(v5, dword_4872C4) + 4);
    if ( v6 && v6(v5, a2) )
      return *a1 == 4;
    else
      return *a1 == 0;
  }
  return result;
}
