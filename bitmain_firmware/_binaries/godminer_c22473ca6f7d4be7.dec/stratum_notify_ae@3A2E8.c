int __fastcall stratum_notify_ae(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r8
  _DWORD *v7; // r0
  unsigned __int8 *v8; // r6
  _DWORD *v9; // r0
  unsigned int v10; // r10
  _DWORD *v11; // r0
  unsigned __int8 *v12; // r7
  _DWORD *v13; // r0
  bool v14; // r5
  _BOOL4 v15; // r3
  int v16; // r4
  int v17; // r3
  _DWORD *v18; // r3
  int v19; // r1
  void *nusers; // r0
  char *v22; // r6
  __int64 v23; // r2
  unsigned int lock; // r12
  unsigned int count; // r1
  int owner; // r2
  int spins; // r1
  unsigned int kind; // lr
  unsigned int v29; // r12
  int v30; // r2
  unsigned int v31; // r1
  _DWORD *v32; // r5
  size_t v33; // r0
  int v34; // r3
  int v35; // r1
  int v36; // r3
  int v37; // r1
  char v38[4100]; // [sp+10h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (unsigned __int8 *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = json_integer_value((int)v9);
  v11 = json_array_get(a3, 3u);
  v12 = (unsigned __int8 *)json_string_value(v11);
  v13 = json_array_get(a3, 4u);
  v14 = (char)v13;
  if ( v13 )
    v14 = *json_array_get(a3, 4u) == 5;
  v15 = v8 == 0;
  if ( !v6 )
    v15 = 1;
  if ( v12 )
    v16 = v15;
  else
    v16 = 1;
  if ( !v16 && strlen((const char *)v8) == 64 && strlen((const char *)v12) == 8 )
  {
    pthread_mutex_lock(a2 + 73);
    nusers = (void *)a2[3].__nusers;
    if ( nusers )
    {
      free(nusers);
      a2[3].__nusers = 0;
    }
    a2[3].__nusers = (unsigned int)_strdup(v6);
    hex2bin((int)&a2[3].__spins, v8, 32);
    a2[75].__count = v10;
    hex2bin((int)&a2[14], v12, 4);
    v22 = (char *)a2[66].__nusers;
    v23 = *(_QWORD *)&a2[82].__lock;
    a2[18].__size[4] = v14;
    *((_QWORD *)&a2[18].__align + 1) = v23;
    if ( v22 )
    {
      if ( !strcmp(v22, v6) )
      {
        V_LOCK();
        LOWORD(v36) = 7000;
        HIWORD(v36) = (unsigned int)"oot/tmp/release/build/godminer-origin_master/util.h" >> 16;
        LOWORD(v32) = -14512;
        logfmt_raw(v38, 0x1000u, 0, v36, a2[66].__nusers, v6);
        HIWORD(v32) = (unsigned int)&unk_16B55C >> 16;
        V_UNLOCK();
        LOWORD(v37) = 6596;
        HIWORD(v37) = (unsigned int)&unk_130DF0 >> 16;
        zlog(*v32, v37, 155, "stratum_notify_ae", 17, 152, 20, v38);
        if ( strlen(v6) <= 0x1F )
        {
LABEL_23:
          v22 = (char *)a2[66].__nusers;
          if ( !v22 )
            goto LABEL_19;
          goto LABEL_18;
        }
LABEL_22:
        V_LOCK();
        v33 = strlen(v6);
        LOWORD(v34) = 7056;
        HIWORD(v34) = (unsigned int)" is not a number" >> 16;
        logfmt_raw(v38, 0x1000u, 0, v34, v6, v33);
        V_UNLOCK();
        LOWORD(v35) = 6596;
        HIWORD(v35) = (unsigned int)&unk_130DF0 >> 16;
        zlog(*v32, v35, 155, "stratum_notify_ae", 17, 155, 100, v38);
        goto LABEL_23;
      }
      if ( strlen(v6) <= 0x1F )
      {
LABEL_18:
        free(v22);
        a2[66].__nusers = 0;
LABEL_19:
        a2[66].__nusers = (unsigned int)_strdup(v6);
        lock = a2[4].__lock;
        count = a2[4].__count;
        owner = a2[4].__owner;
        a2[19].__lock = a2[3].__spins;
        a2[19].__count = lock;
        a2[19].__owner = count;
        a2[19].__kind = owner;
        spins = a2[4].__spins;
        kind = a2[4].__kind;
        v29 = a2[4].__nusers;
        a2[20].__count = a2[5].__lock;
        v30 = a2->__lock;
        a2[20].__lock = spins;
        v31 = a2[75].__count;
        a2[19].__nusers = kind;
        a2[19].__spins = v29;
        a2[66].__kind = v31;
        *((_QWORD *)&a2[18].__align + 2) = v30;
        pthread_mutex_unlock(a2 + 73);
        return 1;
      }
    }
    else if ( strlen(v6) <= 0x1F )
    {
      goto LABEL_19;
    }
    LOWORD(v32) = -14512;
    HIWORD(v32) = (unsigned int)&unk_16B55C >> 16;
    goto LABEL_22;
  }
  V_LOCK();
  LOWORD(v17) = 6964;
  HIWORD(v17) = (unsigned int)"miner_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.h" >> 16;
  logfmt_raw(v38, 0x1000u, 0, v17);
  V_UNLOCK();
  LOWORD(v18) = -14512;
  HIWORD(v18) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v19) = 6596;
  HIWORD(v19) = (unsigned int)&unk_130DF0 >> 16;
  zlog(*v18, v19, 155, "stratum_notify_ae", 17, 137, 100, v38);
  return 0;
}
