int __fastcall setup_all_chip_ltc(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r8
  int v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r1
  char v9; // r3
  void (__fastcall *v10)(_DWORD *, int, int); // r3
  int v11; // r0
  int v12; // r5
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v17; // [sp+0h] [bp-1014h]
  _BYTE v18[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
         174,
         "setup_all_chip_ltc",
         18,
         577,
         40,
         v18);
  v4 = a1[76];
  V_LOCK(v3);
  v5 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    174,
    "setup_all_chip_ltc",
    18,
    580,
    60,
    v18);
  if ( !sub_8F674(a1) )
    return 12;
  v6 = a1[114];
  v7 = sub_12E050(256, (unsigned __int8)v4);
  if ( (_BYTE)v4 )
  {
    v8 = v6 - 1;
    v9 = 0;
    do
    {
      *(_BYTE *)++v8 = v9;
      v9 += v7;
    }
    while ( v6 - 1 + (unsigned __int8)v4 != v8 );
    v6 = a1[114];
  }
  v10 = (void (__fastcall *)(_DWORD *, int, int))a1[58];
  a1[99] = v7;
  v10(a1, v6, v4);
  sub_8D1D4((int)a1, 0);
  v11 = chip_setting_ticket_mask_ltc(a1, -1);
  if ( (int)a1[77] > 0 )
  {
    v12 = 0;
    do
    {
      v17 = v12++;
      v11 = chip_setting_working_mode_ltc(a1, 1, 0, 0, v17, 255);
    }
    while ( a1[77] > v12 );
  }
  a1[108] = 900;
  V_LOCK(v11);
  v13 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    174,
    "setup_all_chip_ltc",
    18,
    649,
    60,
    v18);
  v14 = sub_8F674(a1);
  if ( !v14 )
    return 12;
  V_LOCK(v14);
  v15 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    174,
    "setup_all_chip_ltc",
    18,
    653,
    40,
    v18);
  return 0;
}
