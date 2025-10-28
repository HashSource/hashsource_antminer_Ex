int __fastcall set_baud_dash_0(int a1, int a2)
{
  int v2; // r7
  int v3; // r4
  int v4; // r0
  int v5; // r4
  _DWORD v7[4]; // [sp+30h] [bp-1034h] BYREF
  int v8; // [sp+40h] [bp-1024h] BYREF
  _BYTE v9[4100]; // [sp+60h] [bp-1004h] BYREF

  v7[2] = 6291457;
  v7[1] = 0;
  v2 = a1;
  v7[3] = 0;
  v7[0] = 0;
  if ( a2 == 1500000 )
    goto LABEL_24;
  if ( a2 <= 1500000 )
  {
    if ( a2 == 460800 )
    {
      v3 = 1568;
      goto LABEL_10;
    }
    if ( a2 > 460800 )
    {
      if ( a2 == 921600 || a2 == 1041666 )
      {
        v3 = 544;
        goto LABEL_10;
      }
    }
    else if ( a2 == 38400 )
    {
      v3 = 20512;
      goto LABEL_10;
    }
    goto LABEL_16;
  }
  if ( a2 == 3125000 )
  {
LABEL_23:
    v3 = 32;
    goto LABEL_10;
  }
  if ( a2 <= 3125000 )
  {
    if ( (_UNKNOWN *)a2 != &unk_17D784 )
    {
      if ( a2 != 3000000 )
        goto LABEL_16;
      goto LABEL_23;
    }
LABEL_24:
    v3 = 288;
    goto LABEL_10;
  }
  if ( a2 == 6250000 )
  {
    v3 = 289;
    goto LABEL_9;
  }
  if ( a2 != 12500000 )
  {
LABEL_16:
    v3 = 6688;
    goto LABEL_10;
  }
  v3 = 33;
LABEL_9:
  a1 = (*(int (__fastcall **)(int, int))(a1 + 188))(a1, 1);
LABEL_10:
  v7[0] = v3;
  V_LOCK(a1);
  V_INT((int)&v8, "chain");
  v4 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_fuart_cfg_DASH_1766",
    31,
    486,
    40,
    v9);
  v5 = (*(int (__fastcall **)(int, _DWORD *))(v2 + 240))(v2, v7);
  usleep(0x2710u);
  return v5;
}
