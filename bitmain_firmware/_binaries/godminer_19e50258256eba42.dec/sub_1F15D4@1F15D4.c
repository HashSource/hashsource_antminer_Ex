int __fastcall sub_1F15D4(int a1, unsigned int *a2, _DWORD *a3, int a4)
{
  int v8; // [sp+24h] [bp-10h] BYREF
  unsigned int s; // [sp+28h] [bp-Ch] BYREF
  int v10; // [sp+2Ch] [bp-8h]

  v10 = 0;
  *a3 = 0;
  *a2 = -64;
  v10 = sub_1E7808(a1, 0, a4, 256, &s, &v8, 1);
  if ( v10 == 1 )
  {
    *a3 = v8;
    if ( (s & 0xC1) == 1 )
    {
      *a2 = HIBYTE(s);
      if ( *(_DWORD *)(a1 + 552) == 1 )
        *a2 -= 72;
    }
  }
  return v10;
}
