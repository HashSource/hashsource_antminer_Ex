int __fastcall sub_B69D8(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned int v7; // r4
  unsigned int v8; // r3
  unsigned int v9; // r4
  unsigned int v10; // r3
  unsigned __int8 *v11; // r1
  int v12; // r3
  __int16 v13; // t1
  int v14; // r0
  int v15; // r0
  unsigned __int8 *v16; // r4
  int v17; // r5
  int v18; // t1
  int v19; // r3
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r4
  int v26; // r0
  int v27; // [sp+0h] [bp-850h]
  int v30; // [sp+28h] [bp-828h]
  unsigned __int8 *v32; // [sp+38h] [bp-818h]
  unsigned __int8 *v33; // [sp+3Ch] [bp-814h]
  unsigned __int8 *v34; // [sp+40h] [bp-810h]
  unsigned __int8 *v35; // [sp+44h] [bp-80Ch]
  char v36; // [sp+4Fh] [bp-801h] BYREF
  char s[2048]; // [sp+50h] [bp-800h] BYREF
  _BYTE v38[4080]; // [sp+850h] [bp+0h] BYREF

  v36 = 0;
  v30 = 0;
  pthread_mutex_lock(&power_mutex);
  v32 = &a4[a5 - 1];
  v33 = &a4[a5 - 2];
  v35 = a4 + 1;
  v34 = a4 - 3;
  while ( 1 )
  {
    LOBYTE(v7) = 0;
    v8 = 0;
    do
    {
      v7 = (unsigned __int8)(v7 + 1);
      iic_write_reg(a1, (int)&v36, 1, (int)&a2[v8], 1);
      v8 = v7;
    }
    while ( v7 < a3 );
    LOBYTE(v9) = 0;
    usleep((__useconds_t)&loc_61A80);
    v10 = 0;
    do
    {
      v9 = (unsigned __int8)(v9 + 1);
      iic_read_reg(a1, (int)&v36, 1, (int)&a4[v10], 1);
      v10 = v9;
    }
    while ( v9 < a5 );
    usleep((__useconds_t)&stru_1869C.st_value);
    v11 = v35;
    LOWORD(v12) = 0;
    do
    {
      v13 = *++v11;
      v12 = (unsigned __int16)(v12 + v13);
    }
    while ( &v34[a5] != v11 );
    if ( v12 != (unsigned __int16)(*v33 + (*v32 << 8)) )
    {
      v14 = snprintf(
              s,
              0x800u,
              "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n",
              v12,
              (unsigned __int16)(*v33 + (*v32 << 8)));
      V_LOCK(v14);
      v15 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v15);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "check_read_back_data",
        20,
        90,
        100,
        v38);
      goto LABEL_10;
    }
    if ( *a2 == *a4 && a2[1] == a4[1] && a2[3] == a4[3] && a5 == a4[2] + 2 )
      break;
    strcpy(s, "power reply the bad data\n");
    V_LOCK(*(_DWORD *)"bad data\n");
    v26 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v26);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "check_read_back_data",
      20,
      96,
      100,
      v38);
LABEL_10:
    v16 = a4 - 1;
    v17 = 0;
    do
    {
      v18 = *++v16;
      v19 = v17++;
      v20 = snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v19, v18);
      V_LOCK(v20);
      v21 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v21);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "check_read_back_data",
        20,
        102,
        100,
        v38);
    }
    while ( &a4[a5 - 1] != v16 );
    v27 = v30++;
    v22 = snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d\n", a2[3], v27);
    V_LOCK(v22);
    v23 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "exec_power_cmd",
      14,
      177,
      100,
      v38);
    if ( v30 == 3 )
    {
      v24 = -2147482880;
      goto LABEL_14;
    }
  }
  v24 = 0;
LABEL_14:
  pthread_mutex_unlock(&power_mutex);
  return v24;
}
