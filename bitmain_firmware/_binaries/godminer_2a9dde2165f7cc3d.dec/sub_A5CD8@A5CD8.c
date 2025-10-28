int __fastcall sub_A5CD8(int a1, int a2, void *src, size_t a4, void *a5, size_t a6)
{
  char *v7; // r0
  size_t v8; // r9
  int v11; // r8
  _DWORD *v12; // r2
  __int16 v13; // r12
  __int16 v14; // t1
  char *v15; // r9
  int v16; // r0
  int v17; // r5
  int v18; // r0
  int v19; // r12
  int v21; // r0
  int v22; // r5
  int v23; // r6
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r3
  char *v30; // r2
  __int16 v31; // t1
  int v33; // [sp+Ch] [bp-1018h] BYREF
  int v34; // [sp+10h] [bp-1014h] BYREF
  _BYTE v35[12]; // [sp+14h] [bp-1010h] BYREF
  _BYTE var1004[4128]; // [sp+20h] [bp-1004h] BYREF

  v7 = (char *)&g_bitmain_pic_state[2 * a1];
  if ( a4 )
    v8 = a4;
  else
    v8 = 1;
  if ( v8 >= 8 )
    v8 = 8;
  if ( !*((_DWORD *)v7 + 1) )
  {
    V_LOCK(v7);
    v26 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v26);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      167,
      "pic_1704_cmd",
      12,
      67,
      100,
      var1004);
  }
  HIBYTE(v34) = a2;
  v11 = (unsigned __int8)(v8 + 6);
  BYTE2(v34) = v8 + 4;
  LOWORD(v34) = -21931;
  memcpy(v35, src, v8);
  v12 = (int *)((char *)&v34 + 1);
  v13 = 0;
  do
  {
    v14 = *((unsigned __int8 *)v12 + 1);
    v12 = (_DWORD *)((char *)v12 + 1);
    v13 += v14;
  }
  while ( (int *)((char *)&v33 + v11 + 1) != v12 );
  v15 = (char *)&v34;
  *((_BYTE *)&v34 + v11 - 2) = HIBYTE(v13);
  *((_BYTE *)&v33 + v11 + 3) = v13;
  sub_A5BFC((int)"pic tx", (int)&v34, v11);
  pthread_mutex_lock(&i2c_mutex_all);
  v16 = iic_write(g_bitmain_pic_state[2 * a1], &v34, v11);
  if ( v16 != v11 )
  {
    v17 = 1;
    V_LOCK(v16);
    v18 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v18);
    v19 = 83;
LABEL_12:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      167,
      "pic_1704_cmd",
      12,
      v19,
      100,
      var1004);
    goto LABEL_13;
  }
  usleep(0x2710u);
  v21 = g_bitmain_pic_state[2 * a1];
  v34 = 0;
  memset(v35, 0, sizeof(v35));
  v22 = (unsigned __int8)(a6 + 5);
  v23 = v22;
  v24 = iic_read(v21, &v34, v22);
  if ( v24 != v22 )
  {
    v17 = 2;
    V_LOCK(v24);
    v25 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v25);
    v19 = 93;
    goto LABEL_12;
  }
  v27 = sub_A5BFC((int)"pic rx", (int)&v34, v22);
  if ( (unsigned __int8)v34 != v22 )
    goto LABEL_18;
  if ( BYTE1(v34) != a2 )
    goto LABEL_18;
  LOWORD(v29) = BYTE2(v34);
  if ( BYTE2(v34) )
    goto LABEL_18;
  v30 = (char *)&v33 + v22 + 1;
  while ( 1 )
  {
    v29 = (unsigned __int16)(v29 + v22);
    if ( v15 == v30 )
      break;
    v31 = (unsigned __int8)*++v15;
    LOWORD(v22) = v31;
  }
  if ( !(v29 ? *((unsigned __int8 *)&v33 + v23 + 3) : *((unsigned __int8 *)&v33 + v23 + 3) | 1) )
  {
LABEL_18:
    v17 = 3;
    V_LOCK(v27);
    v28 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v28);
    v19 = 99;
    goto LABEL_12;
  }
  v17 = (int)a5;
  if ( a5 )
    v17 = 1;
  if ( !a6 )
    v17 = 0;
  if ( v17 )
  {
    v17 = 0;
    memcpy(a5, (char *)&v34 + 3, a6);
  }
LABEL_13:
  pthread_mutex_unlock(&i2c_mutex_all);
  return v17;
}
