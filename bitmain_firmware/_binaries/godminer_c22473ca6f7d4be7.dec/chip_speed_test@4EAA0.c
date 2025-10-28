int __fastcall chip_speed_test(_DWORD *a1, int a2)
{
  unsigned int v3; // r7
  int v4; // r11
  int v5; // r10
  int v6; // r9
  int v7; // r4
  _DWORD *v8; // r8
  unsigned int v9; // r1
  int v10; // r3
  unsigned int v11; // r4
  int v12; // r3
  int v13; // r3
  int v14; // r1
  int v15; // r12
  int result; // r0
  int v17; // r6
  int i; // r3
  int v19; // r1
  bool v20; // zf
  int v21; // r2
  char v23[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( (int)a1[49] <= 0 )
  {
    LOWORD(v8) = -14512;
    v11 = 0;
    HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
  }
  else
  {
    v3 = 0;
    LOWORD(v8) = -14512;
    LOWORD(v4) = 21272;
    LOWORD(v5) = 21256;
    LOWORD(v6) = 21296;
    v7 = 0;
    HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
    do
    {
      V_LOCK();
      HIWORD(v4) = (unsigned int)"voltage" >> 16;
      logfmt_raw(v23, 0x1000u, 0, v4, v7, *(_DWORD *)(a1[72] + 4 * v7));
      V_UNLOCK();
      HIWORD(v5) = (unsigned int)"set_voltage" >> 16;
      HIWORD(v6) = (unsigned int)"teps" >> 16;
      zlog(*v8, v6, 186, v5, 15, 26, 20, v23);
      v9 = a1[49];
      v10 = *(_DWORD *)(a1[72] + 4 * v7++);
      v3 += v10;
    }
    while ( (int)v9 > v7 );
    v11 = (v3 / v9) >> 3;
  }
  V_LOCK();
  LOWORD(v12) = 21484;
  HIWORD(v12) = (unsigned int)"ns/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/power_api.c" >> 16;
  logfmt_raw(v23, 0x1000u, 0, v12, v11);
  V_UNLOCK();
  LOWORD(v13) = 21256;
  LOWORD(v14) = 21296;
  HIWORD(v13) = (unsigned int)"set_voltage" >> 16;
  HIWORD(v14) = (unsigned int)"teps" >> 16;
  zlog(*v8, v14, 186, v13, 15, 40, 20, v23);
  v15 = a1[49];
  if ( v15 <= 0 )
    return 0;
  v17 = a1[75];
  result = 0;
  for ( i = 0; i < v15; ++i )
  {
    v19 = *(_DWORD *)(v17 + 4 * (i >> 5));
    v21 = v19 & (1 << (i & 0x1F));
    v20 = v21 == 0;
    if ( v21 )
      v21 = a1[72];
    else
      result = 3;
    *(_DWORD *)(a2 + 4 * i) = (v19 & (1 << (i & 0x1F))) == 0;
    if ( (v19 & (1 << (i & 0x1F))) != 0 )
      *(_DWORD *)(v21 + 4 * i) = 0;
    if ( !v20 )
      v15 = a1[49];
  }
  return result;
}
