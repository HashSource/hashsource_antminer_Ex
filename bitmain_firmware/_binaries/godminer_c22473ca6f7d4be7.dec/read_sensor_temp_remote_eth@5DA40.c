int __fastcall read_sensor_temp_remote_eth(int a1, int *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v12; // r3
  int v13; // r3
  int v14; // [sp+8h] [bp-8h] BYREF
  int v15; // [sp+Ch] [bp-4h] BYREF

  if ( a5 )
  {
    if ( a5 == 1 )
    {
      if ( sub_5D92C((_DWORD *)a1, *(unsigned __int8 *)(*(_DWORD *)(a1 + 296) + a8), 256, &v14, &v15) == 1 )
      {
        v13 = HIBYTE(v14);
        if ( *(_DWORD *)(a1 + 320) == 1 )
          v13 = HIBYTE(v14) - 64;
        v12 = v13 - 6;
        *a3 = v15;
      }
      else
      {
        v12 = -6;
      }
      *a2 = v12;
    }
  }
  else
  {
    sub_5D5B8((char *)(a1 + 140), a2, a3, a8);
  }
  return 0;
}
