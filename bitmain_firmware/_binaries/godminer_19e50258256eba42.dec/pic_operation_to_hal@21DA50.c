int __fastcall pic_operation_to_hal(int a1, int a2, unsigned int a3, void *a4)
{
  int is_pic_mcu_en; // r3
  _BYTE v10[8]; // [sp+24h] [bp-1008h] BYREF
  int flash; // [sp+1024h] [bp-8h]

  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( is_pic_mcu_en )
  {
    flash = -1;
    if ( a2 == 51 )
    {
      flash = pic1704_write_flash(g_chain_info[2 * a1], a4, a3, HIWORD(a3));
      if ( flash != 1 )
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "chain %d, pic1704_write_flash failed!!!", g_chain_info[2 * a1]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/platform_device_hal.c",
          164,
          "pic_operation_to_hal",
          20,
          580,
          100,
          v10);
      }
    }
    else if ( a2 == 52 )
    {
      flash = pic1704_read_flash(g_chain_info[2 * a1], a4, a3, HIWORD(a3));
      if ( flash != 1 )
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "chain %d, pic1704_read_flash failed!!!", g_chain_info[2 * a1]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/platform_device_hal.c",
          164,
          "pic_operation_to_hal",
          20,
          588,
          100,
          v10);
      }
    }
    return flash;
  }
  return is_pic_mcu_en;
}
