int __fastcall judge_load_config(char *a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  unsigned int *file; // r0
  unsigned int *v5; // r6
  unsigned int v6; // r7
  int v7; // r8
  int v8; // r0
  int v9; // r12
  int v10; // r2
  int v11; // r1
  int v13; // r1
  _DWORD *v14; // r0
  _DWORD *v15; // r10
  char *v16; // r1
  char *v17; // r1
  _DWORD *v18; // r0
  _BYTE *v19; // r2
  int v20; // r3
  char *v21; // r1
  _DWORD *v22; // r0
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  int v26; // r1
  const char *v27; // r0
  int v28; // r0
  char *v29; // r9
  _DWORD *v30; // r0
  char *v31; // r3
  char *v32; // r2
  char *v33; // r1
  _DWORD *v34; // r0
  _DWORD *v35; // r8
  unsigned int v36; // r6
  int v37; // r6
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  _DWORD *v40; // r0
  _DWORD *v41; // r0
  char *v42; // r1
  _DWORD *v43; // r0
  _DWORD *v44; // r0
  const char *v45; // r11
  int v46; // r9
  int v47; // r8
  int v48; // r10
  int v49; // r0
  const char *v50; // r1
  int v51; // r7
  int v52; // t1
  char *v53; // [sp+4h] [bp-1130h]
  char *format; // [sp+10h] [bp-1124h]
  char *v55; // [sp+18h] [bp-111Ch]
  char *v56; // [sp+20h] [bp-1114h]
  unsigned int *v57; // [sp+28h] [bp-110Ch]
  char v58[92]; // [sp+34h] [bp-1100h] BYREF
  char v59[160]; // [sp+90h] [bp-10A4h] BYREF
  char v60[4100]; // [sp+130h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = -14512;
  HIWORD(v2) = (unsigned int)&unk_16B55C >> 16;
  logfmt_raw(v60, 0x1000u, 0, 1245872, "judge_load_config");
  V_UNLOCK();
  LOWORD(v3) = -216;
  HIWORD(v3) = (unsigned int)"Unknown algo parameter '%s'" >> 16;
  zlog(*v2, v3, 127, "judge_load_config", 17, 536, 20, v60);
  if ( a1 )
  {
    file = (unsigned int *)json_load_file(a1, 0, v58);
    v5 = file;
    if ( !file || (v6 = *file) != 0 )
    {
      V_LOCK();
      v53 = a1;
      v7 = 0;
      logfmt_raw(v60, 0x1000u, 0, 1245900, "judge_load_config", v53, v59);
      V_UNLOCK();
      v8 = *v2;
      v9 = 100;
      v10 = 551;
LABEL_5:
      LOWORD(v11) = -216;
      HIWORD(v11) = (unsigned int)"Unknown algo parameter '%s'" >> 16;
      zlog(v8, v11, 127, "judge_load_config", 17, v10, v9, v60);
      return v7;
    }
    V_LOCK();
    logfmt_raw(v60, 0x1000u, 0, 1245940, "judge_load_config");
    V_UNLOCK();
    LOWORD(v13) = -216;
    HIWORD(v13) = (unsigned int)"Unknown algo parameter '%s'" >> 16;
    zlog(*v2, v13, 127, "judge_load_config", 17, 554, 20, v60);
    v14 = (_DWORD *)json_object_get(v5, "pools");
    v15 = v14;
    if ( !v14 || *v14 != 1 )
      goto LABEL_8;
    v29 = (char *)&unk_165584;
    v30 = json_array_size(v14);
    LOWORD(v31) = -7928;
    LOWORD(v32) = -23476;
    LOWORD(v33) = -7924;
    HIWORD(v31) = (unsigned int)&off_12D5A8 >> 16;
    HIWORD(v32) = (unsigned int)"e" >> 16;
    HIWORD(v33) = (unsigned int)_libc_csu_fini >> 16;
    dword_165580 = (int)v30;
    v55 = v31;
    format = v32;
    v56 = v33;
    v57 = v5;
    while ( (unsigned int)json_array_size(v15) > v6 )
    {
      v34 = json_array_get(v15, v6);
      v35 = v34;
      if ( !v34 )
        break;
      v36 = __clz(v6 - 3);
      ++v6;
      v37 = v36 >> 5;
      if ( *v34 )
        v37 = 1;
      if ( v37 )
        break;
      v38 = (_DWORD *)json_object_get(v34, v55);
      if ( !v38 )
        break;
      if ( *v38 != 2 )
        break;
      v39 = json_string_value(v38);
      snprintf(v29, 0x100u, format, v39);
      v40 = (_DWORD *)json_object_get(v35, v56);
      if ( !v40 )
        break;
      if ( *v40 != 2 )
        break;
      v41 = json_string_value(v40);
      snprintf(v29 + 256, 0x100u, format, v41);
      LOWORD(v42) = -1376;
      HIWORD(v42) = (unsigned int)"p died %x" >> 16;
      v43 = (_DWORD *)json_object_get(v35, v42);
      if ( !v43 || *v43 != 2 )
        break;
      v44 = json_string_value(v43);
      snprintf(v29 + 512, 0x100u, format, v44);
      V_LOCK();
      logfmt_raw(v60, 0x1000u, 0, 1245968, v29, v29 + 256, v29 + 512);
      V_UNLOCK();
      v29 += 768;
      zlog(
        *v2,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "judge_load_config",
        17,
        578,
        20,
        v60);
    }
    v5 = v57;
    v45 = (const char *)&unk_165584;
    v46 = total_pools;
    if ( total_pools == dword_165580 )
    {
      if ( total_pools <= 0 )
      {
LABEL_8:
        v7 = 0;
        goto LABEL_9;
      }
      v47 = 0;
      v48 = pools - 4;
      while ( 1 )
      {
        v52 = *(_DWORD *)(v48 + 4);
        v48 += 4;
        v51 = v52;
        ++v47;
        if ( strcmp(*(const char **)(v52 + 8), v45) )
          break;
        v49 = strcmp(*(const char **)(v51 + 12), v45 + 256);
        v50 = v45 + 512;
        v45 += 768;
        if ( v49 || strcmp(*(const char **)(v51 + 16), v50) )
          break;
        if ( v46 == v47 )
          goto LABEL_8;
      }
    }
    v7 = 1;
LABEL_9:
    LOWORD(v16) = -1268;
    HIWORD(v16) = (unsigned int)"d/godminer-origin_master/god-miner.c" >> 16;
    json_object_get(v5, v16);
    LOWORD(v17) = -1324;
    HIWORD(v17) = (unsigned int)"miner_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/god-miner.c" >> 16;
    v18 = (_DWORD *)json_object_get(v5, v17);
    if ( v18 )
    {
      if ( (unsigned int)(*v18 - 5) <= 1 )
      {
        LOWORD(v19) = 25400;
        HIWORD(v19) = (unsigned int)&g_miner_type[48] >> 16;
        v20 = *v18 == 5;
        if ( (unsigned __int8)*v19 != v20 )
        {
          v7 |= 4u;
          *v19 = v20;
        }
      }
    }
    LOWORD(v21) = -1304;
    HIWORD(v21) = (unsigned int)"ld/rootfs/buildroot/tmp/release/build/godminer-origin_master/god-miner.c" >> 16;
    v22 = (_DWORD *)json_object_get(v5, v21);
    if ( v22 )
    {
      if ( *v22 == 2 )
      {
        v27 = (const char *)json_string_value(v22);
        v28 = strtol(v27, 0, 10);
        if ( fan_pwm != v28 )
        {
          v7 |= 8u;
          fan_pwm = v28;
        }
      }
    }
    if ( v5[1] != -1 )
    {
      v23 = v5 + 1;
      __dmb(0xBu);
      do
      {
        v24 = __ldrex(v23);
        v25 = v24 - 1;
      }
      while ( __strex(v25, v23) );
      if ( !v25 )
        json_delete(v5);
    }
    V_LOCK();
    logfmt_raw(v60, 0x1000u, 0, 1245980, v7);
    V_UNLOCK();
    v8 = *v2;
    v9 = 20;
    v10 = 637;
    goto LABEL_5;
  }
  V_LOCK();
  logfmt_raw(v60, 0x1000u, 0, 1245884, "judge_load_config");
  V_UNLOCK();
  LOWORD(v26) = -216;
  HIWORD(v26) = (unsigned int)"Unknown algo parameter '%s'" >> 16;
  zlog(*v2, v26, 127, "judge_load_config", 17, 545, 100, v60);
  return 0;
}
