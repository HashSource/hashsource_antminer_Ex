int __fastcall sub_B2AF8(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
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
  int v16; // r0
  int v17; // r12
  int v18; // r5
  unsigned __int8 *v19; // r4
  int v20; // t1
  int v21; // r3
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r4
  int v28; // r0
  int v29; // [sp+0h] [bp-850h]
  int v32; // [sp+28h] [bp-828h]
  unsigned __int8 *v34; // [sp+38h] [bp-818h]
  unsigned __int8 *v35; // [sp+3Ch] [bp-814h]
  unsigned __int8 *v36; // [sp+40h] [bp-810h]
  unsigned __int8 *v37; // [sp+44h] [bp-80Ch]
  char v38; // [sp+4Fh] [bp-801h] BYREF
  char s[2048]; // [sp+50h] [bp-800h] BYREF
  _BYTE v40[4080]; // [sp+850h] [bp+0h] BYREF

  v38 = 0;
  pthread_mutex_lock(&power_mutex);
  v32 = 0;
  v34 = &a4[a5 - 1];
  v35 = &a4[a5 - 2];
  v37 = a4 + 1;
  v36 = a4 - 3;
  while ( 1 )
  {
    LOBYTE(v7) = 0;
    v8 = 0;
    do
    {
      v7 = (unsigned __int8)(v7 + 1);
      iic_write_reg(a1, (int)&v38, 1, (int)&a2[v8], 1);
      v8 = v7;
    }
    while ( v7 < a3 );
    LOBYTE(v9) = 0;
    usleep((__useconds_t)&loc_61A80);
    v10 = 0;
    do
    {
      v9 = (unsigned __int8)(v9 + 1);
      iic_read_reg(a1, (int)&v38, 1, (int)&a4[v10], 1);
      v10 = v9;
    }
    while ( v9 < a5 );
    usleep((__useconds_t)&stru_1869C.st_value);
    v11 = v37;
    LOWORD(v12) = 0;
    do
    {
      v13 = *++v11;
      v12 = (unsigned __int16)(v12 + v13);
    }
    while ( &v36[a5] != v11 );
    if ( v12 != (unsigned __int16)(*v35 + (*v34 << 8)) )
    {
      v14 = snprintf(
              s,
              0x800u,
              "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x",
              v12,
              (unsigned __int16)(*v35 + (*v34 << 8)));
      V_LOCK(v14);
      v15 = logfmt_raw((int)v40, 0x1000u);
      V_UNLOCK(v15);
      v16 = g_zc;
      v17 = 118;
      goto LABEL_10;
    }
    if ( *a2 == *a4 && a2[1] == a4[1] && a2[3] == a4[3] && a5 == a4[2] + 2 )
      break;
    strcpy(s, "power reply the bad data");
    V_LOCK(*(_DWORD *)"bad data");
    v28 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v28);
    v16 = g_zc;
    v17 = 124;
LABEL_10:
    v18 = 0;
    zlog(
      v16,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      176,
      "check_read_back_data",
      20,
      v17,
      20,
      v40);
    v19 = a4 - 1;
    do
    {
      v20 = *++v19;
      v21 = v18++;
      v22 = snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v21, v20);
      V_LOCK(v22);
      v23 = logfmt_raw((int)v40, 0x1000u);
      V_UNLOCK(v23);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        176,
        "check_read_back_data",
        20,
        130,
        20,
        v40);
    }
    while ( &a4[a5 - 1] != v19 );
    v29 = v32++;
    v24 = snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d", a2[3], v29);
    V_LOCK(v24);
    v25 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      176,
      "exec_power_cmd",
      14,
      224,
      20,
      v40);
    if ( v32 == 3 )
    {
      v26 = -2147482880;
      goto LABEL_14;
    }
  }
  v26 = 0;
LABEL_14:
  pthread_mutex_unlock(&power_mutex);
  return v26;
}
