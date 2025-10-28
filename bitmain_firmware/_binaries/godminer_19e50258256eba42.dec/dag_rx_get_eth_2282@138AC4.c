int __fastcall dag_rx_get_eth_2282(int a1)
{
  int v1; // r2
  _BYTE v4[60]; // [sp+30h] [bp-12BCh] BYREF
  char s[512]; // [sp+1030h] [bp-2BCh] BYREF
  _BYTE v6[128]; // [sp+1230h] [bp-BCh] BYREF
  _DWORD v7[7]; // [sp+12B0h] [bp-3Ch] BYREF
  int v8; // [sp+12CCh] [bp-20h]
  int v9; // [sp+12D0h] [bp-1Ch]
  int v10; // [sp+12D4h] [bp-18h]
  void *ptr; // [sp+12D8h] [bp-14h]
  unsigned int i; // [sp+12DCh] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v7, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "%s...", "dag_rx_get_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "dag_rx_get_eth_2282",
    19,
    8606,
    60,
    v4);
  ptr = malloc(0x1440u);
  sub_106BA8(a1, 28, 202383120);
  sub_106D34(a1, 76, 1);
  sub_106D34(a1, 192, 3874);
  sub_106D34(a1, 9, 65565);
  sub_1075C0(a1, 0, 9, ptr);
  sub_106D34(a1, 15, 3);
  sub_1075C0(a1, 0, 15, ptr);
  sub_106D34(a1, 207, 0);
  sub_1075C0(a1, 0, 207, ptr);
  sub_106D34(a1, 28, 2);
  sub_1075C0(a1, 0, 207, ptr);
  sub_1075C0(a1, 0, 180, ptr);
  memset(s, 0, sizeof(s));
  v10 = 0;
  dword_5A8C38 = 0;
  while ( dword_5A8C38 <= (unsigned int)&unk_8BFFFC )
  {
    v9 = 0;
    hashboard_reset_for_ltc(*(_DWORD *)(a1 + 272), 0);
    v1 = dword_5A8C38++;
    v10 = sub_FC7C4(a1, v9, v1, v6);
    if ( v10 )
    {
      for ( i = 0; i <= 0x7F; ++i )
        sprintf(&s[2 * i], "%02x", (unsigned __int8)v6[i]);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "[DAG GET] chip-%02x node_index-%d dag_data:%s", v9, dword_5A8C38, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "dag_rx_get_eth_2282",
        19,
        8640,
        60,
        v4);
      printf("[DAG GET] chip-%02x node_index-%d dag_data:%s\n", v9, dword_5A8C38, s);
    }
    memset(v6, 0, sizeof(v6));
    memset(s, 0, sizeof(s));
  }
  if ( ptr )
    free(ptr);
  return 0;
}
