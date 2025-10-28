int __fastcall check_tx_rx_status(int a1, int a2, unsigned __int8 *a3)
{
  int v4; // r0
  int v5; // r1
  unsigned __int8 *v6; // r3
  _DWORD *v7; // r4
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // r12
  int v14; // r2
  int v15; // r0
  unsigned __int8 *v17; // [sp+3Ch] [bp-1068h]
  _DWORD *ptr; // [sp+48h] [bp-105Ch]
  _DWORD v20[3]; // [sp+50h] [bp-1054h] BYREF
  __int16 v21; // [sp+5Ch] [bp-1048h]
  char v22; // [sp+5Eh] [bp-1046h] BYREF
  char v23[32]; // [sp+60h] [bp-1044h] BYREF
  int v24; // [sp+80h] [bp-1024h] BYREF
  _BYTE v25[4100]; // [sp+A0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v23, "chain");
  v17 = (unsigned __int8 *)v20;
  v4 = logfmt_raw((int)v25, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_tx_rx_status",
    18,
    8450,
    60,
    v25);
  ptr = malloc(0x600u);
  v5 = 235735561;
  v20[0] = 100991489;
  v20[1] = 235735561;
  v20[2] = 134677248;
  v21 = 3851;
  do
  {
    v6 = a3;
    v7 = ptr;
    if ( a3 == (unsigned __int8 *)255 )
      v6 = v17;
    else
      v5 = (int)a3;
    if ( a3 == (unsigned __int8 *)255 )
      v5 = *v6;
    v8 = sub_5C50C(a1, v5, 113, ptr);
    if ( v8 > 0 )
    {
      v9 = 3 * v8;
      v10 = &ptr[v9];
      do
      {
        if ( *v7 == -1 )
        {
          V_LOCK(v9);
          v15 = logfmt_raw((int)v25, 0x1000u);
          V_UNLOCK(v15);
          v12 = g_zc;
          v13 = 20;
          v14 = 8468;
        }
        else
        {
          V_LOCK(v9);
          V_INT((int)&v24, "chain");
          v11 = logfmt_raw((int)v25, 0x1000u);
          V_UNLOCK(v11);
          v12 = g_zc;
          v13 = 100;
          v14 = 8466;
        }
        v7 += 3;
        v9 = zlog(
               v12,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/backend_eth/backend_eth.c",
               154,
               "check_tx_rx_status",
               18,
               v14,
               v13,
               v25);
      }
      while ( v7 != v10 );
    }
    ++v17;
  }
  while ( v17 != (unsigned __int8 *)&v22 );
  free(ptr);
  return 0;
}
