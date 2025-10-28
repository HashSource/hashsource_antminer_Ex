int __fastcall sub_51928(pthread_mutex_t *a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  pthread_mutex_t *v6; // r11
  int v9; // r8
  int v10; // r10
  int v11; // r2
  int v12; // r0
  unsigned int v13; // r0
  int v14; // r0
  int *v16; // r5
  int v17; // r12
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v24; // [sp+1Ch] [bp-1060h]
  _DWORD v25[2]; // [sp+24h] [bp-1058h] BYREF
  _BYTE v26[2]; // [sp+2Ch] [bp-1050h] BYREF
  _BYTE v27[2]; // [sp+2Eh] [bp-104Eh] BYREF
  int v28; // [sp+30h] [bp-104Ch]
  int v29; // [sp+34h] [bp-1048h] BYREF
  unsigned __int16 v30; // [sp+74h] [bp-1008h] BYREF
  _BYTE var1004[4104]; // [sp+78h] [bp-1004h] BYREF

  v6 = a1 + 29;
  v9 = 0;
  pthread_mutex_lock(a1 + 29);
  v24 = a3;
  queue_clear(a1[28].__lock);
  sub_12E9C4(a5, a6, 1000, 0);
  v10 = 0;
  v25[1] = (_DWORD)&loc_F4240 * v11;
  v25[0] = sub_12E9C4(a5, a6, 1000, 0);
  while ( a2 > v10 )
  {
    while ( 1 )
    {
      v14 = queue_dequeue_for(a1[28].__lock, v26, 74, v25);
      if ( v14 == 110 )
      {
        v9 = 3;
        goto LABEL_10;
      }
      V_LOCK(v14);
      v12 = logfmt_raw((int)var1004, 0x1000u);
      V_UNLOCK(v12);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_reg_io_base.c",
        147,
        "sync_get_dag_base",
        17,
        326,
        20,
        var1004);
      if ( v26[0] != 170 || v26[1] != 85 )
      {
        v9 = 1;
        goto LABEL_10;
      }
      v13 = BM_CRC16(v27, 70);
      if ( v30 == (unsigned __int16)__rev16(v13) )
        break;
      v9 = 2;
    }
    v16 = &v29;
    *(_BYTE *)(v24 + 4) = v27[1];
    *(_DWORD *)v24 = reverse_byte_order_32(v28);
    v17 = v24 + 10;
    do
    {
      v17 += 16;
      v18 = *v16;
      v19 = v16[1];
      v20 = v16[2];
      v21 = v16[3];
      v16 += 4;
      *(_DWORD *)(v17 - 16) = v18;
      *(_DWORD *)(v17 - 12) = v19;
      *(_DWORD *)(v17 - 8) = v20;
      *(_DWORD *)(v17 - 4) = v21;
    }
    while ( v16 != (int *)&v30 );
    ++v10;
    v24 += 76;
  }
LABEL_10:
  *a4 = v10;
  pthread_mutex_unlock(v6);
  return v9;
}
