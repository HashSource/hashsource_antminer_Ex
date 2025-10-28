int __fastcall sub_52FAC(int a1, int *a2, int a3)
{
  int v3; // r4
  pthread_mutex_t *v5; // r8
  int *v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r0
  char v11; // r1
  char v12; // lr
  unsigned __int64 v13; // kr00_8
  int v14; // r0
  int v15; // r12
  int v16; // r0
  int v17; // r1
  int v18; // lr
  int v19; // r12
  int v20; // r1
  void *v21; // r0
  char *v22; // r0
  int v23; // r2
  _BYTE v25[4100]; // [sp+18h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 1132);
  if ( v3 )
  {
    v5 = (pthread_mutex_t *)(a2 + 398);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    if ( a3 )
    {
      v11 = 0;
      v12 = 0;
      v9 = 0;
      v10 = 0;
      v8 = a2 + 80;
      v13 = 1;
    }
    else
    {
      v8 = a2 + 80;
      v9 = a2[78];
      v10 = a2[79];
      v11 = BYTE1(v9);
      v12 = v9;
      v13 = __PAIR64__(v10, v9) + 1;
    }
    *(_DWORD *)v3 = 2;
    *((_QWORD *)v8 - 1) = v13;
    *(_BYTE *)(v3 + 16) = v12;
    *(_DWORD *)(v3 + 8) = v9;
    *(_DWORD *)(v3 + 12) = v10;
    *(_BYTE *)(v3 + 17) = v11;
    V_LOCK(v10);
    v14 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/dhash_content/zec/zec_1746/zec_1746_content.c",
      176,
      "pre_push_work_zec_1746",
      22,
      36,
      20,
      v25);
    memset((void *)(a1 + 8), 0, 0x400u);
    memcpy((void *)(a1 + 8), a2 + 42, 0x80u);
    memcpy((void *)(a1 + 116), (const void *)a2[20], a2[19]);
    memcpy((void *)(a1 + 8 + 128 - *(_DWORD *)v3), (const void *)(v3 + 16), *(_DWORD *)v3);
    v15 = a2[373];
    v16 = a2[374];
    v17 = a2[375];
    *(_DWORD *)(a1 + 1032) = a2[372];
    *(_DWORD *)(a1 + 1036) = v15;
    *(_DWORD *)(a1 + 1040) = v16;
    *(_DWORD *)(a1 + 1044) = v17;
    v18 = a2[376];
    v19 = a2[377];
    v20 = a2[379];
    *(_DWORD *)(a1 + 1056) = a2[378];
    v21 = *(void **)(a1 + 1124);
    *(_DWORD *)(a1 + 1048) = v18;
    *(_DWORD *)(a1 + 1052) = v19;
    *(_DWORD *)(a1 + 1060) = v20;
    if ( v21 )
    {
      free(v21);
      *(_DWORD *)(a1 + 1124) = 0;
    }
    v22 = _strdup((const char *)a2[395]);
    v23 = *a2;
    *(_DWORD *)(a1 + 1124) = v22;
    *(_QWORD *)a1 = v23;
    pthread_mutex_unlock(v5);
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private");
    return 3;
  }
}
