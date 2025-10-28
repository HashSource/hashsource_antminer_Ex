int __fastcall set_baud_vbk_0(int a1, int a2)
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
  v9 = 28;
  if ( (_UNKNOWN *)a2 == &unk_16E360 )
    goto LABEL_21;
  if ( a2 > (int)&unk_16E360 )
  {
    if ( a2 == 3125000 )
      goto LABEL_20;
    if ( a2 > 3125000 )
    {
      if ( a2 != 6250000 && a2 != 12500000 )
        goto LABEL_14;
      goto LABEL_20;
    }
    if ( a2 != 1562500 )
    {
      if ( a2 != 3000000 )
        goto LABEL_14;
LABEL_20:
      v3 = 24673;
      goto LABEL_9;
    }
LABEL_21:
    v3 = 24929;
    goto LABEL_9;
  }
  if ( a2 != 460800 )
  {
    if ( a2 > 460800 )
    {
      if ( a2 == 921600 || a2 == 1041666 )
      {
        v3 = 25185;
        goto LABEL_9;
      }
    }
    else if ( a2 == 38400 )
    {
      v3 = 159841;
      goto LABEL_9;
    }
LABEL_14:
    v3 = 31329;
    goto LABEL_9;
  }
  v3 = 26209;
LABEL_9:
  v6[0] = v3;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_misc_VBK",
    20,
    204,
    60,
    v11);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v6);
}
