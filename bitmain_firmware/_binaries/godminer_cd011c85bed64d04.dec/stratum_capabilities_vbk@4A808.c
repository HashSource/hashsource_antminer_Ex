bool __fastcall stratum_capabilities_vbk(int a1, int a2)
{
  int v2; // r0
  void *v3; // r6
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int command_type; // r0
  _BOOL4 v7; // r5
  int v8; // r0
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  const char *v15; // r0
  const char *v16; // r8
  int v17; // r0
  int v18; // r11
  int v19; // r10
  int v20; // r9
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // [sp+4h] [bp-1118h]
  int v33; // [sp+10h] [bp-110Ch]
  int v34; // [sp+14h] [bp-1108h]
  char v35[92]; // [sp+1Ch] [bp-1100h] BYREF
  _BYTE v36[4100]; // [sp+118h] [bp-1004h] BYREF

  v2 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  v3 = (void *)v2;
  if ( !v2 )
  {
    V_LOCK(0);
    v24 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_capabilities_vbk",
      24,
      86,
      100,
      v36);
    return 0;
  }
  v4 = (_DWORD *)json_loads(v2, 0, v35);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK(0);
    v25 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_capabilities_vbk",
      24,
      92,
      100,
      v36);
    free(v3);
    return 0;
  }
  command_type = get_command_type(v4);
  if ( !command_type )
  {
    free(v3);
    v13 = (_DWORD *)json_object_get(v5, "capabilities");
    v14 = (_DWORD *)json_object_get(v13, "data");
    v15 = (const char *)json_string_value(v14);
    v16 = v15;
    if ( !v15 || (v15 = (const char *)strlen(v15), (unsigned int)v15 <= 5) )
    {
      V_LOCK(v15);
      v26 = logfmt_raw((int)v36, 0x1000u);
      V_UNLOCK(v26);
      v27 = g_zc;
      v32 = 106;
LABEL_24:
      v7 = 0;
      zlog(
        v27,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_vbk/frontend_vbk.c",
        157,
        "stratum_capabilities_vbk",
        24,
        v32,
        100,
        v36);
      goto LABEL_5;
    }
    v17 = (int)&v15[(_DWORD)v16];
    v18 = *(unsigned __int8 *)(v17 - 2);
    v19 = *(unsigned __int8 *)(v17 - 3);
    v20 = *(unsigned __int8 *)(v17 - 4);
    v7 = *(unsigned __int8 *)(v17 - 1) == 49;
    v34 = *(unsigned __int8 *)(v17 - 5);
    v33 = *(unsigned __int8 *)(v17 - 6);
    if ( *(_BYTE *)(v17 - 1) != 49 )
    {
      V_LOCK(v17);
      v21 = logfmt_raw((int)v36, 0x1000u);
      V_UNLOCK(v21);
      v17 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_vbk/frontend_vbk.c",
              157,
              "stratum_capabilities_vbk",
              24,
              125,
              100,
              v36);
    }
    if ( v18 != 49 )
    {
      V_LOCK(v17);
      v22 = logfmt_raw((int)v36, 0x1000u);
      v7 = 0;
      V_UNLOCK(v22);
      v17 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_vbk/frontend_vbk.c",
              157,
              "stratum_capabilities_vbk",
              24,
              130,
              100,
              v36);
    }
    if ( v19 == 49 )
    {
      if ( v20 == 49 )
      {
        if ( v34 == 49 )
        {
          if ( v33 == 49 )
          {
            if ( v7 )
            {
              V_LOCK(v17);
              v31 = logfmt_raw((int)v36, 0x1000u);
              V_UNLOCK(v31);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/frontend/frontend_vbk/frontend_vbk.c",
                157,
                "stratum_capabilities_vbk",
                24,
                155,
                20,
                v36);
              goto LABEL_5;
            }
            goto LABEL_20;
          }
LABEL_29:
          V_LOCK(v17);
          v30 = logfmt_raw((int)v36, 0x1000u);
          V_UNLOCK(v30);
          v27 = g_zc;
          v32 = 150;
          goto LABEL_24;
        }
LABEL_28:
        V_LOCK(v17);
        v29 = logfmt_raw((int)v36, 0x1000u);
        V_UNLOCK(v29);
        v17 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/frontend/frontend_vbk/frontend_vbk.c",
                157,
                "stratum_capabilities_vbk",
                24,
                145,
                100,
                v36);
        if ( v33 == 49 )
          goto LABEL_20;
        goto LABEL_29;
      }
    }
    else
    {
      V_LOCK(v17);
      v23 = logfmt_raw((int)v36, 0x1000u);
      V_UNLOCK(v23);
      v17 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_vbk/frontend_vbk.c",
              157,
              "stratum_capabilities_vbk",
              24,
              135,
              100,
              v36);
      if ( v20 == 49 )
      {
        if ( v34 == 49 )
          goto LABEL_19;
        goto LABEL_28;
      }
    }
    V_LOCK(v17);
    v28 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v28);
    v17 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_vbk/frontend_vbk.c",
            157,
            "stratum_capabilities_vbk",
            24,
            140,
            100,
            v36);
    if ( v34 == 49 )
    {
LABEL_19:
      if ( v33 == 49 )
      {
LABEL_20:
        v7 = 0;
        goto LABEL_5;
      }
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  V_LOCK(command_type);
  v7 = 0;
  v8 = logfmt_raw((int)v36, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_vbk/frontend_vbk.c",
    157,
    "stratum_capabilities_vbk",
    24,
    98,
    100,
    v36);
  free(v3);
LABEL_5:
  if ( v5[1] == -1 )
    return v7;
  v9 = v5 + 1;
  __dmb(0xBu);
  do
  {
    v10 = __ldrex(v9);
    v11 = v10 - 1;
  }
  while ( __strex(v11, v9) );
  if ( v11 )
    return v7;
  json_delete(v5);
  return v7;
}
