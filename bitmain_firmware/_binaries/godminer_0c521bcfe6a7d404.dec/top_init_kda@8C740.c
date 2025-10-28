int __fastcall top_init_kda(int a1)
{
  int v2; // r0
  int v3; // r9
  int v4; // r4
  int v5; // r0
  int v6; // r1
  char v7; // r3
  void (__fastcall *v8)(int, int, int); // r3
  int v9; // r0
  _DWORD v11[4]; // [sp+30h] [bp-1054h] BYREF
  _BYTE v12[32]; // [sp+40h] [bp-1044h] BYREF
  int v13; // [sp+60h] [bp-1024h] BYREF
  _BYTE v14[4100]; // [sp+80h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v12, "chain");
  v2 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
    174,
    "top_init_kda",
    12,
    462,
    40,
    v14);
  v3 = *(_DWORD *)(a1 + 304);
  v4 = *(_DWORD *)(a1 + 456);
  v5 = sub_12E060(256, (unsigned __int8)v3);
  if ( (_BYTE)v3 )
  {
    v6 = v4 - 1;
    v7 = 0;
    do
    {
      *(_BYTE *)++v6 = v7;
      v7 += v5;
    }
    while ( v6 != v4 - 1 + (unsigned __int8)v3 );
    v4 = *(_DWORD *)(a1 + 456);
  }
  v8 = *(void (__fastcall **)(int, int, int))(a1 + 232);
  *(_DWORD *)(a1 + 396) = v5;
  v8(a1, v4, v3);
  sub_88E10(a1, 0);
  v11[0] = 5381904;
  v11[2] = 1835009;
  v11[1] = 0;
  v11[3] = 0;
  V_LOCK(1);
  V_INT((int)&v13, "chain");
  v9 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_misc_ctrl_KDA_2110",
    30,
    218,
    40,
    v14);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v11);
  usleep(0x2710u);
  return 0;
}
