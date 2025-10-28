int __fastcall stratum_subscribe_base(int a1, int a2)
{
  int v2; // r4
  void *v4; // r3
  const void *v5; // r2
  char *v6; // r1
  double *v8; // r7
  void *v9; // r9
  const char *v10; // r0
  size_t v11; // r0
  _BYTE *v12; // r0
  _BYTE *v13; // r6
  const void *v14; // r1
  size_t v15; // r2
  int v16; // r3
  _DWORD *v17; // r3
  int v18; // r2
  int v19; // r1
  int v21; // r0
  int v22; // r0
  char *v23; // r1
  _DWORD *v24; // r11
  int v25; // r0
  char *v26; // r1
  int v27; // r0
  int v28; // r10
  _BOOL4 v29; // r2
  int v30; // r3
  int v31; // r10
  _DWORD *v32; // r3
  int v33; // r1
  unsigned int *v34; // r3
  unsigned int v35; // r2
  unsigned int v36; // r2
  unsigned int *v37; // r3
  unsigned int v38; // r2
  unsigned int v39; // r2
  int v40; // r3
  _DWORD *v41; // r3
  int v42; // r1
  int *v43; // r12
  int v44; // r0
  int v45; // r1
  int v46; // r2
  int v47; // r3
  int v48; // r12
  const char *v49; // r0
  const char *v50; // r1
  int v51; // r11
  int v52; // r3
  int v53; // [sp+4h] [bp-1120h]
  void *src; // [sp+10h] [bp-1114h]
  const void *v55; // [sp+14h] [bp-1110h]
  _DWORD *v56; // [sp+18h] [bp-110Ch]
  char *v57; // [sp+1Ch] [bp-1108h]
  int v58[23]; // [sp+24h] [bp-1100h] BYREF
  char v59[160]; // [sp+80h] [bp-10A4h] BYREF
  char v60[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1816);
  if ( !*(_BYTE *)(a2 + 1816) )
  {
    LOWORD(v4) = 7892;
    LOWORD(v5) = 7812;
    LOWORD(v6) = 7692;
    v8 = (double *)v2;
    v9 = (void *)v2;
    HIWORD(v4) = (unsigned int)"%x" >> 16;
    HIWORD(v5) = (unsigned int)"w" >> 16;
    HIWORD(v6) = (unsigned int)"ECT" >> 16;
    src = v4;
    v55 = v5;
    v57 = v6;
    while ( 1 )
    {
      v10 = *(const char **)(a2 + 68);
      v11 = v10 ? strlen(v10) + 128 : 128;
      v12 = malloc(v11);
      v13 = v12;
      if ( v2 )
      {
        v14 = v55;
        v15 = 77;
      }
      else
      {
        v14 = src;
        v15 = 76;
      }
      memcpy(v12, v14, v15);
      if ( !(*(int (__fastcall **)(int, _BYTE *))(a1 + 16))(a2, v13) )
        break;
      if ( !socket_full(*(_DWORD *)(a2 + 32), 30) )
      {
        V_LOCK();
        LOWORD(v52) = 8000;
        HIWORD(v52) = (unsigned int)"pe '%.6s'" >> 16;
        logfmt_raw(v60, 0x1000u, 0, v52);
        V_UNLOCK();
        LOWORD(v17) = -14512;
        HIWORD(v17) = (unsigned int)&unk_16B55C >> 16;
        v18 = 136;
        goto LABEL_11;
      }
      v21 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
      v9 = (void *)v21;
      if ( !v21 )
        goto LABEL_12;
      v8 = json_loads(v21, 0, (char *)v58);
      free(v9);
      if ( v8 )
      {
        v22 = json_object_get(v8, v57);
        LOWORD(v23) = -22980;
        v24 = (_DWORD *)v22;
        HIWORD(v23) = (unsigned int)&unk_13996C >> 16;
        v25 = json_object_get(v8, v23);
        LOWORD(v26) = 11724;
        v56 = (_DWORD *)v25;
        HIWORD(v26) = (unsigned int)"e_extranonce_dash" >> 16;
        v27 = json_object_get(v8, v26);
        v28 = json_integer_value(v27);
        v29 = v24 == 0;
        if ( v28 != 1 )
          v29 = 1;
        if ( v29 || *v24 == 7 )
        {
          if ( !v2 )
            goto LABEL_41;
          if ( v56 )
            goto LABEL_28;
          v13 = malloc(0x11u);
          if ( v13 )
          {
            LOWORD(v43) = 8028;
            HIWORD(v43) = (unsigned int)"'\\u%04X\\u%04X'" >> 16;
            v44 = *v43;
            v45 = v43[1];
            v46 = v43[2];
            v47 = v43[3];
            v48 = v43[4];
            *(_DWORD *)v13 = v44;
            *((_DWORD *)v13 + 1) = v45;
            *((_DWORD *)v13 + 2) = v46;
            *((_DWORD *)v13 + 3) = v47;
            v13[16] = v48;
          }
LABEL_29:
          V_LOCK();
          LOWORD(v30) = 8048;
          HIWORD(v30) = (unsigned int)"lid Unicode '\\u%04X'" >> 16;
          v53 = v28;
          v31 = 0;
          logfmt_raw(v60, 0x1000u, 0, v30, v13, v53);
          V_UNLOCK();
          LOWORD(v32) = -14512;
          HIWORD(v32) = (unsigned int)&unk_16B55C >> 16;
          LOWORD(v33) = 7408;
          HIWORD(v33) = (unsigned int)"at hashrate double %f %s" >> 16;
          zlog(*v32, v33, 145, "stratum_subscribe_base", 22, 162, 100, v60);
        }
        else
        {
          if ( v56 && *v56 != 7 )
          {
            if ( !v2 )
            {
LABEL_41:
              v31 = v2;
              if ( v13 )
                goto LABEL_42;
              goto LABEL_31;
            }
LABEL_28:
            v13 = json_dumps(v56, 3);
            goto LABEL_29;
          }
          v31 = (*(int (__fastcall **)(int, int, _DWORD *, int))(a1 + 64))(a1, a2, v24, 1);
          if ( v31 )
          {
            v49 = *(const char **)(a2 + 28);
            *(_DWORD *)(a2 + 2080) = 2;
            if ( v49 )
            {
              if ( strstr(v49, "nicehash") )
              {
                LOWORD(v50) = 8096;
                *(_DWORD *)(a2 + 2080) = 3;
                HIWORD(v50) = (unsigned int)"" >> 16;
                sprintf(v13, v50, 2);
                v51 = (*(int (__fastcall **)(int, _BYTE *))(a1 + 16))(a2, v13);
                if ( v51 )
                {
                  v31 = socket_full(*(_DWORD *)(a2 + 32), 30);
                  if ( v31 )
                  {
                    (*(void (__fastcall **)(int))(a1 + 12))(a2);
                    free(v13);
                    goto LABEL_31;
                  }
                  v31 = v51;
                }
LABEL_42:
                free(v13);
LABEL_31:
                if ( *((_DWORD *)v8 + 1) != -1 )
                {
                  v34 = (unsigned int *)v8 + 1;
                  __dmb(0xBu);
                  do
                  {
                    v35 = __ldrex(v34);
                    v36 = v35 - 1;
                  }
                  while ( __strex(v36, v34) );
                  if ( !v36 )
LABEL_47:
                    json_delete(v8);
                }
                if ( v31 )
                  return 1;
                goto LABEL_15;
              }
            }
          }
        }
        if ( v13 )
          goto LABEL_42;
        goto LABEL_31;
      }
      V_LOCK();
      LOWORD(v40) = 7656;
      HIWORD(v40) = (unsigned int)" passed to valid_ascii" >> 16;
      logfmt_raw(v60, 0x1000u, 0, v40, v58[0], v59);
      V_UNLOCK();
      LOWORD(v41) = -14512;
      HIWORD(v41) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v42) = 7408;
      HIWORD(v42) = (unsigned int)"at hashrate double %f %s" >> 16;
      zlog(*v41, v42, 145, "stratum_subscribe_base", 22, 147, 100, v60);
      if ( v13 )
        free(v13);
LABEL_15:
      if ( v9 )
        v2 ^= 1u;
      else
        v2 = 0;
      if ( !v2 )
        return 0;
    }
    V_LOCK();
    LOWORD(v16) = 7968;
    HIWORD(v16) = (unsigned int)"lid escape" >> 16;
    logfmt_raw(v60, 0x1000u, 0, v16);
    V_UNLOCK();
    LOWORD(v17) = -14512;
    HIWORD(v17) = (unsigned int)&unk_16B55C >> 16;
    v18 = 131;
LABEL_11:
    LOWORD(v19) = 7408;
    HIWORD(v19) = (unsigned int)"at hashrate double %f %s" >> 16;
    zlog(*v17, v19, 145, "stratum_subscribe_base", 22, v18, 100, v60);
LABEL_12:
    if ( v13 )
    {
      free(v13);
      if ( v8 )
      {
        v31 = 0;
        goto LABEL_31;
      }
    }
    else if ( v8 )
    {
      if ( *((_DWORD *)v8 + 1) != -1 )
      {
        v37 = (unsigned int *)v8 + 1;
        __dmb(0xBu);
        do
        {
          v38 = __ldrex(v37);
          v39 = v38 - 1;
        }
        while ( __strex(v39, v37) );
        if ( !v39 )
        {
          v31 = 0;
          goto LABEL_47;
        }
      }
    }
    goto LABEL_15;
  }
  return 1;
}
