int __fastcall sub_A5160(int a1, int *a2, char a3)
{
  unsigned __int64 v4; // r2
  _BYTE v8[16]; // [sp+24h] [bp-1010h] BYREF
  size_t *v9; // [sp+1024h] [bp-10h]

  v9 = *(size_t **)(a1 + 1132);
  if ( v9 )
  {
    if ( a3 && memcmp(&unk_5AD3E0, a2 + 116, 0x116u) )
    {
      *(_QWORD *)&dword_5AD500 = 0;
      memcpy(&unk_5AD3E0, a2 + 116, 0x11Eu);
    }
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    if ( a2[21] )
    {
      if ( *v9 == a2[21] )
      {
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, "pool->xnonce2_size: %d, private->xnonce2_len:%d", a2[21], *v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/dhash_content/kda/kda_2110/kda_2110_content.c",
          173,
          "pre_push_work_kda_2110",
          22,
          40,
          20,
          v8);
        memcpy(v9 + 1, &dword_5AD500, *v9);
        v4 = (*(_QWORD *)&dword_5AD500)++;
        if ( v4 > 0xFF )
          *(_QWORD *)&dword_5AD500 = 0;
      }
    }
    memcpy((void *)(a1 + 8), a2 + 116, 0x11Eu);
    memcpy((void *)(a1 + 8 + 286 - a2[19]), (const void *)a2[20], a2[19]);
    memcpy((void *)(a1 + 1032), a2 + 372, 0x20u);
    *(_QWORD *)a1 = *a2;
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
