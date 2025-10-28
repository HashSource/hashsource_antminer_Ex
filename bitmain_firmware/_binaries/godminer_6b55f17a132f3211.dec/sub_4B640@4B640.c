int __fastcall sub_4B640(int a1, pthread_mutex_t *a2, int a3)
{
  size_t *v3; // r6
  pthread_mutex_t *v6; // r8
  int v7; // r0
  int owner; // r3
  char *v9; // r0
  int spins; // lr
  int lock; // r12
  int count; // r1
  int kind; // lr
  int nusers; // r12
  int v15; // r1
  int v17; // r0
  _BYTE v18[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = *(size_t **)(a1 + 1132);
  if ( v3 )
  {
    v6 = a2 + 19;
    if ( a3 && memcmp(&unk_165E20, &a2[19], 0x116u) )
    {
      qword_165F40 = 0;
      memcpy(&unk_165E20, v6, 0x11Eu);
    }
    v7 = pthread_mutex_lock(a2 + 66);
    owner = a2[3].__owner;
    if ( owner && owner == *v3 )
    {
      V_LOCK(v7);
      v17 = logfmt_raw((int)v18, 0x1000u);
      V_UNLOCK(v17);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/dhash_content/kda/kda_2110/kda_2110_content.c",
        172,
        "pre_push_work_kda_2110",
        22,
        40,
        20,
        v18);
      memcpy(v3 + 1, &qword_165F40, *v3);
      if ( (unsigned __int64)qword_165F40 > 0xFF )
        qword_165F40 = 0;
      else
        ++qword_165F40;
    }
    v9 = (char *)memcpy((void *)(a1 + 8), v6, 0x11Eu);
    memcpy(&v9[286 - a2[3].__lock], (const void *)a2[3].__count, a2[3].__lock);
    spins = a2[61].__spins;
    lock = a2[62].__lock;
    count = a2[62].__count;
    *(_DWORD *)(a1 + 1032) = a2[61].__nusers;
    *(_DWORD *)(a1 + 1036) = spins;
    *(_DWORD *)(a1 + 1040) = lock;
    *(_DWORD *)(a1 + 1044) = count;
    kind = a2[62].__kind;
    nusers = a2[62].__nusers;
    v15 = a2[62].__spins;
    *(_DWORD *)(a1 + 1048) = a2[62].__owner;
    *(_DWORD *)(a1 + 1052) = kind;
    *(_DWORD *)(a1 + 1056) = nusers;
    *(_DWORD *)(a1 + 1060) = v15;
    *(_QWORD *)a1 = a2->__lock;
    pthread_mutex_unlock(a2 + 66);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
