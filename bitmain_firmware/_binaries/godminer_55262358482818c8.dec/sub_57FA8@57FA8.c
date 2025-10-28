int sub_57FA8()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "nonce retired");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/dhash_content/eth_2282/eth_2282/eth_2282_content.c",
    181,
    "nonce_pop_handler_eth_2282",
    26,
    105,
    80,
    v1);
  return 1;
}
