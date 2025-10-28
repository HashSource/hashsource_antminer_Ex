int __fastcall cache_dag_done_check_rvn(int a1, int a2, int a3)
{
  __int16 v3; // r5
  int v5; // r3
  int v6; // r5
  int v7; // r1
  int v8; // r4
  int v9; // r1
  int v10; // r1
  void *src; // [sp+44h] [bp-1058h]
  void *dest; // [sp+54h] [bp-1048h]
  __int16 v16; // [sp+58h] [bp-1044h]
  _DWORD v17[2]; // [sp+68h] [bp-1034h] BYREF
  int v18; // [sp+70h] [bp-102Ch]
  int v19; // [sp+74h] [bp-1028h]
  char v20[4100]; // [sp+98h] [bp-1004h] BYREF

  v3 = a2;
  V_LOCK();
  LOWORD(v5) = -17388;
  HIWORD(v5) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  v16 = v3;
  LOWORD(v6) = 6472;
  logfmt_raw(v20, 0x1000u, 0, v5, "cache_dag_done_check_rvn");
  V_UNLOCK();
  LOWORD(v7) = 5292;
  HIWORD(v7) = (unsigned int)&unk_171494 >> 16;
  zlog(g_zc, v7, 174, "cache_dag_done_check_rvn", 24, 2656, 40, v20);
  dest = malloc(0x1800u);
  do
  {
    sleep(0xAu);
    v8 = *(_DWORD *)(a1 + 424);
    V_LOCK();
    HIWORD(v6) = (unsigned int)"ice ltc status error!" >> 16;
    logfmt_raw(v20, 0x1000u, 0, v6, "ChipSetting_get_cache_done_status_rvn_RVN", v8 << 6);
    V_UNLOCK();
    LOWORD(v9) = -26872;
    HIWORD(v9) = (unsigned int)"stdiv1:%d, postdiv2:%d" >> 16;
    zlog(g_zc, v9, 153, "ChipSetting_get_cache_done_status_rvn_RVN", 41, 1847, 40, v20);
    v17[0] = 0;
    v17[1] = 0;
    v18 = 0;
    v19 = 0;
    src = calloc(768 * v8, 1u);
    HIWORD(v18) = v16;
    (*(void (__fastcall **)(int, _DWORD *, int))(a1 + 300))(a1, v17, v8 << 6);
    if ( dest )
      memcpy(dest, src, 768 * v8);
    free(src);
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "%s resp_num: %d, work_mode: %d", "cache_dag_done_check_rvn", 0, a3);
    V_UNLOCK();
    LOWORD(v10) = 5292;
    HIWORD(v10) = (unsigned int)&unk_171494 >> 16;
    zlog(g_zc, v10, 174, "cache_dag_done_check_rvn", 24, 2671, 40, v20);
  }
  while ( a2 != 73 );
  return 0;
}
