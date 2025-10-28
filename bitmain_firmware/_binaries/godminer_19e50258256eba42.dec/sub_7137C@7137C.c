int __fastcall sub_7137C(int a1, int *a2, const json_t *a3)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  size_t v6; // r3
  json_t *v7; // r0
  json_t *v8; // r0
  json_t *v9; // r0
  size_t v10; // r3
  json_t *v11; // r0
  bool v12; // r3
  size_t v13; // r0
  size_t v14; // r0
  size_t v15; // r0
  size_t v16; // r0
  size_t v17; // r0
  char *v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  json_t *v25; // r0
  void **v26; // r4
  _DWORD *v27; // lr
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r1
  int v32; // r2
  int v33; // r3
  _BYTE v37[16]; // [sp+24h] [bp-1090h] BYREF
  int v38; // [sp+1024h] [bp-90h] BYREF
  int v39; // [sp+1028h] [bp-8Ch] BYREF
  int v40; // [sp+102Ch] [bp-88h] BYREF
  int v41; // [sp+1030h] [bp-84h] BYREF
  int v42; // [sp+1034h] [bp-80h]
  int v43; // [sp+1038h] [bp-7Ch]
  int v44; // [sp+103Ch] [bp-78h]
  int v45; // [sp+1040h] [bp-74h]
  int v46; // [sp+1044h] [bp-70h]
  int v47; // [sp+1048h] [bp-6Ch]
  int v48; // [sp+104Ch] [bp-68h]
  char *v49; // [sp+1050h] [bp-64h]
  size_t v50; // [sp+1054h] [bp-60h]
  void *ptr; // [sp+1058h] [bp-5Ch]
  size_t n; // [sp+105Ch] [bp-58h]
  size_t nmemb; // [sp+1060h] [bp-54h]
  bool v54; // [sp+1067h] [bp-4Dh]
  signed int v55; // [sp+1068h] [bp-4Ch]
  const json_t *v56; // [sp+106Ch] [bp-48h]
  int *v57; // [sp+1070h] [bp-44h]
  void *v58; // [sp+1074h] [bp-40h]
  int i; // [sp+1078h] [bp-3Ch]
  signed int j; // [sp+107Ch] [bp-38h]
  char *s2; // [sp+1080h] [bp-34h]
  char *s; // [sp+1084h] [bp-30h]
  char *v63; // [sp+1088h] [bp-2Ch]
  char *v64; // [sp+108Ch] [bp-28h]
  char *v65; // [sp+1090h] [bp-24h]
  char *v66; // [sp+1094h] [bp-20h]
  char *v67; // [sp+1098h] [bp-1Ch]
  unsigned __int8 v68; // [sp+109Fh] [bp-15h]
  size_t v69; // [sp+10A0h] [bp-14h]
  void *src; // [sp+10A4h] [bp-10h]

  s2 = 0;
  s = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  src = 0;
  v58 = 0;
  v57 = a2 + 114;
  v56 = json_array_get(a3, 4u);
  if ( v56 && *(_DWORD *)v56 == 1 )
  {
    v55 = json_array_size(v56);
    v3 = json_array_get(a3, v69);
    s2 = (char *)json_string_value(v3);
    v4 = json_array_get(a3, v69 + 1);
    s = (char *)json_string_value(v4);
    v5 = json_array_get(a3, v69 + 2);
    v63 = (char *)json_string_value(v5);
    v6 = v69 + 3;
    v69 += 4;
    v7 = json_array_get(a3, v6);
    v64 = (char *)json_string_value(v7);
    v8 = json_array_get(a3, v69 + 1);
    v65 = (char *)json_string_value(v8);
    v9 = json_array_get(a3, v69 + 2);
    v66 = (char *)json_string_value(v9);
    v10 = v69 + 3;
    v69 += 4;
    v11 = json_array_get(a3, v10);
    v67 = (char *)json_string_value(v11);
    v12 = json_array_get(a3, v69) && *(_DWORD *)json_array_get(a3, v69) == 5;
    v54 = v12;
    if ( (unsigned __int8)valid_ascii(s2) != 1
      || (unsigned __int8)valid_hex(s) != 1
      || (unsigned __int8)valid_hex(v63) != 1
      || (unsigned __int8)valid_hex(v64) != 1
      || (unsigned __int8)valid_hex(v65) != 1
      || (unsigned __int8)valid_hex(v66) != 1
      || (unsigned __int8)valid_hex(v67) != 1 )
    {
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, "Stratum notify: invalid parameters");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        163,
        "stratum_notify_ltc",
        18,
        48,
        100,
        v37);
    }
    else
    {
      v13 = strlen(s);
      hex2bin(&v41, s, v13 >> 1);
      nmemb = strlen(v63) >> 1;
      src = calloc(nmemb, 1u);
      if ( src )
      {
        hex2bin(src, v63, nmemb);
        n = strlen(v64) >> 1;
        v58 = calloc(n, 1u);
        if ( v58 )
        {
          hex2bin(v58, v64, n);
          v14 = strlen(v65);
          hex2bin(&v40, v65, v14 >> 1);
          v15 = strlen(v66);
          hex2bin(&v39, v66, v15 >> 1);
          v16 = strlen(v67);
          hex2bin(&v38, v67, v16 >> 1);
          if ( v57 )
          {
            if ( v57[281] && !strcmp((const char *)v57[281], s2) )
            {
              V_LOCK();
              logfmt_raw(v37, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", v57[281], s2);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
                163,
                "stratum_notify_ltc",
                18,
                73,
                80,
                v37);
            }
            if ( strlen(s2) > 0x3F )
            {
              V_LOCK();
              v17 = strlen(s2);
              logfmt_raw(v37, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= %d", s2, v17, 64);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
                163,
                "stratum_notify_ltc",
                18,
                76,
                80,
                v37);
            }
            pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
            ptr = (void *)v57[281];
            v18 = strdup(s2);
            v57[281] = (int)v18;
            if ( ptr )
            {
              free(ptr);
              ptr = 0;
            }
            if ( a2[75] )
            {
              free((void *)a2[75]);
              a2[75] = 0;
            }
            a2[74] = a2[19] + nmemb + a2[21] + n;
            v50 = a2[74];
            a2[75] = (int)calloc(v50, 1u);
            if ( a2[75] )
            {
              memcpy((void *)a2[75], src, nmemb);
              memcpy((void *)(a2[75] + nmemb), (const void *)a2[20], a2[19]);
              memcpy((void *)(a2[75] + a2[19] + nmemb + a2[21]), v58, n);
              a2[22] = a2[19] + nmemb;
              v19 = v42;
              v20 = v43;
              v21 = v44;
              a2[25] = v41;
              a2[26] = v19;
              a2[27] = v20;
              a2[28] = v21;
              v22 = v46;
              v23 = v47;
              v24 = v48;
              a2[29] = v45;
              a2[30] = v22;
              a2[31] = v23;
              a2[32] = v24;
              a2[83] = v40;
              a2[86] = v39;
              a2[89] = v38;
              for ( i = 0; i < a2[81]; ++i )
              {
                if ( *(_DWORD *)(a2[82] + 4 * i) )
                {
                  free(*(void **)(a2[82] + 4 * i));
                  *(_DWORD *)(a2[82] + 4 * i) = 0;
                }
              }
              a2[81] = 0;
              if ( v55 )
              {
                a2[82] = (int)realloc((void *)a2[82], 4 * v55);
                for ( j = 0; j < v55; ++j )
                {
                  v25 = json_array_get(v56, j);
                  v49 = (char *)json_string_value(v25);
                  v26 = (void **)(a2[82] + 4 * j);
                  *v26 = malloc(0x20u);
                  hex2bin(*(_BYTE **)(a2[82] + 4 * j), v49, 32);
                }
                a2[81] = v55;
              }
              memset(v57 + 2, 0, 0x50u);
              v57[2] = v40;
              v27 = v57 + 3;
              v28 = v42;
              v29 = v43;
              v30 = v44;
              v57[3] = v41;
              v27[1] = v28;
              v27[2] = v29;
              v27[3] = v30;
              v31 = v46;
              v32 = v47;
              v33 = v48;
              v27[4] = v45;
              v27[5] = v31;
              v27[6] = v32;
              v27[7] = v33;
              v57[19] = v38;
              v57[20] = v39;
              *((_BYTE *)a2 + 444) = v54;
              *(_QWORD *)v57 = *a2;
              v68 = 1;
              pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
            }
            else
            {
              V_LOCK();
              logfmt_raw(v37, 0x1000u, 0, "Failed to calloc pool coinbase");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
                163,
                "stratum_notify_ltc",
                18,
                87,
                100,
                v37);
              pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
            }
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v37, 0x1000u, 0, "Failed to calloc pool coinbase2");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            163,
            "stratum_notify_ltc",
            18,
            63,
            100,
            v37);
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v37, 0x1000u, 0, "Failed to calloc pool coinbase1");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
          163,
          "stratum_notify_ltc",
          18,
          56,
          100,
          v37);
      }
    }
  }
  if ( v58 )
  {
    free(v58);
    v58 = 0;
  }
  if ( src )
  {
    free(src);
    src = 0;
  }
  return v68;
}
