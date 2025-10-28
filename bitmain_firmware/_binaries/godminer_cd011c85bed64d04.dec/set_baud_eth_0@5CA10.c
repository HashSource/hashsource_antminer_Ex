int __fastcall set_baud_eth_0(int a1, int a2)
{
  int v3; // r3
  int v4; // r0
  _DWORD v6[2]; // [sp+10h] [bp-1014h] BYREF
  char v7; // [sp+18h] [bp-100Ch]
  char v8; // [sp+19h] [bp-100Bh]
  __int16 v9; // [sp+1Ah] [bp-100Ah]
  int v10; // [sp+1Ch] [bp-1008h]
  _BYTE v11[4100]; // [sp+20h] [bp-1004h] BYREF

  v8 = 0;
  v10 = 0;
  v6[1] = 0;
  v7 = 1;
  v9 = 48;
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
  v6[0] = v3;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_misc_eth_ETH",
    24,
    275,
    60,
    v11);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 164))(a1, v6);
}
