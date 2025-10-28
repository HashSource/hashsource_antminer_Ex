int __fastcall sub_B9D18(int a1, int a2, unsigned int a3, void *a4)
{
  int v4; // r4
  int flash; // r0
  int v7; // r0
  int v8; // r2
  int v9; // r0
  int v10; // r0
  _BYTE v11[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 == 51 )
  {
    v9 = pic1704_write_flash(g_chain_info[2 * a1], a4, a3, HIWORD(a3));
    v4 = v9;
    if ( v9 == 1 )
      return v4;
    V_LOCK(v9);
    v10 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v10);
    v8 = 584;
  }
  else
  {
    if ( a2 != 52 )
      return -1;
    flash = pic1704_read_flash(g_chain_info[2 * a1], a4, a3, HIWORD(a3));
    v4 = flash;
    if ( flash == 1 )
      return v4;
    V_LOCK(flash);
    v7 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v7);
    v8 = 592;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/platform_device_hal.c",
    167,
    "pic_operation_to_hal",
    20,
    v8,
    100,
    v11);
  return v4;
}
