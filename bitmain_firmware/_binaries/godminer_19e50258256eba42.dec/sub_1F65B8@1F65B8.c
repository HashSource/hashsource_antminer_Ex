unsigned int *__fastcall sub_1F65B8(unsigned int *result)
{
  unsigned int *v1; // [sp+14h] [bp-1810h]
  char v2[2048]; // [sp+18h] [bp-180Ch] BYREF
  _BYTE v3[12]; // [sp+818h] [bp-100Ch] BYREF
  unsigned int j; // [sp+1818h] [bp-Ch]
  unsigned int i; // [sp+181Ch] [bp-8h]

  v1 = result;
  if ( result )
  {
    strcpy(v2, "==================capability start==================");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
      180,
      "platform_dump_capability",
      24,
      43,
      20,
      v3);
    snprintf(v2, 0x800u, "board num = %d", *v1);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
      180,
      "platform_dump_capability",
      24,
      44,
      20,
      v3);
    for ( i = 0; *v1 > i; ++i )
    {
      snprintf(v2, 0x800u, "board id = %d, chain num = %d", v1[18 * i + 1], v1[18 * i + 2]);
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
        180,
        "platform_dump_capability",
        24,
        48,
        20,
        v3);
      for ( j = 0; v1[18 * i + 2] > j; ++j )
      {
        snprintf(v2, 0x800u, "\tchain id = %d", v1[18 * i + 3 + j]);
        V_LOCK();
        logfmt_raw(v3, 0x1000u, 0, v2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
          180,
          "platform_dump_capability",
          24,
          50,
          20,
          v3);
      }
    }
    strcpy(v2, "==================capability end==================");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    return (unsigned int *)zlog(
                             g_zc,
                             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/releas"
                             "e/build/godminer-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
                             180,
                             "platform_dump_capability",
                             24,
                             54,
                             20,
                             v3);
  }
  return result;
}
