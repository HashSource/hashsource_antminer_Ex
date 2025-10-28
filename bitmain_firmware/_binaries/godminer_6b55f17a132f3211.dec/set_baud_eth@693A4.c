int __fastcall set_baud_eth(int a1, int a2)
{
  int v3; // r9
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r4
  _DWORD v9[4]; // [sp+28h] [bp-1054h] BYREF
  _BYTE v10[32]; // [sp+38h] [bp-1044h] BYREF
  int v11; // [sp+58h] [bp-1024h] BYREF
  _BYTE v12[4100]; // [sp+78h] [bp-1004h] BYREF

  if ( (_UNKNOWN *)a2 == (_UNKNOWN *)((char *)&loc_FE500 + 2) )
    goto LABEL_17;
  if ( a2 > (int)&loc_FE500 + 2 )
  {
    if ( a2 == 1562500 )
      goto LABEL_18;
    if ( a2 > 1562500 )
    {
      if ( a2 == 3000000 || a2 == 3125000 )
      {
        v3 = -65536;
        goto LABEL_8;
      }
      goto LABEL_10;
    }
    if ( (_UNKNOWN *)a2 == &unk_16E360 )
    {
LABEL_18:
      v3 = -65535;
      goto LABEL_8;
    }
LABEL_10:
    v3 = -65510;
    goto LABEL_8;
  }
  if ( a2 == 460800 )
  {
    v3 = -65530;
    goto LABEL_8;
  }
  if ( a2 == 921600 )
  {
LABEL_17:
    v3 = -65534;
    goto LABEL_8;
  }
  if ( a2 != 38400 )
    goto LABEL_10;
  v3 = -65456;
LABEL_8:
  V_LOCK(a1);
  V_INT((int)v10, "chain");
  v4 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v4);
  v5 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
         170,
         "set_baud_eth",
         12,
         1112,
         60,
         v12);
  v9[2] = 3145729;
  v9[1] = 0;
  v9[0] = v3;
  v9[3] = 0;
  V_LOCK(v5);
  V_INT((int)&v11, "chain");
  v6 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/chip_setting.c",
    149,
    "ChipSetting_misc_ctrl_ETH",
    25,
    200,
    40,
    v12);
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 228))(a1, v9);
  usleep(0x2710u);
  return v7;
}
