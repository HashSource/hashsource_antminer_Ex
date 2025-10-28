int __fastcall sub_15C064(int a1, int a2)
{
  int v4; // r5
  __int64 v5; // r0
  int v6; // r7
  int v7; // r6
  int v8; // r6
  int v10; // r4
  int v11; // r5
  char v12[4]; // [sp+10h] [bp-24h] BYREF
  char v13[8]; // [sp+14h] [bp-20h] BYREF

  v4 = sub_15ECDC(a2);
  v5 = sub_1780DC(v4);
  v6 = *(_DWORD *)(v5 + 152);
  v7 = ((int (__fastcall *)(int, _DWORD))loc_166EC4)(v4, HIDWORD(v5));
  v8 = v7 + ((int (__fastcall *)(int))loc_166F70)(v4);
  if ( (v8 <= a1) | ((unsigned int)a1 >> 31) )
    sub_94708("Invalid register #%d, expecting 0 <= # < %d", a1, v8);
  if ( ((int (__fastcall *)(int, int, int))loc_168570)(v4, a1, v6) )
  {
    if ( !((int (__fastcall *)(int, int, int, int, char *, char *, char *))loc_168638)(v4, a2, a1, v6, v12, v12, v13) )
      sub_26BD60();
    return sub_26D15C(v6, v12);
  }
  else
  {
    v10 = ((int (__fastcall *)(int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))loc_1687F0)(
            v4,
            v6,
            a1,
            0,
            0,
            0,
            0,
            0);
    ((void (__fastcall *)(int, int))loc_15B57C)(v10, a2);
    if ( sub_26ED40(v10) )
      sub_26BD60();
    v11 = sub_26EBD0(v10);
    sub_26C3E0(v10);
    ((void (__fastcall *)(int))loc_26C228)(v10);
    return v11;
  }
}
