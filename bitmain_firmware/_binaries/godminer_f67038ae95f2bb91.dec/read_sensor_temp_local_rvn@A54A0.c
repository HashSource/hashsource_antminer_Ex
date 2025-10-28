int __fastcall read_sensor_temp_local_rvn(
        _DWORD *a1,
        int *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v12; // r1
  int v14; // r3
  int v15; // r2
  int v16; // [sp+8h] [bp-8h] BYREF
  int v17; // [sp+Ch] [bp-4h] BYREF

  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v12 = *(unsigned __int8 *)(a1[122] + a9);
      *a3 = 0;
      *a2 = -64;
      if ( sub_A52E4(a1, v12, 0, &v16, &v17) == 1 )
      {
        v14 = HIBYTE(v16);
        v15 = v17;
        if ( a1[128] == 1 )
          v14 = HIBYTE(v16) - 64;
        *a2 = v14;
        *a3 = v15;
      }
    }
  }
  else
  {
    sub_A4A18((int)a1, a2, a3, a9);
  }
  return 0;
}
