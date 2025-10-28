int __fastcall overclock_update_eth_2282(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // r6
  unsigned int v5; // r0
  int v6; // r4
  int v7; // r5
  int v8; // r6
  int v9; // r3
  _BYTE v13[44]; // [sp+30h] [bp-196Ch] BYREF
  _WORD v14[128]; // [sp+1030h] [bp-96Ch] BYREF
  char v15[2048]; // [sp+1130h] [bp-86Ch] BYREF
  _DWORD v16[7]; // [sp+1930h] [bp-6Ch] BYREF
  int v17; // [sp+194Ch] [bp-50h]
  _DWORD v18[7]; // [sp+1950h] [bp-4Ch] BYREF
  int v19; // [sp+196Ch] [bp-30h]
  int v20; // [sp+1974h] [bp-28h]
  void *ptr; // [sp+1978h] [bp-24h]
  int k; // [sp+197Ch] [bp-20h]
  int j; // [sp+1980h] [bp-1Ch]
  int i; // [sp+1984h] [bp-18h]

  memset(v15, 0, sizeof(v15));
  memset(v14, 0, sizeof(v14));
  if ( !timeout_reg_done[*(_DWORD *)(a1 + 272)] )
  {
    V_LOCK();
    sub_FBD60((int)v16, *(int *)(a1 + 272));
    logfmt_raw(
      v13,
      0x1000u,
      0,
      v17,
      v16[0],
      v16[1],
      v16[2],
      v16[3],
      v16[4],
      v16[5],
      v16[6],
      v17,
      "%s...",
      "overclock_update_eth_2282",
      a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "overclock_update_eth_2282",
      25,
      2641,
      40,
      v13);
    sub_106D34(a1, 35, 1);
    sub_106D34(a1, 36, 32);
  }
  ptr = malloc(0x1440u);
  if ( ptr )
  {
    v20 = sub_1075C0(a1, 255, 37, ptr);
    V_LOCK();
    sub_FBD60((int)v18, *(int *)(a1 + 272));
    logfmt_raw(
      v13,
      0x1000u,
      0,
      v19,
      v18[0],
      v18[1],
      v18[2],
      v18[3],
      v18[4],
      v18[5],
      v18[6],
      v19,
      "get time out cnt resp: %d",
      v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "overclock_update_eth_2282",
      25,
      2650,
      20,
      v13);
    for ( i = 0; i < v20; ++i )
    {
      V_LOCK();
      v2 = *((unsigned __int8 *)ptr + 12 * i + 4);
      v3 = *((unsigned __int8 *)ptr + 12 * i + 8);
      v4 = *((unsigned __int16 *)ptr + 6 * i + 3);
      v5 = sub_FC76C(*((_DWORD *)ptr + 3 * i));
      logfmt_raw(v13, 0x1000u, 0, "asic %02x, core %02x, reg %04x error cnt: %08x", v2, v3, v4, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "overclock_update_eth_2282",
        25,
        2653,
        20,
        v13);
      v6 = *(_DWORD *)(a1 + 272);
      v7 = *((unsigned __int8 *)ptr + 12 * i + 4);
      v8 = *((unsigned __int8 *)ptr + 12 * i + 8);
      time_out_overflow[432 * v6 + 72 * v7 + v8] = sub_FC76C(*((_DWORD *)ptr + 3 * i));
    }
  }
  for ( j = 0; j <= 5; ++j )
  {
    for ( k = 0; k <= 71; ++k )
    {
      sprintf((char *)v14, "%08x ", time_out_overflow[432 * *(_DWORD *)(a1 + 272) + 72 * j + k]);
      strcat(v15, (const char *)v14);
      v9 = k & 7;
      if ( k <= 0 )
        v9 = -(-k & 7);
      if ( v9 == 7 )
      {
        v14[0] = 10;
        strcat(v15, (const char *)v14);
      }
    }
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "\n%s", v15);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "overclock_update_eth_2282",
      25,
      2667,
      20,
      v13);
    memset(v15, 0, sizeof(v15));
    memset(v14, 0, sizeof(v14));
  }
  if ( ptr )
    free(ptr);
  return 0;
}
