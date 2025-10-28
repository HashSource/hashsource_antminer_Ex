_DWORD *__fastcall sub_1B23E4(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v5; // [sp+4h] [bp-Ch]

  if ( a3 || (v5 = a2, a3 = ((int (__fastcall *)(unsigned int))loc_1B7CA0)(a2), a2 = v5, a3) )
  {
    sub_1B0D90(a1, a2, a3, 0);
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
  }
  return a1;
}
