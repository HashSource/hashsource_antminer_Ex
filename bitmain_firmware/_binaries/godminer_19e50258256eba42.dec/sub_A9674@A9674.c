int __fastcall sub_A9674(int a1, int *a2, char a3)
{
  __int64 v4; // r2
  _BYTE v9[16]; // [sp+2Ch] [bp-1010h] BYREF
  _DWORD *v10; // [sp+102Ch] [bp-10h]

  v10 = *(_DWORD **)(a1 + 1132);
  if ( v10 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    if ( a3 )
    {
      *((_QWORD *)a2 + 39) = 0;
      *((_QWORD *)v10 + 1) = 0;
    }
    *v10 = 2;
    v4 = *((_QWORD *)a2 + 39);
    *((_QWORD *)a2 + 39) = v4 + 1;
    *((_QWORD *)v10 + 1) = v4;
    sub_A95D4(*((_QWORD *)v10 + 1), (int)(v10 + 4), *v10);
    V_LOCK();
    logfmt_raw(
      v9,
      0x1000u,
      0,
      "num2bin[%d] %02x%02x%02x%02x",
      *v10,
      *((unsigned __int8 *)v10 + 16),
      *((unsigned __int8 *)v10 + 17),
      *((unsigned __int8 *)v10 + 18),
      *((unsigned __int8 *)v10 + 19));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/zec/zec_1746/zec_1746_content.c",
      173,
      "pre_push_work_zec_1746",
      22,
      36,
      20,
      v9);
    memset((void *)(a1 + 8), 0, 0x400u);
    memcpy((void *)(a1 + 8), a2 + 42, 0x80u);
    memcpy((void *)(a1 + 116), (const void *)a2[20], a2[19]);
    memcpy((void *)(a1 + 8 + 128 - *v10), v10 + 4, *v10);
    memcpy((void *)(a1 + 1032), a2 + 372, 0x20u);
    if ( *(_DWORD *)(a1 + 1124) )
    {
      free(*(void **)(a1 + 1124));
      *(_DWORD *)(a1 + 1124) = 0;
    }
    *(_DWORD *)(a1 + 1124) = strdup((const char *)a2[395]);
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
