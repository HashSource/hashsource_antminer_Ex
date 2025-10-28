int __fastcall read_sensor_temp_remote_dcr(int a1, int *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v12; // r3
  int v13; // r2
  int v14; // [sp+8h] [bp-8h] BYREF
  int v15; // [sp+Ch] [bp-4h] BYREF

  if ( a5 )
  {
    if ( a5 == 1 && sub_5C188((_DWORD *)a1, *(unsigned __int8 *)(*(_DWORD *)(a1 + 304) + a8), 256, &v14, &v15) == 1 )
    {
      v12 = HIBYTE(v14);
      v13 = v15;
      if ( *(_DWORD *)(a1 + 328) == 1 )
        v12 = HIBYTE(v14) - 64;
      *a2 = v12;
      *a3 = v13;
    }
  }
  else
  {
    sub_5B7B8((unsigned __int8 *)(a1 + 148), a2, a3, a8);
  }
  return 0;
}
