int __fastcall sub_1AE358(int a1, int a2, char a3, char a4)
{
  float v4; // s0
  _BYTE v10[72]; // [sp+4Ch] [bp-1048h] BYREF
  _DWORD s[4]; // [sp+104Ch] [bp-48h] BYREF
  unsigned int v12; // [sp+105Ch] [bp-38h] BYREF
  _DWORD v13[7]; // [sp+1060h] [bp-34h] BYREF
  int v14; // [sp+107Ch] [bp-18h]
  float v15; // [sp+1080h] [bp-14h]
  int v16; // [sp+1084h] [bp-10h]

  v12 = 0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = a3;
  BYTE1(s[2]) = a4;
  if ( a2 )
  {
    if ( a2 == 1 )
      HIWORD(s[2]) = 12;
  }
  else
  {
    HIWORD(s[2]) = 8;
  }
  sub_1ADABC(&v12);
  v15 = v4;
  s[0] = v12;
  V_LOCK();
  sub_1A9DE8((int)v13, *(int *)(a1 + 272));
  logfmt_raw(
    v10,
    0x1000u,
    0,
    v14,
    v13[0],
    v13[1],
    v13[2],
    v13[3],
    v13[4],
    v13[5],
    v13[6],
    v14,
    "KAS_set pll_no %d freq: %.2f, expected freq: %.2f",
    a2,
    v15,
    v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_freq_kas_RVN",
    24,
    763,
    40,
    v10);
  v16 = -1;
  if ( v15 > 0.0 )
    v16 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
  usleep(0x2710u);
  return v16;
}
