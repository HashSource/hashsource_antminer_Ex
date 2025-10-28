int __fastcall set_chain_isl_voltage(unsigned __int8 a1, int a2)
{
  _DWORD *v2; // r10
  int v3; // r9
  unsigned __int8 v4; // r7
  int v5; // r6
  int v6; // r5
  char v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v12; // [sp+28h] [bp-101Ch]
  unsigned int v13; // [sp+30h] [bp-1014h]
  char v14; // [sp+3Bh] [bp-1009h] BYREF
  __int16 v15; // [sp+3Ch] [bp-1008h] BYREF
  unsigned __int16 v16; // [sp+3Eh] [bp-1006h] BYREF
  _BYTE v17[4100]; // [sp+40h] [bp-1004h] BYREF

  LOWORD(v2) = (unsigned __int16)&g_zc;
  v12 = 0;
  v13 = a2 - 810;
  if ( (unsigned int)(a2 - 810) > 0xB4 )
    v3 = 900;
  else
    v3 = a2;
  v4 = a1;
  HIWORD(v2) = (unsigned int)&g_zc >> 16;
  v5 = 80;
  if ( v13 > 0xB4 )
    goto LABEL_11;
  while ( 1 )
  {
    LOBYTE(v6) = 4;
    v16 = 0;
    do
    {
      v14 = -1;
      sub_BAC40(v4, v5, 0, &v14, 1);
      usleep((__useconds_t)&stru_1869C.st_value);
      v15 = v3;
      sub_BAC40(v4, v5, 33, (char *)&v15, 2);
      usleep((__useconds_t)sub_30D40);
      v7 = sub_BB140(v4, v5, &v16);
      if ( v16 >= v3 - 9 && v16 <= v3 + 9 )
        break;
      V_LOCK(v7);
      v8 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        *v2,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/drv_pic/isl68127.c",
        168,
        "ISL_set_voltage_dynamic",
        23,
        181,
        60,
        v17);
      v7 = usleep((__useconds_t)sub_30D40);
      v6 = (unsigned __int8)(v6 - 1);
    }
    while ( v6 );
    V_LOCK(v7);
    v9 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v9);
    ++v12;
    a1 = zlog(
           *v2,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmine"
           "r-origin_godminer-new/backend/device/hal/drv_pic/isl68127.c",
           168,
           "set_chain_isl_voltage",
           21,
           215,
           60,
           v17);
    if ( v12 == 3 )
      break;
    v5 = (unsigned __int8)aPqt[v12];
    if ( v13 > 0xB4 )
    {
LABEL_11:
      V_LOCK(a1);
      v10 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        *v2,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/drv_pic/isl68127.c",
        168,
        "ISL_set_voltage_dynamic",
        23,
        154,
        60,
        v17);
    }
  }
  return 1;
}
