int sub_630A8()
{
  int v0; // r1
  int result; // r0
  int v2; // r5
  int v3; // [sp+0h] [bp-2Ch] BYREF
  _BYTE v4[40]; // [sp+4h] [bp-28h] BYREF

  v0 = dword_474864;
  if ( dword_474864 )
    v0 = off_489AF8() != 0;
  sub_18012C(&dword_4899A0, v0);
  if ( dword_487950 )
  {
    if ( !*(_DWORD *)(dword_47486C + 32) && *(_DWORD *)(dword_47486C + 36) == -1 )
    {
      return sub_18128C(0);
    }
    else
    {
      ((void (__fastcall *)(_BYTE *))loc_23FF48)(v4);
      v3 = 0;
      if ( !*(_DWORD *)(dword_47486C + 32) )
        v3 = *(_DWORD *)(sub_183A20(*(_DWORD *)(dword_47486C + 36)) + 12);
      sub_23E4C8(sub_62BE8, &v3);
      return ((int (__fastcall *)(_BYTE *))loc_23FCB4)(v4);
    }
  }
  else
  {
    v2 = dword_487970;
    if ( *(_DWORD *)(dword_47486C + 32) )
    {
      dword_487970 = 1;
      result = ((int (*)(void))sub_18128C)();
    }
    else
    {
      result = sub_18128C(1);
    }
    dword_487970 = v2;
  }
  return result;
}
