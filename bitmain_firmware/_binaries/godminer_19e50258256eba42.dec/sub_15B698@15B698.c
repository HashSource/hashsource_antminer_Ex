int __fastcall sub_15B698(int a1, __int16 a2, __int16 a3, int a4, _BYTE *a5)
{
  int v5; // r3
  unsigned int v6; // r0
  int v8; // [sp+4h] [bp-1098h]
  char v11; // [sp+3Ah] [bp-1062h]
  _BYTE v13[24]; // [sp+44h] [bp-1058h] BYREF
  int v14; // [sp+1044h] [bp-58h] BYREF
  _WORD s[8]; // [sp+1048h] [bp-54h] BYREF
  _DWORD v16[7]; // [sp+1058h] [bp-44h] BYREF
  int v17; // [sp+1074h] [bp-28h]
  int v18; // [sp+107Ch] [bp-20h]
  _DWORD *v19; // [sp+1080h] [bp-1Ch]
  int i; // [sp+1084h] [bp-18h]
  int v21; // [sp+1088h] [bp-14h]
  int v22; // [sp+108Ch] [bp-10h]

  v11 = a2;
  v21 = 0;
  v22 = *(_DWORD *)(a1 + 464);
  if ( a2 == 255 )
    v22 = -*(_DWORD *)(a1 + 464);
  V_LOCK();
  sub_151C00((int)v16, *(int *)(a1 + 272));
  logfmt_raw(
    v13,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    "%s core_num %d",
    "ChipSetting_check_2282_fake_dag_reg_HNS_2130",
    v22);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_check_2282_fake_dag_reg_HNS_2130",
    44,
    1603,
    20,
    v13);
  memset(s, 0, sizeof(s));
  s[4] = 1;
  v19 = malloc(12 * v22);
  s[5] = a3;
  LOBYTE(s[6]) = v11;
  memset(a5, 0, 0x450u);
  v14 = 0;
  v18 = (*(int (__fastcall **)(int, _WORD *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 336))(
          a1,
          s,
          v22,
          v19,
          &v14,
          v8,
          9000,
          0);
  if ( !v18 && v22 == v14 )
  {
    for ( i = 0; ; ++i )
    {
      v5 = v22;
      if ( i >= v22 )
        break;
      if ( a4 != sub_151FE4(v19[3 * i]) )
      {
        V_LOCK();
        v6 = sub_151FE4(v19[3 * i]);
        logfmt_raw(v13, 0x1000u, 0, "check_2282_core_reg check failed for %08x-%08x", v6, a4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_check_2282_fake_dag_reg_HNS_2130",
          44,
          1622,
          40,
          v13);
        return v5;
      }
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "check_2282_core_reg check succeed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_check_2282_fake_dag_reg_HNS_2130",
        44,
        1625,
        40,
        v13);
      if ( i == v22 - 1 )
      {
        *a5 = 1;
        return v18;
      }
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "check_2282_core_reg read failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_check_2282_fake_dag_reg_HNS_2130",
      44,
      1616,
      40,
      v13);
    return v18;
  }
  return v5;
}
