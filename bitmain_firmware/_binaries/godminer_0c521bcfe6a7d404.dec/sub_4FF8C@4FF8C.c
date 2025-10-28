int __fastcall sub_4FF8C(int a1)
{
  int v1; // r0
  _BYTE v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/dhash_content/eth/eth_2282/eth_2282_content.c",
    176,
    "nonce_pop_handler_eth_2282",
    26,
    105,
    80,
    v3);
  return 1;
}
