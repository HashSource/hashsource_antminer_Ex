int __fastcall sub_166C50(int a1, char a2, int a3)
{
  float v3; // s0
  int v5; // [sp+24h] [bp-1070h]
  _BYTE v9[72]; // [sp+4Ch] [bp-1048h] BYREF
  _DWORD s[4]; // [sp+104Ch] [bp-48h] BYREF
  unsigned int v11; // [sp+105Ch] [bp-38h] BYREF
  _DWORD v12[7]; // [sp+1060h] [bp-34h] BYREF
  int v13; // [sp+107Ch] [bp-18h]
  int v14; // [sp+1080h] [bp-14h]
  float v15; // [sp+1084h] [bp-10h]

  v11 = 0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 0;
  BYTE1(s[2]) = *(_DWORD *)(a1 + 468) * a2;
  if ( a3 )
  {
    if ( a3 == 1 )
      HIWORD(s[2]) = 12;
  }
  else
  {
    HIWORD(s[2]) = 8;
  }
  sub_1659E0(&v11);
  v15 = v3;
  s[0] = v11;
  V_LOCK();
  sub_1622D8((int)v12, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "set freq: %.2f, expected freq: %.2f",
    v5,
    v15,
    v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_one_asic_freq_KAS_2380",
    34,
    836,
    20,
    v9);
  v14 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
  usleep(0x2710u);
  return v14;
}
