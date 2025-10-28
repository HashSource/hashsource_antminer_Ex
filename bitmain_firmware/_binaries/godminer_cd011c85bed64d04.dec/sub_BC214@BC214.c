int __fastcall sub_BC214(unsigned __int8 a1, int a2, char a3, char *a4, int a5)
{
  __int16 v7; // r4
  int v9; // r6
  char v10; // r3
  char v11; // r1
  int v12; // r2
  _DWORD *v13; // r1
  int v14; // r12
  int v15; // lr
  __int16 v16; // r3
  __int16 v17; // t1
  int v18; // r0
  int v19; // r0
  int v20; // r5
  int v21; // r0
  int v22; // r12
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // [sp+18h] [bp-1020h] BYREF
  int v29; // [sp+1Ch] [bp-101Ch]
  int v30; // [sp+20h] [bp-1018h]
  int v31; // [sp+24h] [bp-1014h]
  _DWORD v32[4]; // [sp+28h] [bp-1010h] BYREF
  _BYTE var1000[4104]; // [sp+38h] [bp-1000h] BYREF

  v7 = (unsigned __int8)(a5 + 6);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v9 = 2 * a2;
  v28 = 255;
  memset(v32, 0, sizeof(v32));
  pthread_mutex_lock(&i2c_mutex_all);
  v10 = 85;
  v11 = *a4;
  LOWORD(v32[0]) = -21931;
  if ( a5 == 2 )
    v10 = a4[1];
  HIBYTE(v32[0]) = 50;
  if ( a5 == 2 )
    v12 = 10;
  else
    v12 = 9;
  LOBYTE(v32[1]) = v9;
  if ( a5 == 2 )
    HIBYTE(v32[1]) = v10;
  BYTE2(v32[1]) = v11;
  if ( a5 == 2 )
    v9 = v12;
  v13 = (_DWORD *)((char *)v32 + 2);
  BYTE1(v32[1]) = a3;
  BYTE2(v32[0]) = a5 + 6;
  if ( a5 == 2 )
  {
    v14 = 9;
    v15 = 8;
  }
  else
  {
    v14 = 8;
    v9 = v12;
    v15 = 7;
  }
  v16 = 0;
  while ( 1 )
  {
    v16 += v7;
    if ( (_DWORD *)((char *)&v32[1] + a5 + 1) == v13 )
      break;
    v17 = *((unsigned __int8 *)v13 + 1);
    v13 = (_DWORD *)((char *)v13 + 1);
    v7 = v17;
  }
  *((_BYTE *)v32 + v15) = HIBYTE(v16);
  v18 = g_bitmain_pic_state[2 * a1];
  *((_BYTE *)v32 + v14) = v16;
  v19 = iic_write(v18, (int)v32, v12);
  if ( v19 != v9 )
  {
    v20 = 1;
    V_LOCK(v19);
    v21 = logfmt_raw((int)var1000, 0x1000u);
    V_UNLOCK(v21);
    v22 = 61;
LABEL_18:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/isl68127.c",
      158,
      "write_dc_dc",
      11,
      v22,
      100,
      var1000);
    goto LABEL_19;
  }
  usleep((__useconds_t)&loc_30D40);
  v24 = g_bitmain_pic_state[2 * a1];
  v29 = 0;
  v28 = 0;
  v30 = 0;
  v31 = 0;
  v25 = iic_read(v24, (int)&v28, 5);
  if ( v25 != 5 )
  {
    v20 = 1;
    V_LOCK(v25);
    v27 = logfmt_raw((int)var1000, 0x1000u);
    V_UNLOCK(v27);
    v22 = 68;
    goto LABEL_18;
  }
  if ( BYTE1(v28) != 50 || (v20 = BYTE2(v28), BYTE2(v28) != 1) )
  {
    V_LOCK(5);
    v20 = 0;
    v26 = logfmt_raw((int)var1000, 0x1000u);
    V_UNLOCK(v26);
    v22 = 75;
    goto LABEL_18;
  }
LABEL_19:
  pthread_mutex_unlock(&i2c_mutex_all);
  return v20;
}
