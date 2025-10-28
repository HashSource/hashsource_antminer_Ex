int __fastcall set_baud_eth_0(int a1, int a2)
{
  int v4; // r3
  int *v5; // r3
  int v6; // r0
  int v7; // r1
  _DWORD v9[2]; // [sp+10h] [bp-1014h] BYREF
  char v10; // [sp+18h] [bp-100Ch]
  char v11; // [sp+19h] [bp-100Bh]
  __int16 v12; // [sp+1Ah] [bp-100Ah]
  int v13; // [sp+1Ch] [bp-1008h]
  char v14[4100]; // [sp+20h] [bp-1004h] BYREF

  v11 = 0;
  v13 = 0;
  v9[1] = 0;
  v10 = 1;
  v12 = 48;
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
        v4 = -65536;
        goto LABEL_8;
      }
      goto LABEL_10;
    }
    if ( (_UNKNOWN *)a2 == &unk_16E360 )
    {
LABEL_18:
      v4 = -65535;
      goto LABEL_8;
    }
LABEL_10:
    v4 = -65510;
    goto LABEL_8;
  }
  if ( a2 == 460800 )
  {
    v4 = -65530;
    goto LABEL_8;
  }
  if ( a2 == 921600 )
  {
LABEL_17:
    v4 = -65534;
    goto LABEL_8;
  }
  if ( a2 != 38400 )
    goto LABEL_10;
  v4 = -65456;
LABEL_8:
  v9[0] = v4;
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "set_misc_eth value %08x/%d", v9[0], a2);
  V_UNLOCK();
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  v6 = *v5;
  LOWORD(v5) = 32688;
  LOWORD(v7) = 24504;
  HIWORD(v5) = (unsigned int)&unk_1372E0 >> 16;
  HIWORD(v7) = (unsigned int)"er_status/heartbeat_on_device.c" >> 16;
  zlog(v6, v7, 143, v5, 24, 252, 60, v14);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v9);
}
