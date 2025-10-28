int __fastcall get_count_sync(int a1, int a2)
{
  int v4; // r3
  int v5; // r1
  char *v6; // r11
  int v7; // r0
  int v8; // r10
  int v9; // r9
  char *v10; // r6
  char *v11; // r4
  int v12; // lr
  int v13; // r12
  int v14; // r1
  char v16[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = -17388;
  HIWORD(v4) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw(v16, 0x1000u, 0, v4, "get_count_sync");
  V_UNLOCK();
  LOWORD(v5) = -17724;
  HIWORD(v5) = (unsigned int)&unk_16BAAC >> 16;
  zlog(g_zc, v5, 174, "get_count_sync", 14, 209, 20, v16);
  v6 = (char *)malloc(0x600u);
  v7 = sub_79540(a1, a2, 202, v6);
  if ( v7 > 0 )
  {
    LOWORD(v8) = -17104;
    LOWORD(v9) = -17724;
    v10 = &v6[12 * v7];
    v11 = v6;
    do
    {
      V_LOCK();
      v12 = *(_DWORD *)v11;
      HIWORD(v8) = (unsigned int)"resp value %04x" >> 16;
      v13 = (unsigned __int8)v11[4];
      v14 = *((unsigned __int16 *)v11 + 3);
      v11 += 12;
      logfmt_raw(v16, 0x1000u, 0, v8, v13, (unsigned __int8)*(v11 - 4), v14, v12);
      V_UNLOCK();
      HIWORD(v9) = (unsigned int)&unk_16BAAC >> 16;
      zlog(g_zc, v9, 174, "get_count_sync", 14, 215, 20, v16);
    }
    while ( v11 != v10 );
  }
  free(v6);
  return 0;
}
