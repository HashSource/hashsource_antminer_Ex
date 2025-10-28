int __fastcall sub_B6918(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned int v7; // r4
  unsigned int v8; // r3
  unsigned int v9; // r4
  unsigned int v10; // r3
  unsigned __int8 *v11; // r1
  int v12; // r3
  __int16 v13; // t1
  unsigned __int8 *v14; // r4
  int v15; // r5
  int v16; // t1
  int v17; // r3
  int v18; // r4
  int v20; // [sp+0h] [bp-850h]
  int v23; // [sp+28h] [bp-828h]
  unsigned __int8 *v25; // [sp+38h] [bp-818h]
  unsigned __int8 *v26; // [sp+3Ch] [bp-814h]
  unsigned __int8 *v27; // [sp+40h] [bp-810h]
  unsigned __int8 *v28; // [sp+44h] [bp-80Ch]
  char v29; // [sp+4Fh] [bp-801h] BYREF
  char s[2048]; // [sp+50h] [bp-800h] BYREF
  char v31[4080]; // [sp+850h] [bp+0h] BYREF

  v29 = 0;
  v23 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&power_mutex);
  v25 = &a4[a5 - 1];
  v26 = &a4[a5 - 2];
  v28 = a4 + 1;
  v27 = a4 - 3;
  while ( 1 )
  {
    LOBYTE(v7) = 0;
    v8 = 0;
    do
    {
      v7 = (unsigned __int8)(v7 + 1);
      iic_write_reg(a1, &v29, 1, (int)&a2[v8], 1);
      v8 = v7;
    }
    while ( v7 < a3 );
    LOBYTE(v9) = 0;
    usleep((__useconds_t)&loc_61A80);
    v10 = 0;
    do
    {
      v9 = (unsigned __int8)(v9 + 1);
      iic_read_reg(a1, (int)&v29, 1, (int)&a4[v10], 1);
      v10 = v9;
    }
    while ( v9 < a5 );
    usleep((__useconds_t)&stru_18694.st_info);
    v11 = v28;
    LOWORD(v12) = 0;
    do
    {
      v13 = *++v11;
      v12 = (unsigned __int16)(v12 + v13);
    }
    while ( &v27[a5] != v11 );
    if ( v12 != (unsigned __int16)(*v26 + (*v25 << 8)) )
    {
      snprintf(
        s,
        0x800u,
        "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n",
        v12,
        (unsigned __int16)(*v26 + (*v25 << 8)));
      V_LOCK();
      logfmt_raw(v31, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "check_read_back_data",
        20,
        88,
        100,
        v31);
      goto LABEL_10;
    }
    if ( *a2 == *a4 && a2[1] == a4[1] && a2[3] == a4[3] && a5 == a4[2] + 2 )
      break;
    strcpy(s, "power reply the bad data\n");
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "check_read_back_data",
      20,
      94,
      100,
      v31);
LABEL_10:
    v14 = a4 - 1;
    v15 = 0;
    do
    {
      v16 = *++v14;
      v17 = v15++;
      snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v17, v16);
      V_LOCK();
      logfmt_raw(v31, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "check_read_back_data",
        20,
        100,
        100,
        v31);
    }
    while ( &a4[a5 - 1] != v14 );
    v20 = v23++;
    snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d\n", a2[3], v20);
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "exec_power_cmd",
      14,
      175,
      100,
      v31);
    if ( v23 == 3 )
    {
      v18 = -2147482880;
      goto LABEL_14;
    }
  }
  v18 = 0;
LABEL_14:
  pthread_mutex_unlock((pthread_mutex_t *)&power_mutex);
  return v18;
}
