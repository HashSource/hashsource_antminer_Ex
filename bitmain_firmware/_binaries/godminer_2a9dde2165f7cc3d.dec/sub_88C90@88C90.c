int __fastcall sub_88C90(int a1, int a2)
{
  float v2; // s0
  __int16 v3; // r3
  unsigned int *v5; // r0
  int v6; // r0
  int v7; // r4
  unsigned int v9; // [sp+3Ch] [bp-1038h] BYREF
  _DWORD v10[2]; // [sp+40h] [bp-1034h] BYREF
  int v11; // [sp+48h] [bp-102Ch]
  int v12; // [sp+4Ch] [bp-1028h]
  int v13; // [sp+50h] [bp-1024h] BYREF
  _BYTE v14[4100]; // [sp+70h] [bp-1004h] BYREF

  v3 = 0;
  v11 = 0;
  v10[1] = 0;
  v12 = 0;
  v9 = 0;
  v10[0] = 0;
  if ( !a2 )
    v3 = 8;
  LOBYTE(v11) = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      HIWORD(v11) = 12;
  }
  else
  {
    HIWORD(v11) = v3;
  }
  v5 = sub_882E4(&v9);
  v10[0] = v9;
  V_LOCK(v5);
  V_INT((int)&v13, "chain");
  v6 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_freq_KDA_2110",
    25,
    638,
    40,
    v14);
  if ( v2 <= 0.0 )
    v7 = -1;
  else
    v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v10);
  usleep(0x2710u);
  return v7;
}
