int __fastcall chip_setting_misc_ltc(int a1, int a2)
{
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r1
  _DWORD v8[2]; // [sp+10h] [bp-1014h] BYREF
  char v9; // [sp+18h] [bp-100Ch]
  char v10; // [sp+19h] [bp-100Bh]
  __int16 v11; // [sp+1Ah] [bp-100Ah]
  int v12; // [sp+1Ch] [bp-1008h]
  char v13[4100]; // [sp+20h] [bp-1004h] BYREF

  v10 = 0;
  v12 = 0;
  v8[1] = 0;
  v9 = 1;
  v11 = 24;
  if ( (_UNKNOWN *)a2 == &unk_16E360 )
    goto LABEL_21;
  if ( a2 > (int)&unk_16E360 )
  {
    if ( a2 == 3125000 )
      goto LABEL_19;
    if ( a2 > 3125000 )
    {
      if ( a2 != 6250000 && a2 != 12500000 )
        goto LABEL_13;
      goto LABEL_19;
    }
    if ( a2 != 1562500 )
    {
      if ( a2 != 3000000 )
        goto LABEL_13;
LABEL_19:
      v4 = 117465329;
      goto LABEL_8;
    }
LABEL_21:
    v4 = 117465585;
    goto LABEL_8;
  }
  if ( a2 == 460800 )
  {
    v4 = 117466865;
    goto LABEL_8;
  }
  if ( a2 > 460800 )
  {
    if ( a2 == 921600 || a2 == 1041666 )
    {
      v4 = 117465841;
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  if ( a2 != 38400 )
  {
LABEL_13:
    v4 = 117471985;
    goto LABEL_8;
  }
  v4 = 117469425;
LABEL_8:
  v8[0] = v4;
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "set_misc value %08x/%d", v8[0], a2);
  V_UNLOCK();
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v6) = -13556;
  HIWORD(v6) = (unsigned int)"acket_kda" >> 16;
  zlog(*v5, v6, 159, "chip_setting_misc_ltc", 21, 98, 60, v13);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v8);
}
