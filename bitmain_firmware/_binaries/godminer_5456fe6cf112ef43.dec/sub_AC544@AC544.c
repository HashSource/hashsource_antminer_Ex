int __fastcall sub_AC544(int a1, int a2, int a3, unsigned __int8 *a4)
{
  int v5; // r0
  int v7; // lr
  __int16 v8; // r3
  char v9; // r2
  __int16 v10; // r3
  int v11; // r1
  unsigned __int8 *v12; // r2
  int v13; // r1
  unsigned __int8 *v14; // r12
  char v15; // t1
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r2
  int v20; // r3
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r6
  int v28; // r0
  int v29; // r0
  int v30; // r2
  int v31; // r0
  int v32; // r0
  char v33; // [sp+10h] [bp-1824h]
  int v34; // [sp+18h] [bp-181Ch]
  char v37[2048]; // [sp+30h] [bp-1804h] BYREF
  _BYTE v38[4100]; // [sp+830h] [bp-1004h] BYREF

  v5 = BYTE1(a1);
  v7 = BYTE1(a1) + 4;
  v8 = (unsigned __int8)(BYTE1(a1) + 4);
  *(_BYTE *)(a3 + 3) = a1;
  v9 = v8 + a1;
  *(_BYTE *)(a3 + 2) = v8;
  v10 = v8 + (unsigned __int8)a1;
  *(_WORD *)a3 = -21931;
  if ( a2 )
  {
    if ( v5 )
    {
      v12 = (unsigned __int8 *)(a2 - 1);
      v13 = a3 + 3;
      v14 = (unsigned __int8 *)(a2 + (unsigned __int8)(v5 - 1));
      do
      {
        v15 = *++v12;
        *(_BYTE *)++v13 = v15;
        v10 += *v12;
      }
      while ( v12 != v14 );
      v11 = v5 + 5;
    }
    else
    {
      v11 = 5;
      v7 = 4;
    }
    *(_BYTE *)(a3 + v7) = HIBYTE(v10);
    *(_BYTE *)(a3 + v11) = v10;
  }
  else
  {
    *(_BYTE *)(a3 + 5) = v9;
    *(_BYTE *)(a3 + 4) = HIBYTE(v10);
  }
  v34 = (unsigned __int8)(v5 + 6);
  v33 = 4;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    iic_write(g_bitmain_pic_state[2 * HIBYTE(a1)], a3, v34);
    usleep(0x2710u);
    iic_read(g_bitmain_pic_state[2 * HIBYTE(a1)], a4, BYTE2(a1));
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( BYTE2(a1) == 2 )
      break;
    if ( BYTE2(a1) > 2u )
    {
      if ( __PAIR64__(a4[1], *a4) == __PAIR64__((unsigned __int8)a1, BYTE2(a1)) )
      {
        v26 = snprintf(v37, 0x800u, "PICCMD %d passed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
        V_LOCK(v26);
        v27 = 1;
        v28 = logfmt_raw((int)v38, 0x1000u);
        V_UNLOCK(v28);
        v29 = g_zc;
        v30 = 111;
        goto LABEL_23;
      }
      v16 = snprintf(v37, 0x800u, "PICCMD %d failed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
      V_LOCK(v16);
      v17 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v17);
      v18 = g_zc;
      v19 = 116;
      goto LABEL_15;
    }
    v24 = snprintf(v37, 0x800u, "ret_len = %d should never happen!!", BYTE2(a1));
    V_LOCK(v24);
    v25 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic_process_cmd",
      15,
      121,
      20,
      v38);
LABEL_16:
    v20 = (unsigned __int8)(v33 - 1);
    v33 = v20;
    if ( !v20 )
      return 0;
  }
  if ( *a4 != (unsigned __int8)a1 || a4[1] != 1 )
  {
    v22 = snprintf(v37, 0x800u, "PICCMD %d failed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
    V_LOCK(v22);
    v23 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v23);
    v18 = g_zc;
    v19 = 103;
LABEL_15:
    zlog(
      v18,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic_process_cmd",
      15,
      v19,
      20,
      v38);
    sleep(1u);
    goto LABEL_16;
  }
  v27 = 1;
  v31 = snprintf(v37, 0x800u, "PICCMD %d passed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
  V_LOCK(v31);
  v32 = logfmt_raw((int)v38, 0x1000u);
  V_UNLOCK(v32);
  v29 = g_zc;
  v30 = 98;
LABEL_23:
  zlog(
    v29,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic_process_cmd",
    15,
    v30,
    20,
    v38);
  return v27;
}
