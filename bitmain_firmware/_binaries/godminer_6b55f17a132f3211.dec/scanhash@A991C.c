int __fastcall scanhash(int a1)
{
  char *v2; // r4
  int v3; // r0
  int v4; // r9
  int v5; // r0
  int v6; // r4
  void *v7; // r10
  char *v8; // r11
  int v9; // r3
  int v11; // r8
  int v12; // r0
  unsigned int v13; // r0
  int v14; // r2
  _QWORD *v15; // r8
  __int64 v16; // kr08_8
  int v17; // r12
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r3
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r3
  unsigned int v27; // [sp+14h] [bp-1228h]
  int v28; // [sp+18h] [bp-1224h]
  unsigned int v29; // [sp+1Ch] [bp-1220h]
  int v30; // [sp+24h] [bp-1218h]
  char v31; // [sp+2Fh] [bp-120Dh] BYREF
  int v32; // [sp+30h] [bp-120Ch] BYREF
  int v33; // [sp+34h] [bp-1208h] BYREF
  _BYTE s[512]; // [sp+38h] [bp-1204h] BYREF
  _BYTE v35[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  v3 = snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 208));
  V_LOCK(v3);
  v27 = 1;
  syscall(224);
  v4 = 0;
  v5 = logfmt_raw((int)v35, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_base.c",
    149,
    "scanhash",
    8,
    116,
    40,
    v35);
  prctl(15, v2);
  v29 = 1;
  v6 = *(_DWORD *)(a1 + 808);
  v7 = calloc(1u, *(_DWORD *)(a1 + 784));
  v28 = 0;
  v8 = (char *)calloc(1u, *(_DWORD *)(a1 + 788));
  while ( 1 )
  {
    memset(s, 0, sizeof(s));
    queue_dequeue(v6, s, 1);
    if ( *(_BYTE *)(a1 + 836) )
      break;
LABEL_5:
    v9 = s[0];
    while ( 1 )
    {
      if ( v9 != 170 )
      {
        queue_dequeue(v6, s, 1);
        if ( *(_BYTE *)(a1 + 836) )
          goto LABEL_10;
        goto LABEL_5;
      }
      queue_dequeue(v6, &s[1], 1);
      if ( *(_BYTE *)(a1 + 836) )
        goto LABEL_10;
      v9 = s[1];
      if ( s[1] == 85 )
        break;
      s[0] = s[1];
    }
    queue_dequeue(v6, &s[2], 1);
    v30 = (*(int (__fastcall **)(_DWORD))(a1 + 172))(s[2]);
    queue_dequeue(v6, &s[3], v30);
    v11 = *(unsigned __int8 *)(a1 + 836);
    if ( *(_BYTE *)(a1 + 836) )
      break;
    memset(v7, *(unsigned __int8 *)(a1 + 836), *(_DWORD *)(a1 + 784));
    v32 = v11;
    v33 = v11;
    v31 = v11;
    v12 = (*(int (__fastcall **)(int, _BYTE *, void *, char *, char *, int *, int *))(a1 + 68))(
            a1,
            s,
            v7,
            &v31,
            v8,
            &v32,
            &v33);
    if ( v12 == 10 )
    {
      if ( !queue_enqueue(*(_DWORD *)(a1 + 816), s, v30 + 3) && v29 <= ++v28 )
      {
        V_LOCK(0);
        v23 = logfmt_raw((int)v35, 0x1000u);
        V_UNLOCK(v23);
        v24 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/backend/backend_base.c",
                149,
                "scanhash",
                8,
                225,
                40,
                v35);
        V_LOCK(v24);
        v28 = 0;
        v25 = logfmt_raw((int)v35, 0x1000u);
        V_UNLOCK(v25);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/backend_base.c",
          149,
          "scanhash",
          8,
          226,
          40,
          v35);
        v26 = 10 * v29;
        if ( 10 * v29 >= 0x989680 )
          v26 = 10000000;
        v29 = v26;
      }
    }
    else if ( v12 == 11 )
    {
      ++*(_QWORD *)(*(_DWORD *)(a1 + 416) + 40);
    }
    else if ( !v12 && *(_BYTE *)(a1 + 218) )
    {
      if ( !*(_BYTE *)(a1 + v33 + 488) && v31 && platform_check_repeat_nonce(a1, v32, v8) )
      {
        ++*(_QWORD *)(*(_DWORD *)(a1 + 416) + 48 * v32 + 32);
      }
      else
      {
        v13 = (*(int (__fastcall **)(int, void *))(a1 + 72))(a1, v7);
        if ( v13 <= 5 )
        {
          v14 = v32;
          v15 = (_QWORD *)(*(_DWORD *)(a1 + 416) + 8 * v13 + 48 * v32);
          ++*v15;
          if ( v13 <= 1 )
          {
            v16 = *(_QWORD *)(a1 + 408) + 1LL;
            ++*(_DWORD *)(*(_DWORD *)(a1 + 440) + 4 * v14);
            v17 = v33;
            *(_QWORD *)(a1 + 408) = v16;
            ++*(_QWORD *)(a1 + 8 * v17 + 520);
            if ( !v13
              && !*(_BYTE *)(a1 + v17 + 488)
              && !queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 820) + 812), v7, 1)
              && v27 <= ++v4 )
            {
              V_LOCK(0);
              v18 = logfmt_raw((int)v35, 0x1000u);
              V_UNLOCK(v18);
              v19 = zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/"
                      "godminer-origin_godminer-new/backend/backend_base.c",
                      149,
                      "scanhash",
                      8,
                      200,
                      40,
                      v35);
              V_LOCK(v19);
              v20 = logfmt_raw((int)v35, 0x1000u);
              V_UNLOCK(v20);
              v4 = 0;
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/backend/backend_base.c",
                149,
                "scanhash",
                8,
                201,
                40,
                v35);
              v21 = 10 * v27;
              if ( 10 * v27 >= 0x989680 )
                v21 = 10000000;
              v27 = v21;
            }
          }
        }
      }
    }
  }
LABEL_10:
  *(_BYTE *)(a1 + 836) = 0;
  free(v7);
  free(v8);
  return 0;
}
