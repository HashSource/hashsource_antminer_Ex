int __fastcall sub_CC36C(int a1, int a2, int a3, int *a4, unsigned int a5)
{
  int v7; // r9
  int v8; // r11
  unsigned int v9; // r0
  unsigned int *v11; // r6
  unsigned int v12; // r0
  pthread_mutex_t *mutex; // [sp+14h] [bp-10A8h]
  int v16; // [sp+1Ch] [bp-10A0h]
  int v17[2]; // [sp+24h] [bp-1098h] BYREF
  unsigned __int8 v18; // [sp+2Ch] [bp-1090h] BYREF
  unsigned __int8 v19; // [sp+2Dh] [bp-108Fh]
  unsigned __int8 v20; // [sp+2Eh] [bp-108Eh] BYREF
  unsigned __int8 v21; // [sp+2Fh] [bp-108Dh]
  unsigned int v22; // [sp+30h] [bp-108Ch]
  _BYTE v23[128]; // [sp+34h] [bp-1088h] BYREF
  unsigned __int16 v24; // [sp+B4h] [bp-1008h]
  char var1004[4104]; // [sp+B8h] [bp-1004h] BYREF

  v7 = 0;
  mutex = (pthread_mutex_t *)(a1 + 900);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 900));
  queue_clear(*(_DWORD *)(a1 + 868));
  v8 = 0;
  v16 = a3;
  v17[0] = a5 / 0x3E8;
  v17[1] = (_DWORD)&loc_F4240 * (a5 % 0x3E8);
  while ( a2 > v8 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 868), (char *)&v18, 0x8Au, v17) == 110 )
      {
        v7 = 3;
        goto LABEL_10;
      }
      V_LOCK();
      logfmt_raw(var1004, 0x1000u, 0, "[DAG] header:%02x%02x chip_addr:%02x", v18, v19, v21);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/chip_reg_io_base.c",
        157,
        "sync_get_dag_base_2282",
        22,
        360,
        20,
        var1004);
      if ( v18 != 170 || v19 != 85 )
      {
        v7 = 1;
        goto LABEL_10;
      }
      v9 = BM_CRC16(&v20, 134);
      if ( v24 == (unsigned __int16)__rev16(v9) )
        break;
      v7 = 2;
    }
    ++v8;
    v11 = (unsigned int *)v16;
    *(_BYTE *)(v16 + 4) = v21;
    v16 += 140;
    *v11 = reverse_byte_order_32(v22);
    V_LOCK();
    v12 = reverse_byte_order_32(v22);
    logfmt_raw(var1004, 0x1000u, 0, "data_bist_num :%d", v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/chip_reg_io_base.c",
      157,
      "sync_get_dag_base_2282",
      22,
      374,
      40,
      var1004);
    memcpy((char *)v11 + 10, v23, 0x80u);
  }
LABEL_10:
  *a4 = v8;
  pthread_mutex_unlock(mutex);
  return v7;
}
