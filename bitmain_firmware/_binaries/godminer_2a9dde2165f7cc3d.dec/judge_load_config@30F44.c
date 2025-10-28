int __fastcall judge_load_config(int a1)
{
  int v2; // r0
  int v3; // r0
  unsigned int *file; // r0
  unsigned int *v5; // r6
  unsigned int v6; // r7
  int v7; // r8
  int v8; // r0
  int v9; // r0
  int v10; // r12
  int v11; // r2
  int v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r10
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  int v21; // r0
  int v22; // r0
  const char *v23; // r0
  char *v24; // r9
  _DWORD *v25; // r0
  _DWORD *v26; // r8
  unsigned int v27; // r6
  int v28; // r6
  _DWORD *v29; // r0
  int v30; // r0
  _DWORD *v31; // r0
  int v32; // r0
  _DWORD *v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  const char *v37; // r11
  int v38; // r9
  int v39; // r8
  int v40; // r10
  int v41; // r0
  const char *v42; // r1
  int v43; // r7
  int v44; // t1
  unsigned int *v45; // [sp+28h] [bp-110Ch]
  char v46[92]; // [sp+34h] [bp-1100h] BYREF
  _BYTE v47[4100]; // [sp+130h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v47, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/pool.c",
         137,
         "judge_load_config",
         17,
         634,
         20,
         v47);
  if ( a1 )
  {
    file = (unsigned int *)json_load_file(a1, 0, v46);
    v5 = file;
    if ( !file || (v6 = *file) != 0 )
    {
      V_LOCK(file);
      v7 = 0;
      v8 = logfmt_raw((int)v47, 0x1000u);
      V_UNLOCK(v8);
      v9 = g_zc;
      v10 = 100;
      v11 = 649;
LABEL_5:
      zlog(
        v9,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/pool.c",
        137,
        "judge_load_config",
        17,
        v11,
        v10,
        v47);
      return v7;
    }
    V_LOCK(file);
    v13 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/pool.c",
      137,
      "judge_load_config",
      17,
      652,
      20,
      v47);
    v14 = (_DWORD *)json_object_get(v5, "pools");
    v15 = v14;
    if ( !v14 || *v14 != 1 )
      goto LABEL_8;
    v24 = (char *)&unk_1734D8;
    dword_1734D4 = json_array_size(v14);
    v45 = v5;
    while ( json_array_size(v15) > v6 )
    {
      v25 = (_DWORD *)json_array_get(v15, v6);
      v26 = v25;
      if ( !v25 )
        break;
      v27 = __clz(v6 - 3);
      ++v6;
      v28 = v27 >> 5;
      if ( *v25 )
        v28 = 1;
      if ( v28 )
        break;
      v29 = (_DWORD *)json_object_get(v25, "url");
      if ( !v29 )
        break;
      if ( *v29 != 2 )
        break;
      v30 = json_string_value(v29);
      snprintf(v24, 0x100u, "%s", v30);
      v31 = (_DWORD *)json_object_get(v26, "user");
      if ( !v31 )
        break;
      if ( *v31 != 2 )
        break;
      v32 = json_string_value(v31);
      snprintf(v24 + 256, 0x100u, "%s", v32);
      v33 = (_DWORD *)json_object_get(v26, "pass");
      if ( !v33 || *v33 != 2 )
        break;
      v34 = json_string_value(v33);
      v35 = snprintf(v24 + 512, 0x100u, "%s", v34);
      V_LOCK(v35);
      v36 = logfmt_raw((int)v47, 0x1000u);
      V_UNLOCK(v36);
      v24 += 768;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/pool.c",
        137,
        "judge_load_config",
        17,
        676,
        20,
        v47);
    }
    v5 = v45;
    v37 = (const char *)&unk_1734D8;
    v38 = total_pools;
    if ( total_pools == dword_1734D4 )
    {
      if ( total_pools <= 0 )
      {
LABEL_8:
        v7 = 0;
        goto LABEL_9;
      }
      v39 = 0;
      v40 = pools - 4;
      while ( 1 )
      {
        v44 = *(_DWORD *)(v40 + 4);
        v40 += 4;
        v43 = v44;
        ++v39;
        if ( strcmp(*(const char **)(v44 + 12), v37) )
          break;
        v41 = strcmp(*(const char **)(v43 + 16), v37 + 256);
        v42 = v37 + 512;
        v37 += 768;
        if ( v41 || strcmp(*(const char **)(v43 + 20), v42) )
          break;
        if ( v38 == v39 )
          goto LABEL_8;
      }
    }
    v7 = 1;
LABEL_9:
    json_object_get(v5, "bitmain-freq-level");
    v16 = (_DWORD *)json_object_get(v5, "bitmain-fan-ctrl");
    if ( v16 && (unsigned int)(*v16 - 5) <= 1 && fan_pwm_fixed != (*v16 == 5) )
    {
      v7 |= 4u;
      fan_pwm_fixed = *v16 == 5;
    }
    v17 = (_DWORD *)json_object_get(v5, "bitmain-fan-pwm");
    if ( v17 )
    {
      if ( *v17 == 2 )
      {
        v23 = (const char *)json_string_value(v17);
        v17 = (_DWORD *)strtol(v23, 0, 10);
        if ( (_DWORD *)fan_pwm != v17 )
        {
          v7 |= 8u;
          fan_pwm = (int)v17;
        }
      }
    }
    if ( v5[1] != -1 )
    {
      v18 = v5 + 1;
      __dmb(0xBu);
      do
      {
        v19 = __ldrex(v18);
        v20 = v19 - 1;
      }
      while ( __strex(v20, v18) );
      if ( !v20 )
        v17 = (_DWORD *)json_delete(v5);
    }
    V_LOCK(v17);
    v21 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v21);
    v9 = g_zc;
    v10 = 20;
    v11 = 735;
    goto LABEL_5;
  }
  V_LOCK(v3);
  v22 = logfmt_raw((int)v47, 0x1000u);
  V_UNLOCK(v22);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/pool.c",
    137,
    "judge_load_config",
    17,
    643,
    100,
    v47);
  return 0;
}
