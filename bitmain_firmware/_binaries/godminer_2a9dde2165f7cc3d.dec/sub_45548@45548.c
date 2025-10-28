int __fastcall sub_45548(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _DWORD *v8; // r0
  const char *v9; // r11
  _DWORD *v10; // r0
  char *v11; // r7
  _DWORD *v12; // r0
  char *v13; // r8
  _DWORD *v14; // r0
  char *v15; // r9
  _DWORD *v16; // r0
  char *v17; // r10
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  int valid; // r0
  int v21; // r0
  int v22; // r4
  size_t v23; // r0
  void *v24; // r0
  void *v25; // r7
  void *v26; // r0
  void *v27; // r8
  size_t v28; // r0
  size_t v29; // r0
  size_t v30; // r0
  const char *v31; // r0
  int v32; // r0
  size_t v33; // r0
  int v34; // r0
  void *v35; // r9
  void *v36; // r0
  size_t v37; // r10
  size_t v38; // r11
  char *v39; // r0
  char *v40; // r9
  char *v41; // r0
  int v42; // r9
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r10
  int v48; // r0
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r12
  int v53; // r2
  int v54; // r3
  signed int v55; // r9
  int v56; // r0
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r9
  int v61; // r0
  int v62; // r1
  int v63; // r2
  int v64; // r3
  int v65; // r12
  int v66; // r2
  int v67; // r0
  _DWORD *v68; // r0
  unsigned __int8 *v69; // r0
  int v70; // r10
  unsigned __int8 *v71; // r11
  void *v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // [sp+10h] [bp-104Ch]
  char *s; // [sp+14h] [bp-1048h]
  pthread_mutex_t *sa; // [sp+14h] [bp-1048h]
  char *v78; // [sp+18h] [bp-1044h]
  bool v79; // [sp+1Ch] [bp-1040h]
  size_t n; // [sp+20h] [bp-103Ch]
  size_t v81; // [sp+24h] [bp-1038h]
  int v82; // [sp+2Ch] [bp-1030h] BYREF
  int v83; // [sp+30h] [bp-102Ch] BYREF
  int v84; // [sp+34h] [bp-1028h] BYREF
  int v85; // [sp+38h] [bp-1024h] BYREF
  int v86; // [sp+3Ch] [bp-1020h]
  int v87; // [sp+40h] [bp-101Ch]
  int v88; // [sp+44h] [bp-1018h]
  int v89; // [sp+48h] [bp-1014h]
  int v90; // [sp+4Ch] [bp-1010h]
  int v91; // [sp+50h] [bp-100Ch]
  int v92; // [sp+54h] [bp-1008h]
  _BYTE v93[4100]; // [sp+58h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v75 = (int)json_array_size(v5);
  v8 = json_array_get(a3, 0);
  v9 = (const char *)json_string_value(v8);
  v10 = json_array_get(a3, 1u);
  v11 = (char *)json_string_value(v10);
  v12 = json_array_get(a3, 2u);
  v13 = (char *)json_string_value(v12);
  v14 = json_array_get(a3, 3u);
  v15 = (char *)json_string_value(v14);
  v16 = json_array_get(a3, 5u);
  v17 = (char *)json_string_value(v16);
  v18 = json_array_get(a3, 6u);
  s = (char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v78 = (char *)json_string_value(v19);
  if ( json_array_get(a3, 8u) )
    v79 = *json_array_get(a3, 8u) == 5;
  else
    v79 = 0;
  valid = valid_ascii(v9);
  if ( valid
    && (valid = valid_hex(v11)) != 0
    && (valid = valid_hex(v13)) != 0
    && (valid = valid_hex(v15)) != 0
    && (valid = valid_hex(v17)) != 0
    && (valid = valid_hex(s)) != 0
    && (valid = valid_hex(v78), (v22 = valid) != 0) )
  {
    v23 = strlen(v11);
    hex2bin((int)&v85, (unsigned __int8 *)v11, v23 >> 1);
    n = strlen(v13) >> 1;
    v24 = calloc(n, 1u);
    v25 = v24;
    if ( !v24 )
    {
      V_LOCK(0);
      v74 = logfmt_raw((int)v93, 0x1000u);
      V_UNLOCK(v74);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        166,
        "stratum_notify_ltc",
        18,
        56,
        100,
        v93);
      return 0;
    }
    hex2bin((int)v24, (unsigned __int8 *)v13, n);
    v81 = strlen(v15) >> 1;
    v26 = calloc(v81, 1u);
    v27 = v26;
    if ( v26 )
    {
      hex2bin((int)v26, (unsigned __int8 *)v15, v81);
      v28 = strlen(v17);
      hex2bin((int)&v82, (unsigned __int8 *)v17, v28 >> 1);
      v29 = strlen(s);
      hex2bin((int)&v83, (unsigned __int8 *)s, v29 >> 1);
      v30 = strlen(v78);
      hex2bin((int)&v84, (unsigned __int8 *)v78, v30 >> 1);
      if ( a2 == (int *)-456 )
      {
        v22 = 0;
      }
      else
      {
        v31 = (const char *)a2[395];
        if ( v31 && !strcmp(v31, v9) )
        {
          V_LOCK(0);
          v32 = logfmt_raw((int)v93, 0x1000u);
          V_UNLOCK(v32);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            166,
            "stratum_notify_ltc",
            18,
            73,
            80,
            v93);
        }
        v33 = strlen(v9);
        if ( v33 > 0x3F )
        {
          V_LOCK(v33);
          strlen(v9);
          v34 = logfmt_raw((int)v93, 0x1000u);
          V_UNLOCK(v34);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            166,
            "stratum_notify_ltc",
            18,
            76,
            80,
            v93);
        }
        sa = (pthread_mutex_t *)(a2 + 398);
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
        v35 = (void *)a2[395];
        a2[395] = (int)_strdup(v9);
        if ( v35 )
          free(v35);
        v36 = (void *)a2[75];
        if ( v36 )
          free(v36);
        v37 = a2[19];
        v38 = v37 + a2[21] + n;
        a2[74] = v81 + v38;
        v39 = (char *)calloc(v81 + v38, 1u);
        v40 = v39;
        a2[75] = (int)v39;
        if ( v39 )
        {
          memcpy(v39, v25, n);
          memcpy(&v40[n], (const void *)a2[20], v37);
          v41 = &v40[v38];
          v42 = 0;
          memcpy(v41, v27, v81);
          v43 = v85;
          v44 = v86;
          v45 = v87;
          v46 = v88;
          a2[22] = n + v37;
          v47 = v82;
          a2[25] = v43;
          a2[26] = v44;
          a2[27] = v45;
          a2[28] = v46;
          v48 = v89;
          v49 = v90;
          v50 = v91;
          v51 = v92;
          v52 = v84;
          a2[83] = v47;
          a2[31] = v50;
          v53 = v83;
          a2[32] = v51;
          a2[29] = v48;
          a2[30] = v49;
          v54 = a2[81];
          a2[86] = v53;
          a2[89] = v52;
          while ( v42 < v54 )
          {
            if ( *(_DWORD *)(a2[82] + 4 * v42) )
            {
              free(*(void **)(a2[82] + 4 * v42));
              v54 = a2[81];
              *(_DWORD *)(a2[82] + 4 * v42) = 0;
            }
            ++v42;
          }
          v55 = 0;
          a2[81] = 0;
          if ( v75 )
          {
            a2[82] = (int)realloc((void *)a2[82], 4 * v75);
            while ( v55 < v75 )
            {
              v68 = json_array_get(v6, v55);
              v69 = (unsigned __int8 *)json_string_value(v68);
              v70 = a2[82];
              v71 = v69;
              v72 = malloc(0x20u);
              *(_DWORD *)(v70 + 4 * v55++) = v72;
              hex2bin((int)v72, v71, 32);
            }
            a2[81] = v75;
          }
          memset(a2 + 116, 0, 0x50u);
          v56 = v85;
          v57 = v86;
          v58 = v87;
          v59 = v88;
          a2[116] = v82;
          v60 = v83;
          a2[117] = v56;
          a2[118] = v57;
          a2[119] = v58;
          a2[120] = v59;
          v61 = v89;
          v62 = v90;
          v63 = v91;
          v64 = v92;
          v65 = v84;
          a2[134] = v60;
          a2[123] = v63;
          v66 = *a2;
          a2[124] = v64;
          a2[121] = v61;
          a2[122] = v62;
          *((_BYTE *)a2 + 444) = v79;
          a2[133] = v65;
          *((_QWORD *)a2 + 57) = v66;
          pthread_mutex_unlock(sa);
        }
        else
        {
          V_LOCK(0);
          v67 = logfmt_raw((int)v93, 0x1000u);
          V_UNLOCK(v67);
          v22 = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            166,
            "stratum_notify_ltc",
            18,
            87,
            100,
            v93);
          pthread_mutex_unlock(sa);
        }
      }
      free(v27);
    }
    else
    {
      V_LOCK(0);
      v73 = logfmt_raw((int)v93, 0x1000u);
      V_UNLOCK(v73);
      v22 = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        166,
        "stratum_notify_ltc",
        18,
        63,
        100,
        v93);
    }
    free(v25);
    return v22;
  }
  else
  {
    V_LOCK(valid);
    v21 = logfmt_raw((int)v93, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      166,
      "stratum_notify_ltc",
      18,
      48,
      100,
      v93);
    return 0;
  }
}
