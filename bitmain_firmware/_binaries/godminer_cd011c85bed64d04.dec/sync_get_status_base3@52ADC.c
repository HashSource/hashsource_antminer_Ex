int __fastcall sync_get_status_base3(pthread_mutex_t *a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // r6
  int v8; // r10
  int v9; // r2
  int v10; // r0
  int v11; // r11
  int v12; // r0
  __int16 v14; // r2
  int v15; // r3
  pthread_mutex_t *mutex; // [sp+1Ch] [bp-1028h]
  _DWORD v20[2]; // [sp+2Ch] [bp-1018h] BYREF
  _BYTE v21[2]; // [sp+34h] [bp-1010h] BYREF
  char v22; // [sp+36h] [bp-100Eh] BYREF
  int v23; // [sp+37h] [bp-100Dh]
  char v24; // [sp+3Bh] [bp-1009h]
  unsigned __int8 v25; // [sp+3Ch] [bp-1008h]
  char v26; // [sp+3Dh] [bp-1007h]
  _BYTE v27[4096]; // [sp+40h] [bp-1004h] BYREF

  if ( !a1[6].__size[8] )
    return 4;
  mutex = a1 + 29;
  v6 = 0;
  pthread_mutex_lock(a1 + 29);
  queue_clear(a1[28].__lock);
  v8 = 0;
  sub_12E9C4(a5, a6, 1000, 0);
  v20[1] = 1000000 * v9;
  v20[0] = sub_12E9C4(a5, a6, 1000, 0);
  while ( v8 < a2 )
  {
    while ( 1 )
    {
      v12 = queue_dequeue_for(a1[28].__lock, v21, 10, v20);
      if ( v12 == 110 )
      {
        v6 = 3;
        goto LABEL_14;
      }
      V_LOCK(v12);
      v10 = logfmt_raw((int)v27, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_reg_io_base.c",
        147,
        "sync_get_status_base3",
        21,
        1047,
        20,
        v27);
      if ( v21[0] != 170 || v21[1] != 85 || v22 != 8 || (v26 & 0x40) != 0 )
      {
        v6 = 1;
        *a4 = v8;
        pthread_mutex_unlock(mutex);
        return v6;
      }
      v11 = v26 & 0x1F;
      if ( v11 == BM_CRC5(&v22, 59) )
        break;
      v6 = 2;
    }
    ++v8;
    v14 = v25;
    v15 = v23;
    *(_BYTE *)(a3 + 4) = v24;
    *(_WORD *)(a3 + 6) = v14;
    *(_DWORD *)a3 = v15;
    a3 += 12;
  }
LABEL_14:
  *a4 = v8;
  pthread_mutex_unlock(mutex);
  return v6;
}
