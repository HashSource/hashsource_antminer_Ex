int __fastcall sub_5DEE4(_DWORD *a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r7
  int v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r10
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r10
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r10
  int v12; // r0
  int v13; // r0
  int v14; // r3
  _DWORD *v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r7
  _DWORD *v20; // r0
  int v21; // r6
  int v22; // r0
  int v23; // r0
  int v24; // r6
  _DWORD *v25; // r6
  _DWORD *v26; // r0
  _DWORD *v27; // r9
  int v28; // r0
  const char *v29; // r8
  int v30; // r0
  _DWORD *v31; // r0
  int v32; // r8
  int v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r8
  int v36; // r11
  int v37; // r0
  char **v38; // r9
  const char *v39; // r0
  const char *v40; // r1
  const char *v41; // r10
  const char *v42; // t1
  int v43; // r8
  _DWORD *v44; // r0
  _DWORD *v45; // r9
  int v46; // r0
  const char **v47; // r7
  const char *v48; // r0
  const char *v49; // r1
  const char *v50; // r9
  const char *v51; // t1
  int v52; // r0
  int v53; // r0
  int v54; // r2
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r2
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  unsigned int i; // [sp+14h] [bp-1018h]
  _DWORD *v68; // [sp+18h] [bp-1014h]
  _BYTE v69[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "pic");
  v2 = v1;
  if ( !v1 || *v1 )
  {
    V_LOCK(v1);
    v57 = logfmt_raw((int)v69, 0x1000u);
    V_UNLOCK(v57);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_chain_pic",
      16,
      714,
      100,
      v69);
    return -1;
  }
  V_LOCK(v1);
  v3 = logfmt_raw((int)v69, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain_pic",
    16,
    717,
    20,
    v69);
  v4 = (_DWORD *)json_object_get(v2, "type");
  v5 = v4;
  if ( !v4 || *v4 != 2 )
  {
    V_LOCK(v4);
    v52 = logfmt_raw((int)v69, 0x1000u);
    V_UNLOCK(v52);
    v53 = g_zc;
    v54 = 722;
LABEL_40:
    zlog(
      v53,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_chain_pic",
      16,
      v54,
      100,
      v69);
    return -1;
  }
  V_LOCK(v4);
  json_string_value(v5);
  v6 = logfmt_raw((int)v69, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain_pic",
    16,
    725,
    20,
    v69);
  v7 = (_DWORD *)json_object_get(v2, "i2c_addr");
  v8 = (int)v7;
  if ( !v7 || *v7 != 3 )
  {
    V_LOCK(v7);
    v55 = logfmt_raw((int)v69, 0x1000u);
    V_UNLOCK(v55);
    v53 = g_zc;
    v54 = 730;
    goto LABEL_40;
  }
  V_LOCK(v7);
  json_integer_value(v8);
  v9 = logfmt_raw((int)v69, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain_pic",
    16,
    733,
    20,
    v69);
  v10 = (_DWORD *)json_object_get(v2, "device_high");
  v11 = (int)v10;
  if ( !v10 || *v10 != 3 )
  {
    V_LOCK(v10);
    v56 = logfmt_raw((int)v69, 0x1000u);
    V_UNLOCK(v56);
    v53 = g_zc;
    v54 = 738;
    goto LABEL_40;
  }
  V_LOCK(v10);
  json_integer_value(v11);
  v12 = logfmt_raw((int)v69, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain_pic",
    16,
    741,
    20,
    v69);
  v13 = json_integer_value(v11);
  v14 = *(_DWORD *)(dword_18EC80 + 88);
  *(_DWORD *)(dword_18EC80 + 64) = v13;
  if ( (unsigned int)(v14 - 1) > 1 )
    return 0;
  v16 = (_DWORD *)json_object_get(v2, "pic_sensor");
  v68 = v16;
  if ( v16 && *v16 == 1 )
  {
    V_LOCK(v16);
    v17 = logfmt_raw((int)v69, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_chain_pic_sensor",
      23,
      569,
      20,
      v69);
    for ( i = 0; i < (unsigned int)json_array_size(v68); ++i )
    {
      v18 = json_array_get(v68, i);
      v19 = v18;
      if ( !v18 || *v18 )
      {
        V_LOCK(v18);
        v58 = logfmt_raw((int)v69, 0x1000u);
        V_UNLOCK(v58);
        v59 = g_zc;
        v60 = 576;
        goto LABEL_47;
      }
      v20 = (_DWORD *)json_object_get(v18, "index");
      v21 = (int)v20;
      if ( !v20 || *v20 != 3 )
      {
        V_LOCK(v20);
        v61 = logfmt_raw((int)v69, 0x1000u);
        V_UNLOCK(v61);
        v59 = g_zc;
        v60 = 583;
        goto LABEL_47;
      }
      V_LOCK(v20);
      json_integer_value(v21);
      v22 = logfmt_raw((int)v69, 0x1000u);
      V_UNLOCK(v22);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_pic_sensor",
        23,
        586,
        20,
        v69);
      v23 = json_integer_value(v21);
      v24 = *(_DWORD *)(dword_18EC80 + 84);
      *(_DWORD *)(v24 + 24 * v23) = v23;
      v25 = (_DWORD *)(v24 + 24 * v23);
      v25[2] = 0;
      v26 = (_DWORD *)json_object_get(v19, "type");
      v27 = v26;
      if ( !v26 || *v26 != 2 )
      {
        V_LOCK(v26);
        v62 = logfmt_raw((int)v69, 0x1000u);
        V_UNLOCK(v62);
        v59 = g_zc;
        v60 = 595;
        goto LABEL_47;
      }
      V_LOCK(v26);
      json_string_value(v27);
      v28 = logfmt_raw((int)v69, 0x1000u);
      V_UNLOCK(v28);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_pic_sensor",
        23,
        598,
        20,
        v69);
      v29 = (const char *)json_string_value(v27);
      v30 = strcmp(v29, "TMP451");
      if ( v30 )
      {
        if ( !strcmp(v29, "LM75A") )
        {
          v30 = 1;
        }
        else if ( !strcmp(v29, "unknow") )
        {
          v30 = 2;
        }
        else
        {
          v30 = 3;
        }
      }
      v25[1] = v30;
      v31 = (_DWORD *)json_object_get(v19, "iic");
      v32 = (int)v31;
      if ( !v31 || *v31 != 3 )
      {
        V_LOCK(v31);
        v63 = logfmt_raw((int)v69, 0x1000u);
        V_UNLOCK(v63);
        v59 = g_zc;
        v60 = 604;
        goto LABEL_47;
      }
      V_LOCK(v31);
      json_integer_value(v32);
      v33 = logfmt_raw((int)v69, 0x1000u);
      V_UNLOCK(v33);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_pic_sensor",
        23,
        607,
        20,
        v69);
      v25[5] = json_integer_value(v32);
      v34 = (_DWORD *)json_object_get(v19, "x");
      v35 = v34;
      if ( !v34 || *v34 != 2 )
      {
        V_LOCK(v34);
        v64 = logfmt_raw((int)v69, 0x1000u);
        V_UNLOCK(v64);
        v59 = g_zc;
        v60 = 613;
        goto LABEL_47;
      }
      V_LOCK(v34);
      v36 = 0;
      json_string_value(v35);
      v37 = logfmt_raw((int)v69, 0x1000u);
      V_UNLOCK(v37);
      v38 = off_148EB0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_pic_sensor",
        23,
        616,
        20,
        v69);
      v39 = (const char *)json_string_value(v35);
      v40 = "air_in";
      v41 = v39;
      while ( strcmp(v41, v40) )
      {
        v42 = *v38++;
        v40 = v42;
        ++v36;
      }
      v43 = 0;
      v25[3] = v36;
      v44 = (_DWORD *)json_object_get(v19, "y");
      v45 = v44;
      if ( !v44 || *v44 != 2 )
      {
        V_LOCK(v44);
        v65 = logfmt_raw((int)v69, 0x1000u);
        V_UNLOCK(v65);
        v59 = g_zc;
        v60 = 622;
        goto LABEL_47;
      }
      V_LOCK(v44);
      json_string_value(v45);
      v46 = logfmt_raw((int)v69, 0x1000u);
      V_UNLOCK(v46);
      v47 = (const char **)&unk_148ED0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_pic_sensor",
        23,
        625,
        20,
        v69);
      v48 = (const char *)json_string_value(v45);
      v49 = "top";
      v50 = v48;
      while ( strcmp(v50, v49) )
      {
        v51 = *v47++;
        v49 = v51;
        ++v43;
      }
      v25[4] = v43;
    }
    return 0;
  }
  V_LOCK(v16);
  v66 = logfmt_raw((int)v69, 0x1000u);
  V_UNLOCK(v66);
  v59 = g_zc;
  v60 = 566;
LABEL_47:
  zlog(
    v59,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain_pic_sensor",
    23,
    v60,
    100,
    v69);
  return -1;
}
