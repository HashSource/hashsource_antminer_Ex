bool __fastcall sub_21A858(int a1, _BYTE *a2)
{
  int v4; // r5
  int v5; // r0
  int v7; // r0

  v4 = ((int (*)(void))sub_25B5C4)();
  v5 = sub_25B5C4(a2);
  if ( v4 < v5 )
    return 0;
  if ( *a2 == 47 )
  {
    if ( v4 != v5 )
      return 0;
    return ((int (__fastcall *)(_BYTE *, int, int))loc_25B54C)(a2, a1, 3) == 0;
  }
  else
  {
    v7 = ((int (__fastcall *)(int, int))loc_25B634)(a1, v4 - v5);
    return ((int (__fastcall *)(_BYTE *, int, int))loc_25B54C)(a2, v7, 3) == 0;
  }
}
