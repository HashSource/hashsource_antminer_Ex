int __fastcall set_baud_kas_0(int a1, int a2)
{
  int v4; // r4
  char *v5; // r1
  int v6; // r4
  int v7; // r1
  int v8; // r4
  _DWORD v10[4]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v11[7]; // [sp+40h] [bp-1024h] BYREF
  int v12; // [sp+5Ch] [bp-1008h]
  char v13[4100]; // [sp+60h] [bp-1004h] BYREF

  v10[2] = 6291457;
  v10[1] = 0;
  v10[3] = 0;
  v10[0] = 0;
  if ( (char *)a2 == "ing_read_sensor_temp_remote_on_ctrlboard_KAS_2380" )
    goto LABEL_24;
  if ( a2 <= (int)"ing_read_sensor_temp_remote_on_ctrlboard_KAS_2380" )
  {
    if ( a2 == 460800 )
    {
      v4 = 1536;
      goto LABEL_10;
    }
    if ( a2 > 460800 )
    {
      if ( a2 == 921600 || a2 == 1041666 )
      {
        v4 = 512;
        goto LABEL_10;
      }
    }
    else if ( a2 == 38400 )
    {
      v4 = 20480;
      goto LABEL_10;
    }
    goto LABEL_16;
  }
  if ( a2 == 3125000 )
  {
LABEL_23:
    v4 = 0;
    goto LABEL_10;
  }
  if ( a2 <= 3125000 )
  {
    if ( (char *)a2 != byte_17D784 )
    {
      if ( a2 != 3000000 )
        goto LABEL_16;
      goto LABEL_23;
    }
LABEL_24:
    v4 = 256;
    goto LABEL_10;
  }
  if ( a2 == 6250000 )
  {
    v4 = 257;
    goto LABEL_9;
  }
  if ( a2 != 12500000 )
  {
LABEL_16:
    v4 = 6656;
    goto LABEL_10;
  }
  v4 = 1;
LABEL_9:
  (*(void (__fastcall **)(int, int))(a1 + 188))(a1, 1);
LABEL_10:
  v10[0] = v4;
  V_LOCK();
  LOWORD(v5) = 23936;
  HIWORD(v5) = (unsigned int)"p" >> 16;
  V_INT((int)v11, v5, *(int *)(a1 + 248));
  LOWORD(v6) = -24556;
  HIWORD(v6) = (unsigned int)"step %f, step_id %d " >> 16;
  logfmt_raw(v13, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, v6, v10[0], a2);
  V_UNLOCK();
  LOWORD(v7) = -26872;
  HIWORD(v7) = (unsigned int)"stdiv1:%d, postdiv2:%d" >> 16;
  zlog(g_zc, v7, 153, "ChipSetting_fuart_cfg_KAS_2380", 30, 527, 40, v13);
  v8 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v10);
  usleep(0x2710u);
  return v8;
}
