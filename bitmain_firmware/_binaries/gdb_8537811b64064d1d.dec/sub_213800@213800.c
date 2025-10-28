_DWORD *__fastcall sub_213800(int a1, unsigned int a2)
{
  _DWORD *result; // r0
  _DWORD *v5; // [sp+4h] [bp-8h] BYREF

  (*(void (**)(void))(*(_DWORD *)(a1 + 132) + 8))();
  *(_BYTE *)(*(_DWORD *)(a1 + 40) + 92) |= 1u;
  result = (_DWORD *)sub_1B7A7C(a1);
  if ( !result && !*(_DWORD *)(a1 + 176) && !*(_DWORD *)(a1 + 180) )
  {
    sub_1B0C90(&v5, a1);
    result = v5;
    if ( v5 )
    {
      sub_2137A0((int)v5, *(const char **)(a1 + 4), a2, a1);
      result = v5;
      if ( v5 )
        result = (_DWORD *)((int (*)(void))loc_1625D0)();
    }
  }
  if ( (a2 & 0x10) == 0 )
    return sub_1D08A0((_DWORD *)a1, 0);
  return result;
}
