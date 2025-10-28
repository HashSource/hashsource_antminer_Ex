int __fastcall set_baud_zec_1746(int a1, int a2)
{
  int v3; // r9
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r4
  _DWORD v9[4]; // [sp+28h] [bp-1034h] BYREF
  int v10; // [sp+38h] [bp-1024h] BYREF
  _BYTE v11[4100]; // [sp+58h] [bp-1004h] BYREF

  if ( (_UNKNOWN *)a2 != &unk_16E360 )
  {
    if ( a2 <= (int)&unk_16E360 )
    {
      if ( a2 == 460800 )
      {
        v3 = 26212;
        goto LABEL_9;
      }
      if ( a2 <= 460800 )
      {
        if ( a2 == 38400 )
        {
          v3 = 28772;
          goto LABEL_9;
        }
        goto LABEL_16;
      }
      if ( a2 == 921600 || a2 == 1041666 )
      {
        v3 = 25188;
        goto LABEL_9;
      }
LABEL_16:
      v3 = 31332;
      goto LABEL_9;
    }
    if ( a2 == 3125000 )
      goto LABEL_22;
    if ( a2 > 3125000 )
    {
      if ( a2 != 6250000 && a2 != 12500000 )
        goto LABEL_16;
LABEL_22:
      v3 = 24676;
      goto LABEL_9;
    }
    if ( a2 != 1562500 )
    {
      if ( a2 != 3000000 )
        goto LABEL_16;
      goto LABEL_22;
    }
  }
  v3 = 24932;
LABEL_9:
  V_LOCK(a1);
  v4 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v4);
  v5 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
         170,
         "set_baud_zec_1746",
         17,
         784,
         60,
         v11);
  v9[2] = 1835009;
  v9[0] = v3;
  v9[3] = 0;
  v9[1] = 0;
  V_LOCK(v5);
  V_INT((int)&v10, "chain");
  v6 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/chip_setting.c",
    149,
    "ChipSetting_misc_ctrl_ZEC_1746",
    30,
    200,
    40,
    v11);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 228))(a1, v9);
  usleep(0x2710u);
  if ( v7 )
    return 36;
  else
    return 0;
}
