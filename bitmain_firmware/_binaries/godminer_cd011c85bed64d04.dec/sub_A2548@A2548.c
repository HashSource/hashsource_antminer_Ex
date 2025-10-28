int __fastcall sub_A2548(int a1, char a2)
{
  int v3; // r0
  _DWORD v5[2]; // [sp+10h] [bp-1010h] BYREF
  char v6; // [sp+18h] [bp-1008h]
  char v7; // [sp+19h] [bp-1007h]
  unsigned __int16 v8; // [sp+1Ah] [bp-1006h]
  int v9; // [sp+1Ch] [bp-1004h]
  _BYTE v10[4096]; // [sp+20h] [bp-1000h] BYREF

  v6 = 0;
  v7 = a2;
  v5[1] = 0;
  v9 = 255;
  V_LOCK(a1);
  v3 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_grin29/backend_grin29.c",
    160,
    "open_33p_double_results_grin29",
    30,
    264,
    60,
    v10);
  v5[0] = 1;
  v8 = 2;
  if ( (*(int (__fastcall **)(int, _DWORD *))(a1 + 168))(a1, v5) < 0 )
  {
    printf("%s failed, reg:%02x, core_id:%d", "open_33p_double_results_grin29", v8, 0);
    return -1;
  }
  else
  {
    usleep(0x4E20u);
    return 0;
  }
}
