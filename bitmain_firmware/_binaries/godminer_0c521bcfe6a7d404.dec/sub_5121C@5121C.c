int __fastcall sub_5121C(int a1, int *a2, int a3)
{
  size_t *v3; // r7
  const void *v6; // r8
  int v7; // r0
  int v8; // r3
  char *v9; // r0
  int v10; // lr
  int v11; // r12
  int v12; // r1
  int v13; // lr
  int v14; // r12
  int v15; // r1
  int v17; // r0
  _BYTE v18[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = *(size_t **)(a1 + 1132);
  if ( v3 )
  {
    v6 = a2 + 116;
    if ( a3 && memcmp(&unk_174138, a2 + 116, 0x116u) )
    {
      qword_174258 = 0;
      memcpy(&unk_174138, v6, 0x11Eu);
    }
    v7 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    v8 = a2[21];
    if ( v8 && v8 == *v3 )
    {
      V_LOCK(v7);
      v17 = logfmt_raw((int)v18, 0x1000u);
      V_UNLOCK(v17);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/dhash_content/kda/kda_2110/kda_2110_content.c",
        176,
        "pre_push_work_kda_2110",
        22,
        40,
        20,
        v18);
      memcpy(v3 + 1, &qword_174258, *v3);
      if ( (unsigned __int64)qword_174258 > 0xFF )
        qword_174258 = 0;
      else
        ++qword_174258;
    }
    v9 = (char *)memcpy((void *)(a1 + 8), v6, 0x11Eu);
    memcpy(&v9[286 - a2[19]], (const void *)a2[20], a2[19]);
    v10 = a2[373];
    v11 = a2[374];
    v12 = a2[375];
    *(_DWORD *)(a1 + 1032) = a2[372];
    *(_DWORD *)(a1 + 1036) = v10;
    *(_DWORD *)(a1 + 1040) = v11;
    *(_DWORD *)(a1 + 1044) = v12;
    v13 = a2[377];
    v14 = a2[378];
    v15 = a2[379];
    *(_DWORD *)(a1 + 1048) = a2[376];
    *(_DWORD *)(a1 + 1052) = v13;
    *(_DWORD *)(a1 + 1056) = v14;
    *(_DWORD *)(a1 + 1060) = v15;
    *(_QWORD *)a1 = *a2;
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private");
    return 3;
  }
}
