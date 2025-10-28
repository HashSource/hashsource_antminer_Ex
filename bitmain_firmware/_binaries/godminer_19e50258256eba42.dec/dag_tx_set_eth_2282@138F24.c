int __fastcall dag_tx_set_eth_2282(int a1)
{
  _BYTE v3[56]; // [sp+34h] [bp-1038h] BYREF
  int v4; // [sp+1034h] [bp-38h] BYREF
  _DWORD v5[7]; // [sp+1038h] [bp-34h] BYREF
  int v6; // [sp+1054h] [bp-18h]
  int v7; // [sp+1058h] [bp-14h]
  void *ptr; // [sp+105Ch] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v5, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "%s...", "dag_tx_set_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "dag_tx_set_eth_2282",
    19,
    8654,
    60,
    v3);
  ptr = malloc(0x1440u);
  v4 = 0;
  high_speed_uart_set_config(30, 0, &v4);
  usleep(0x64u);
  sub_106BA8(a1, 28, 202383121);
  sub_106D34(a1, 9, 65565);
  sub_1075C0(a1, 0, 9, ptr);
  sub_106D34(a1, 15, 3);
  sub_1075C0(a1, 0, 15, ptr);
  sub_106D34(a1, 207, 0);
  sub_1075C0(a1, 0, 207, ptr);
  sub_106D34(a1, 28, 2);
  v7 = 0;
  sub_FC8A4(a1, 0, dword_5A8C38);
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "[DAG SET] chip-%02x node_index-%d", v7, dword_5A8C38);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "dag_tx_set_eth_2282",
    19,
    8680,
    60,
    v3);
  if ( ptr )
    free(ptr);
  return 0;
}
