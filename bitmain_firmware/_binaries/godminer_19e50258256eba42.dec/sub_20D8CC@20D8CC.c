int __fastcall sub_20D8CC(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int a3)
{
  char v7[2048]; // [sp+24h] [bp-1810h] BYREF
  _BYTE v8[16]; // [sp+824h] [bp-1010h] BYREF
  unsigned int i; // [sp+1824h] [bp-10h]
  unsigned __int16 v10; // [sp+1828h] [bp-Ch]
  unsigned __int16 v11; // [sp+182Ah] [bp-Ah]
  int v12; // [sp+182Ch] [bp-8h]

  i = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  if ( !a1 || !a2 || !a3 )
    return -2147482879;
  i = 2;
  v11 = 0;
  while ( a3 - 2 > i )
    v11 += a2[i++];
  v10 = (a2[a3 - 1] << 8) + a2[a3 - 2];
  if ( v11 == v10 )
  {
    if ( *a1 != *a2 || a1[1] != a2[1] || a1[3] != a2[3] || a3 != a2[2] + 2 )
    {
      strcpy(v7, "power reply the bad data");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "check_read_back_data",
        20,
        126,
        20,
        v8);
      v12 = -2147482880;
    }
  }
  else
  {
    snprintf(v7, 0x800u, "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x", v11, v10);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "check_read_back_data",
      20,
      120,
      20,
      v8);
    v12 = -2147482880;
  }
  if ( v12 )
  {
    for ( i = 0; a3 > i; ++i )
    {
      snprintf(v7, 0x800u, "read_back_data[%d] = 0x%02x", i, a2[i]);
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "check_read_back_data",
        20,
        132,
        20,
        v8);
    }
  }
  return v12;
}
