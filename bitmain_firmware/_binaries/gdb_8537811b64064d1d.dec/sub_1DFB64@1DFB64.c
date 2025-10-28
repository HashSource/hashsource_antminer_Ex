int __fastcall sub_1DFB64(int **a1)
{
  int v2; // r4
  int v3; // r0
  _DWORD v5[3]; // [sp+0h] [bp-Ch] BYREF

  v2 = **a1;
  if ( !((int (__fastcall *)(int))loc_166898)(v2) )
  {
    if ( ((int (__fastcall *)(int))loc_167390)(v2) >= 0 )
    {
      v3 = ((int (__fastcall *)(int))loc_167390)(v2);
      if ( ((int (__fastcall *)(int **, int, _DWORD *))loc_1E017C)(a1, v3, v5) != -1 )
        return ((int (__fastcall *)(int, _DWORD))loc_169FC8)(v2, v5[0]);
      sub_92F8C(9, "PC register is not available");
    }
    sub_94728((int)"regcache.c", 1250, "regcache_read_pc: Unable to find PC");
    JUMPOUT(0x1DFC08);
  }
  return ((int (__fastcall *)(int, int **))loc_1668E4)(v2, a1);
}
