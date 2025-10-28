int __fastcall sub_AE924(unsigned __int8 a1, char a2, _BYTE *a3)
{
  int v6; // r0
  __int16 v7; // r3
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r12
  int v12; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  char v18; // r3
  int v19; // [sp+1Ch] [bp-101Ch] BYREF
  int v20; // [sp+20h] [bp-1018h]
  char v21; // [sp+24h] [bp-1014h]
  int v22; // [sp+28h] [bp-1010h] BYREF
  int v23; // [sp+2Ch] [bp-100Ch]
  int v24; // [sp+30h] [bp-1008h]
  int v25; // [sp+34h] [bp-1004h]
  _BYTE v26[4096]; // [sp+38h] [bp-1000h] BYREF

  v22 = 255;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  pthread_mutex_lock(&i2c_mutex_all);
  v6 = g_bitmain_pic_state[2 * a1];
  v19 = 839363157;
  v7 = (unsigned __int8)(2 * a2) | 1;
  *(_WORD *)((char *)&v20 + 1) = 545;
  LOBYTE(v20) = (2 * a2) | 1;
  v21 = v7 + 92;
  HIBYTE(v20) = (unsigned __int16)(v7 + 92) >> 8;
  v8 = iic_write(v6, (int)&v19, 9);
  if ( v8 == 9 )
  {
    usleep(0x30D40u);
    v14 = g_bitmain_pic_state[2 * a1];
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v15 = iic_read(v14, (int)&v22, 5);
    if ( v15 == 5 )
    {
      if ( BYTE1(v22) == 50 )
      {
        v9 = BYTE2(v22);
        if ( BYTE2(v22) == 1 )
        {
          v18 = v23;
          *a3 = HIBYTE(v22);
          a3[1] = v18;
          goto LABEL_4;
        }
      }
      V_LOCK(5);
      v9 = 0;
      v16 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v16);
      v11 = 125;
      v12 = g_zc;
    }
    else
    {
      v9 = 1;
      V_LOCK(v15);
      v17 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v17);
      v11 = 118;
      v12 = g_zc;
    }
  }
  else
  {
    v9 = 1;
    V_LOCK(v8);
    v10 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v10);
    v11 = 110;
    v12 = g_zc;
  }
  zlog(
    v12,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/drv_pic/isl68127.c",
    164,
    "read_dc_dc",
    10,
    v11,
    100,
    v26);
LABEL_4:
  pthread_mutex_unlock(&i2c_mutex_all);
  return v9;
}
