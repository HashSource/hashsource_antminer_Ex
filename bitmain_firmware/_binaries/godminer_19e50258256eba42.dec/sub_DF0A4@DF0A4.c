int __fastcall sub_DF0A4(int a1, int a2)
{
  float v2; // s0
  _BYTE v6[72]; // [sp+4Ch] [bp-1048h] BYREF
  _DWORD s[4]; // [sp+104Ch] [bp-48h] BYREF
  unsigned int v8; // [sp+105Ch] [bp-38h] BYREF
  _DWORD v9[7]; // [sp+1060h] [bp-34h] BYREF
  int v10; // [sp+107Ch] [bp-18h]
  float v11; // [sp+1080h] [bp-14h]
  int v12; // [sp+1084h] [bp-10h]

  v8 = 0;
  memset(s, 0, sizeof(s));
  LOWORD(s[2]) = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      HIWORD(s[2]) = 12;
  }
  else
  {
    HIWORD(s[2]) = 8;
  }
  sub_DE03C(&v8);
  v11 = v2;
  s[0] = v8;
  V_LOCK();
  sub_DA978((int)v9, *(int *)(a1 + 272));
  logfmt_raw(
    v6,
    0x1000u,
    0,
    v10,
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v10,
    "set pll_no %d freq: %.2f, expected freq: %.2f",
    a2,
    v11,
    v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_freq_DASH_1766",
    26,
    814,
    40,
    v6);
  v12 = -1;
  if ( v11 > 0.0 )
    v12 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
  usleep(0x2710u);
  return v12;
}
