int __fastcall get_count_sync(int a1, int a2)
{
  int v4; // r3
  _DWORD *v5; // r8
  int v6; // r1
  char *v7; // r11
  int v8; // r0
  int v9; // r10
  int v10; // r9
  char *v11; // r6
  char *v12; // r4
  int v13; // lr
  int v14; // r12
  int v15; // r1
  char v17[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v5) = -14512;
  V_LOCK();
  LOWORD(v4) = -22412;
  HIWORD(v4) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v17, 0x1000u, 0, v4, "get_count_sync");
  V_UNLOCK();
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v6) = -25512;
  HIWORD(v6) = (unsigned int)"one" >> 16;
  zlog(*v5, v6, 154, "get_count_sync", 14, 294, 20, v17);
  v7 = (char *)malloc(0x600u);
  v8 = sub_5C3C4(a1, a2, 202, v7);
  if ( v8 > 0 )
  {
    LOWORD(v9) = -25168;
    LOWORD(v10) = -25512;
    v11 = &v7[12 * v8];
    v12 = v7;
    do
    {
      V_LOCK();
      v13 = *(_DWORD *)v12;
      HIWORD(v9) = (unsigned int)"t_autostop_one_lane" >> 16;
      v14 = (unsigned __int8)v12[4];
      v15 = *((unsigned __int16 *)v12 + 3);
      v12 += 12;
      logfmt_raw(v17, 0x1000u, 0, v9, v14, (unsigned __int8)*(v12 - 4), v15, v13);
      V_UNLOCK();
      HIWORD(v10) = (unsigned int)"one" >> 16;
      zlog(*v5, v10, 154, "get_count_sync", 14, 299, 20, v17);
    }
    while ( v12 != v11 );
  }
  free(v7);
  return 0;
}
